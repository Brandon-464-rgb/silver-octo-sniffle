#include <stdio.h>

long long factorial(int n) {
    if (n == 0) {
     return 1; 
    }  if (n < 0) {
        return -1; 
    }  {
     return n * factorial(n - 1);  }
}
    int main() {
    int num;

    printf("Ingresé el dato: ");
    scanf("%d", &num);

    if (num < 0) {
        printf(".\n");
    }  {
    long long fact = factorial(num);
    printf("El factorial de %d es: %lld\n", num, fact);
    }

    return 0;
}
