#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 20

int main(void) {
    char user_input[MAX_LENGTH];
    printf("Ingrese su nombre y apellido: ");
    strtok(fgets(user_input, MAX_LENGTH, stdin), "\n");

    printf("Te damos la bienvenida %s a este maravilloso programa!\n", user_input);

    return EXIT_SUCCESS;
}

