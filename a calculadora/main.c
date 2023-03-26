#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <ctype.h>
//#include <unistd.h> remover de comentario

HANDLE hConsole;
// trocar cor resposta
int trocaCorrp(int resp)
{
    int op, j;
    do
    {
        printf("Queres alterar a cor das respotas? (0 - Nao     1 - Sim)\n");
        if (scanf("%d", &op) != 1)
        {
            while (getchar() != '\n')
                ;
        }
    } while (op != 0 && op != 1);
    if (op == 1)
    {
        for (int i = 0; i <= 255; i++)
        {
            SetConsoleTextAttribute(hConsole, i);
            printf("%d  ", i);
            if (j % 16 == 0)
            {
                printf("\n");
                j = 1;
            }
            else
                j++;
        } // 16
        do
        {
            printf("Escolhe uma cor para as respotas (entre 0 e 255):\n");
            if (scanf("%d", &resp) != 1)
            {
                while (getchar() != '\n')
                    ;
            }
        } while (resp < 0 || resp > 255);
        if (resp == 0 || op == 0)
            return 10;
        else
            return resp;
    }
}
//  Trocar cor do programa
int trocaCorpr(int program)
{
    int op, j = 1;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    do
    {
        printf("Queres alterar a cor do programa? (0 - Nao     1 - Sim)\n");
        if (scanf("%d", &op) != 1)
        {
            while (getchar() != '\n')
                ;
        }
    } while (op != 0 && op != 1);

    if (op == 1)
    {
        for (int i = 0; i <= 255; i++)
        {
            SetConsoleTextAttribute(hConsole, i);
            printf("%d  ", i);
            if (j % 16 == 0)
            {
                printf("\n");
                j = 1;
            }
            else
                j++;
        } // 16
        SetConsoleTextAttribute(hConsole, 10);
        do
        {
            printf("Escolhe uma cor para o programa (entre 0 e 255):\n");
            if (scanf("%d", &program) != 1)
            {
                while (getchar() != '\n')
                    ;
            }
        } while (program < 0 || program > 255);
        if (program == 0 || op == 0)
            return 10;
        else
        {
            return program;
            SetConsoleTextAttribute(hConsole, program);
        }
    }
}
void menu()
{
    printf("\n\n1. Somar Numeros\n");
    printf("2. Subtrair Numeros\n");
    printf("3. Multiplicar Numeros\n");
    printf("4. Dividir Numeros\n");
    printf("5. Raiz Quadrada\n");
    printf("6. Potencia de dois numeros\n");
    printf("7. Percentagem\n");
    printf("8. Seno (sin)\n");
    printf("9. Cosseno (cos)\n");
    printf("10. Tangente (tan)\n");
    printf("11. Logaritmo (log)\n");
    printf("12. Exponencial (exp)\n");
    printf("13. Sair Programa\n ");
}

int main()
{
    float n1, n2, conta;
    int op, resultado, resp = 14, program = 10;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, program);
    if (trocaCorrp(resp) == 0)
        resp = 10;
    else
        resp = trocaCorrp(resp);

    if (trocaCorpr(program) == 0)
        program = 10;
    else
        program = trocaCorpr(program);

    while (1)
    {
        SetConsoleTextAttribute(hConsole, program);
        menu();
        fflush(stdin);
        scanf("%d", &op);
        if (op)
        {
            switch (op)
            {
            case 1: // SOMAR
                do
                {
                    printf("Introduz dois numeros para somar (n1 + n2): ");
                    fflush(stdin);
                    resultado = scanf("%f %f", &n1, &n2);
                    if (resultado != 2)
                    {
                        printf("Invalido!! Introduz dois numeros\n");
                        fflush(stdin);
                    }
                } while (resultado != 2);
                SetConsoleTextAttribute(hConsole, resp);
                printf("%.1f + %.1f = %.1f", n1, n2, n1 + n2);
                SetConsoleTextAttribute(hConsole, program);
                printf("\n\n");
                break;
            case 2: // SUBTRAIR
                do
                {
                    printf("Introduz dois numeros para subtrair (n1 - n2): ");
                    fflush(stdin);
                    resultado = scanf("%f %f", &n1, &n2);
                    if (resultado != 2)
                    {
                        printf("Invalido!! Introduz dois numeros\n");
                        fflush(stdin);
}
                } while (resultado != 2);
                SetConsoleTextAttribute(hConsole, resp);
                printf("%.1f - %.1f = %.1f", n1, n2, n1 - n2);
                SetConsoleTextAttribute(hConsole, program);
                printf("\n\n");
                break;
            case 3: // MULTIPLICAR
                do
                {
                    printf("Introduz dois numeros para multiplicar (n1 * n2): ");
                    fflush(stdin);
                    resultado = scanf("%f %f", &n1, &n2);
                    if (resultado != 2)
                    {
                        printf("Invalido!! Introduz dois numeros\n");
                        fflush(stdin);
                    }
                } while (resultado != 2);
                SetConsoleTextAttribute(hConsole, resp);
                printf("%.1f * %.1f = %.1f", n1, n2, n1 * n2);
                SetConsoleTextAttribute(hConsole, program);
                printf("\n\n");
                break;
            case 4: // DIVIDIR
                do
                {
                    printf("Introduz dois numeros para dividir (n1 / n2): ");
                    fflush(stdin);
                    resultado = scanf("%f %f", &n1, &n2);
                    if (resultado != 2)
                    {
                        printf("Invalido!! Introduz dois numeros\n");
                        fflush(stdin);
                    }
                } while (resultado != 2);
                SetConsoleTextAttribute(hConsole, resp);
                printf("%.1f / %.1f = %.1f", n1, n2, n1 / n2);
                SetConsoleTextAttribute(hConsole, program);
                printf("\n\n");
                break;
            case 5: // RAIZ QUADRADA
                do
                {
                    printf("Introduz um numero para saber a raiz quadrada (√n1): ");
                    fflush(stdin);
                    resultado = scanf("%f", &n1);
                    if (resultado != 1)
                    {
                        printf("Invalido!! Introduz um numero\n");
                        fflush(stdin);
                    }
                } while (resultado != 1);
                SetConsoleTextAttribute(hConsole, resp);
                printf("√%.1f = %.3f", n1, sqrt(n1));
                SetConsoleTextAttribute(hConsole, program);
                printf("\n\n");
                break;
            case 6: // POTENCIA
                do
                {
                    printf("Introduz dois numeros para fazer a potencia (n1^n2): ");
                    fflush(stdin);
                    resultado = scanf("%f %f", &n1, &n2);
                    if (resultado != 2)
                    {
                        printf("Invalido!! Introduz dois numeros\n");
                        fflush(stdin);
                    }
                } while (resultado != 2);
                SetConsoleTextAttribute(hConsole, resp);
                printf("%.1f^%.3f = %.1f", n1, n2, pow(n1, n2));
                SetConsoleTextAttribute(hConsole, program);
                printf("\n\n");
                break;
            case 7: // PERCENTAGEM
                do
                {
                    printf("Introduz dois numeros para fazer a percentagem (n1 %% de n2): ");
                    fflush(stdin);
                    resultado = scanf("%f %f", &n1, &n2);
                    if (resultado != 2)
                    {
                        printf("Invalido!! Introduz dois numeros\n");
                        fflush(stdin);
                    }
                } while (resultado != 2);
                SetConsoleTextAttribute(hConsole, resp);
                printf("%.1f %% de %.2f = %.1f", n1, n2, n1 * (n2 / 100));
                SetConsoleTextAttribute(hConsole, program);
                printf("\n\n");
                break;
            case 8: // SENO
                do
                {
                    printf("Introduz um numero para saber o seno (sin(n1)): ");
                    fflush(stdin);
                    resultado = scanf("%f", &n1);
                    if (resultado != 1)
                    {
                        printf("Invalido!! Introduz um numero\n");
                        fflush(stdin);
                    }
                } while (resultado != 1);
                SetConsoleTextAttribute(hConsole, resp);
                printf("sin(%.1f) = %.4f", n1, sin(n1));
                SetConsoleTextAttribute(hConsole, program);
                printf("\n\n");
                break;
            case 9: // COSSENO
                do
                {
                    printf("Introduz um numero para saber o cosseno (cos(n1)): ");
                    fflush(stdin);
                    resultado = scanf("%f", &n1);
                    if (resultado != 1)
                    {
                        printf("Invalido!! Introduz um numero\n");
                        fflush(stdin);
                    }
                } while (resultado != 1);
                SetConsoleTextAttribute(hConsole, resp);
                printf("cos(%.1f) = %.4f", n1, cos(n1));
                SetConsoleTextAttribute(hConsole, program);
                printf("\n\n");
                break;
            case 10: // TANGENTE
                do
                {
                    printf("Introduz um numero para saber a tangente (tan(n1)): ");
                    fflush(stdin);
                    resultado = scanf("%f", &n1);
                    if (resultado != 1)
                    {
                        printf("Invalido!! Introduz um numeros\n");
                        fflush(stdin);
                    }
                } while (resultado != 1);
                SetConsoleTextAttribute(hConsole, resp);
                printf("tan(%.1f) = %.4f", n1, tan(n1));
                SetConsoleTextAttribute(hConsole, program);
                printf("\n\n");
                break;
            case 11: // LOGARITMO
                do
                {
                    printf("Introduz um numero para saber o logaritmo log((n1)): ");
                    fflush(stdin);
                    resultado = scanf("%f", &n1);
                    if (resultado != 1)
                    {
                        printf("Invalido!! Introduz um numero\n");
                        fflush(stdin);
                    }
                } while (resultado != 1);
                SetConsoleTextAttribute(hConsole, resp);
                printf("log(%.1f) = %.4f", n1, log(n1));
                SetConsoleTextAttribute(hConsole, program);
                printf("\n\n");
                break;
            case 12: // EXPONENCIAL
                do
                {
                    printf("Introduz um numero para saber o exponencial (exp(n1)): ");
                    fflush(stdin);
                    resultado = scanf("%f ", &n1);
                    if (resultado != 1)
                    {
                        printf("Invalido!! Introduz um numero\n");
                        fflush(stdin);
                    }
                } while (resultado != 1);
                SetConsoleTextAttribute(hConsole, resp);
                printf("exp(%.1f) = %.4f", n1, exp(n1));
                SetConsoleTextAttribute(hConsole, program);
                printf("\n\n");
                break;
            case 13: // SAIR DO PROGRAMA
                printf("Adeus ...");
                sleep(2);
                exit(0);
                break;
            default:
                printf("Invalido\n\n");
                break;
            }
        }
        else
            printf("Tem de ser um numero\n\n");
    }
    return 0;
}