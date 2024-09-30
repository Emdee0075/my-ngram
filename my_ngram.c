#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void xterCount(char current, int count) {
    printf("%c:%d\n", current, count);
}

void processCharacter(const char *text, char current) {
    int count = 0;
    for (int y = 0; text[y] != '\0'; y++) {
        if (current == text[y])
            count++;
    }
    if (count != 0)
        xterCount(current, count);
}

void stringLoop(int argc, char *argv[]) {
    char current = ' ';
    while (current <= '~') {
        if (current != '"') {
            for (int x = 1; x < argc; x++) {
                processCharacter(argv[x], current);
            }
        }
        current++;
    }
}

int main(int argc, char *argv[]) {
    stringLoop(argc, argv);
     return 0;
 }


