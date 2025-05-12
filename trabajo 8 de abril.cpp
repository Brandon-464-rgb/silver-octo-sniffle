#include <stdio.h>
#include <string.h>

int main() {
    char palabra_1[100];
    char palabra_2[100];
    char temp[100];
    printf("Ingresa la primera palabra: ");
    scanf("%s", palabra_1);
    printf("Ingresa la segunda palabra: ");
    scanf("%s", palabra_2);

    printf("\nAntes:\n");
    printf("Palabra_1 = %s\n", palabra_1);
    printf("Palabra_2 = %s\n", palabra_2);
    strcpy(temp, palabra_1);
    strcpy(palabra_1, palabra_2);
    strcpy(palabra_2, temp);
    printf("\nDespués:\n");
    printf("Palabra_1 = %s\n", palabra_1);
    printf("Palabra_2 = %s\n", palabra_2);

    return 0;
}
