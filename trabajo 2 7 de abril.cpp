#include <stdio.h>
#include <string.h>

int main() {
    // Declarar una cadena y una variable para la longitud
    char cad[] = "Es una cadena";
    int len;

    // Calcular la longitud de la cadena
    len = strlen(cad);

    // Imprimir la cadena y su longitud
    printf("La longitud de \"%s\" es: %d\n", cad, len);

    // Esperar a que el usuario presione una tecla (alternativa a system("pause"))
    printf("Presiona ENTER para salir...");
    getchar();

    return 0;
}