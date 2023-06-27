#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generatePassword(char* password, int length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    int charsetSize = sizeof(charset) - 1;

    srand(time(NULL));

    for (int i = 0; i < length; i++) {
        int index = rand() % charsetSize;
        password[i] = charset[index];
    }

    password[length] = '\0';
}

int main() {
    int length = 10;
    char password[length + 1];

    generatePassword(password, length);
    printf("%s\n", password);

    return 0;
}

