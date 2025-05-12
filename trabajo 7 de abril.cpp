#include <stdio.h>
#include <stdlib.h>

int main() {
    char cad[10];
    printf("Introduce una palabra \n");
    fgets(cad, sizeof(cad), stdin);
    printf("\n%s\n", cad);
    system("pause");
    return 0;
}