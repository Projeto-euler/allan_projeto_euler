#include <stdio.h>

int main() {
    int somaDosQuadrados = 0;
    int quadradoDaSoma = 0;
    int diferenca = 0;

    for (int i = 1; i <= 100; i++) {
        somaDosQuadrados += i * i;
        quadradoDaSoma += i;
    }

    quadradoDaSoma *= quadradoDaSoma;
    diferenca = quadradoDaSoma - somaDosQuadrados;

    printf("A diferença entre a soma dos quadrados dos primeiros cem números naturais e o quadrado da soma é: %d\n", diferenca);

    return 0;
}
