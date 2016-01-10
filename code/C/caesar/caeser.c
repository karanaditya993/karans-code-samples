#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Caesar cipher program.

// First declare an array of upper_ascii_numbers and
// lower_ascii_numbers that will be used for
// comparison later on
const int upper_ascii_numbers[26] = {65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90};
const int lower_ascii_numbers[26] = {97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122};

void CaesarString(int key);
int GetIndexOf(int value);
// call these functions now so that they can be used below

int main(int argc, string argv[]){
    int k;
    if (argc > 2 || argc == 1) {
        printf("Please input one numerical key.\n");
        return 1;
    }
    else {
        k = atoi(argv[1]);
        CaesarString(k);
        return 0;
    }
}

void CaesarString(int key) {
    string s = GetString();
    int index, conversion;

    for (int i = 0, n = strlen(s); i < n; i++){
        if((int) s[i] >= 65 && s[i] < 91) {
            index = GetIndexOf((int) s[i]);
            conversion = (index + key) % 26;
            printf("%c", (char) upper_ascii_numbers[conversion ]);
        }
        else if ((int) s[i] >= 97 && s[i] < 123) {
            index = GetIndexOf((int) s[i]);
            conversion = (index + key) % 26;
            printf("%c", (char) lower_ascii_numbers[conversion]);
        }
        else {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}

int GetIndexOf(int value) {
    for (int i = 0; i < 26; i++) {
        if (value == upper_ascii_numbers[i]) {
            return i;
        }
        else if (value == lower_ascii_numbers[i]) {
            return i;
        }
    }
    return 0;
}