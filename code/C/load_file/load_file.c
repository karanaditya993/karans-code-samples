#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

/**
 * Loads a file into memory dynamically allocated on heap.
 * Stores address thereof in *content and length thereof in *length.
 */
bool load(FILE* file, BYTE** content, size_t* length) {
    // allocate memory of 1 byte size (char) and add pointer to
    // that memory
    char* data = malloc(sizeof(char));
    // Error checking, exit if file is NULL
    if (data == NULL) {
        return false;
    }
    // Statically allocate memory in stack for file_length
    int file_length = 0;
    // Read in file one character at a time
    for (int c = fgetc(file); c != EOF; c = fgetc(file)) {
        // Push each character into file_contents (cast int c)
        data[file_length] = (char) c;
        // Increment index
        file_length++;
        // Increase buffer to hold more characters (+1 for null terminator)
        // until the end of the file
        data = (char*)realloc(data, sizeof(char) * (file_length+1));
    }
    *content = data;
    *length = file_length;
    return true;
}
