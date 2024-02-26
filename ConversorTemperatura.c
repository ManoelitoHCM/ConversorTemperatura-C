#include <stdio.h>

double ConverteTemperatura(double temperatura, char escolha, char *tempEscolha) {
    double resultado = 0.0;

    switch (escolha) {
        case 'C':
        case 'c':
            printf("Escolha para qual unidade deseja converter (F para Fahrenheit, K para Kelvin): ");
            scanf(" %c", tempEscolha);
            switch (*tempEscolha) {
                case 'F':
                case 'f':
                    resultado = (9.0 / 5.0) * temperatura + 32;
                    break;
                case 'K':
                case 'k':
                    resultado = temperatura - 273.15;
                    break;
                default:
                    printf("Opção de conversão inválida.\n");
                    break;
            }
            break;
        case 'F':
        case 'f':
            printf("Escolha para qual unidade deseja converter (C para Celsius, K para Kelvin): ");
            scanf(" %c", tempEscolha);
            switch (*tempEscolha) {
                case 'C':
                case 'c':
                    resultado = (temperatura - 32) * 5.0 / 9.0;
                    break;
                case 'K':
                case 'k':
                    resultado = (temperatura - 32) * 5.0 / 9.0 - 273.15;
                    break;
                default:
                    printf("Opção de conversão inválida.\n");
                    break;
            }
            break;
        case 'K':
        case 'k':
            printf("Escolha para qual unidade deseja converter (C para Celsius, F para Fahrenheit): ");
            scanf(" %c", tempEscolha);
            switch (*tempEscolha) {
                case 'C':
                case 'c':
                    resultado = temperatura + 273.15;
                    break;
                case 'F':
                case 'f':
                    resultado = (9.0 / 5.0) * temperatura + 32 - 273.15;
                    break;
                default:
                    printf("Opção de conversão inválida.\n");
                    break;
            }
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return resultado;
}

int main() {
    printf("Bem-vindo ao conversor de temperatura.\n");
    printf("Digite o valor numérico para a temperatura: ");
    double temperatura;
    char tempEscolha;

    scanf("%lf", &temperatura);

    printf("Digite a unidade da temperatura (C para Celsius, F para Fahrenheit, K para Kelvin): ");
    char escolha;
    scanf(" %c", &escolha);

    double resultado = ConverteTemperatura(temperatura, escolha, &tempEscolha);

    printf("Resultado da conversão: %.2lf %c\n", resultado, tempEscolha);

    return 0;
}
