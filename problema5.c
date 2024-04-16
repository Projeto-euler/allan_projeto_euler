#include <stdio.h>

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mmc(int a, int b) {
    return a * (b / mdc(a, b));
}

int main() {
    int resultado = 1;
    for (int i = 1; i <= 20; i++) {
        resultado = mmc(resultado, i);
    }
    printf("O menor número positivo que é divisível uniformemente por todos os números de 1 a 20 é: %d\n", resultado);
    return 0;
}
