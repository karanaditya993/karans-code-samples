#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// The point of this program is to have the user
// input his/her name and then print out the
// initials of their name with no spaces in between
// and all capitalized.

// toupper and isspace convert the letters to
// uppercase and check for whitespace, respectively
// both are included in the ctype.h library

int main(void) {
    string s = GetString();

    printf("%c", toupper(s[0]));

    for (int i = 0, n = strlen(s); i < n; i++) {
        if (isspace(s[i])) {
            printf("%c", toupper(s[i+1]));
        }
    }
    printf("\n");
}