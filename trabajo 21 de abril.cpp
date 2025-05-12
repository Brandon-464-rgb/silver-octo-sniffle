#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int len;
    char origen[] = "brisas";
    char destino[11] = "para";

    strcat(destino, origen);  // Concatena "brisas" al final de "para"
    printf("destino: %s\n", destino);  // Muestra "parabrisas"
    system("pause");

    return 0;
}