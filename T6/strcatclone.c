#include <stdio.h>
#include <string.h>

/*
Credit to Alice for the code snippet!
*/
void strcatClone(char *dest, char *prefix, char *suffix) {
    int i = 0, j = 0;
    while (prefix[i] != '\n') {
        dest[i] = prefix[i];
        i++;
    }
    while (suffix[j] != '\n') {
        dest[i] = suffix[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

int main(void)
{
    char destBuffer[50] = {'\0'};
    char firstInput[25];
    char secondInput[25];

    printf("Please enter first string: ");
    fgets(firstInput, 25, stdin);
    printf("Please enter second string: ");

    fgets(secondInput, 25, stdin);

    strcatClone(destBuffer, firstInput, secondInput);
    printf("%s\n", destBuffer);
}