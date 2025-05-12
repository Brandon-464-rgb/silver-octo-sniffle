#include <stdio.h>
#include <string.h>

int main() {
   char palabra1[50], palabra2[50], resultado[500] = "";
    int i, longitud;

    printf("Ingresa la primera palabra: ");
    scanf("%s", palabra1);

    printf("Ingresa la segunda palabra: ");
    scanf("%s", palabra2);

    longitud = strlen(palabra1);

    
    strcpy(resultado, palabra1);

    for (i = 0; i < longitud; i++) {
      strcat(resultado, palabra2);
    }

    printf("Resultado: %s\n", resultado);

    return 0;
}