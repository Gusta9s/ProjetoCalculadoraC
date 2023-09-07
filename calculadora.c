#include <stdio.h>
#include <stdlib.h>


int hexToDecimal(char *hex){
    return (int)strtol(hex, NULL, 16);
}

char *decimalToHex(int decimal){
    char *hex = (char *)malloc(9 * sizeof(char));
    sprintf(hex, "%X", decimal);
    return hex;
}

int main()
{
    char operador;
    scanf(" %c", &operador);

    do{

        char h1[9], h2[9];
        float v1, v2;
        int x1, x2, resultado;

        printf("Digite um operador desejado: ");
        scanf(" %c", &operador);

        switch (operador)
        {
        case '+':

            printf("Digite o primeiro numero: ");
            scanf("%f", &v1);

            printf("Digite o segundo numero: ");
            scanf("%f", &v2);

            printf("O resultado: %f + %f = %f\n", v1 , v2 , v1 + v2);
            break;

            case '-':
            
            printf("Digite o primeiro numero: ");
            scanf("%f", &v1);

            printf("Digite o segundo numero: ");
            scanf("%f", &v2);

            printf("O resultado: %f - %f = %f\n", v1 , v2 , v1 - v2);
            break;

            case '*':
            
            printf("Digite o primeiro numero: ");
            scanf("%f", &v1);

            printf("Digite o segundo numero: ");
            scanf("%f", &v2);

            printf("O resultado: %f * %f = %f\n", v1 , v2 , v1 * v2);
            break;

            case '/':
            
            printf("Digite o primeiro numero: ");
            scanf("%f", &v1);

            printf("Digite o segundo numero: ");
            scanf("%f", &v2);

            printf("O resultado: %f / %f = %f\n", v1 , v2 , v1 / v2);
            break;

            case 'h':
            
            printf("Digite o primeiro numero hexadecimal: ");
            scanf("%s", h1);

            printf("Digite o segundo numero hexadecimal: ");
            scanf("%s", h2);

            x1 = hexToDecimal(h1);
            x2 = hexToDecimal(h2);

            resultado = x1 + x2;

            char *resultadoHexadecimal = decimalToHex(resultado);

            printf("O resultado: %s + %s = %s\n", h1 , h2 , resultadoHexadecimal);
            free(resultadoHexadecimal);
            break;
        
        default:
                printf("Operador desconhecido.\n");
                break;
        }
        
    } while(operador != 'q');

    return 0;
}
