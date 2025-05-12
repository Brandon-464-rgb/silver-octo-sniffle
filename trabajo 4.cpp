#include <stdio.h>
#include <string.h>

int main() {
    char palabra[1];
    
    printf("Escribe una palabra: ");
    scanf("%s", palabra);

    int longitud = strlen(palabra);

    for(int i = 0; i < longitud; i++) {
        for(int j = 0; j < longitud; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}