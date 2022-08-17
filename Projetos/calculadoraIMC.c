#include <stdio.h>

void main()
{

    double peso, altura, calcIMC;

    printf("Digite o seu peso: ");
    scanf("%lf", &peso);
    printf("Digite sua altura: ");
    scanf("%lf", &altura);

    calcIMC = peso / (altura * altura);

    if (calcIMC < 20)
    {
        printf("IMC = %.2lf -> Abaixo do peso \n ", calcIMC);
    }
    else if ((calcIMC >= 20) && (calcIMC <= 24))
    {
        printf("IMC = %.2lf -> Peso normal \n ", calcIMC);
    }
    else if ((calcIMC >= 25) && (calcIMC <= 29))
    {
        printf("IMC = %.2lf -> Acima do peso \n ", calcIMC);
    }
    else if ((calcIMC >= 30) && (calcIMC <= 34))
    {
        printf("IMC = %.2lf -> Obesidade \n ", calcIMC);
    }
    else
    {
        printf("IMC = %.2lf -> Muito obesa \n ", calcIMC);
    }
}
