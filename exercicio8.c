// Escreva o seu código a seguir
#include <stdio.h>

int main() {
float N1,N2,N3,N4,res;
N4=0.1;
    printf("Preço diário do aluguer:");
        scanf("%f", &N1);
    printf("Número de dias do aluguer:");
        scanf("%f", &N2);
    printf("Kilómetros realizados:");
        scanf("%f", &N3);
res=(N4*N3)+(N1*N2);
    printf("O preço do aluguer é %.2f euros",res);
}

