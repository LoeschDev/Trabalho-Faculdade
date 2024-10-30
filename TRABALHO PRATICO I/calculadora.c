#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void soma(){
    double num1, num2;
    printf("digite dois numeros para somar: ");
    scanf("%lf %lf", &num1, &num2);
    printf("resultado da soma: %.2lf\n", num1 + num2);
}

void subtracao(){
    double num1, num2;
    printf("digite dois numeros para subtrair: ");
    scanf("%lf %lf", &num1, &num2);
    printf("resultado da subtracao: %.2lf\n", num1 - num2);
}

void multiplicacao(){
    double num1, num2;
    printf("digite dois numeros para multiplicar: ");
    scanf("%lf %lf", &num1, &num2);
    printf("resultado da multiplicacao: %.2lf\n", num1 * num2);
}

void divisao(){
    double num1, num2;
    printf("digite dois numeros para dividir: ");
    scanf("%lf %lf", &num1, &num2);
    if(num2 != 0)
        printf("resultado da divisao: %.2lf\n", num1 / num2);
    else
        printf("nao e possivel dividir por zero.\n");
}

void potencia(){
    double base, expoente;
    printf("digite a base e o expoente: ");
    scanf("%lf %lf", &base, &expoente);
    printf("resultado da potenciacao: %.2lf\n", pow(base, expoente));
}

void raiz_quadrada(){
    double numero;
    printf("digite um numero para calcular a raiz quadrada: ");
    scanf("%lf", &numero);
    if(numero >= 0)
        printf("resultado da raiz quadrada: %.2lf\n", sqrt(numero));
    else
        printf("nao e possivel calcular raiz quadrada de numero negativo.\n");
}

void modulo(){
    int num1, num2;
    printf("digite dois numeros inteiros para calcular o modulo: ");
    scanf("%d %d", &num1, &num2);
    if(num2 != 0)
        printf("resultado do modulo: %d\n", num1 % num2);
    else
        printf("nao e possivel calcular modulo por zero.\n");
}

void bhaskara(){
    double a, b, c, delta, raiz1, raiz2;
    printf("digite os valores de a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = (b * b) - (4 * a * c);
    
    if(delta > 0){
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("as raizes sao: %.2lf e %.2lf\n", raiz1, raiz2);
    } else if(delta == 0){
        raiz1 = -b / (2 * a);
        printf("ha uma unica raiz: %.2lf\n", raiz1);
    } else {
        printf("nao ha raizes reais para essa equacao.\n");
    }
}

int main(){
    int escolha;
    
    while(1){
        printf("\nCalculadora Interativa\n");
        printf("Escolha uma operacao:\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Potenciacao\n");
        printf("6. Raiz Quadrada\n");
        printf("7. Modulo\n");
        printf("8. Bhaskara\n");
        printf("9. Sair\n");
        printf("digite sua escolha: ");
        scanf("%d", &escolha);
        
        switch(escolha){
            case 1: soma(); break;
            case 2: subtracao(); break;
            case 3: multiplicacao(); break;
            case 4: divisao(); break;
            case 5: potencia(); break;
            case 6: raiz_quadrada(); break;
            case 7: modulo(); break;
            case 8: bhaskara(); break;
            case 9: printf("saindo da calculadora.\n"); return 0;
            default: printf("escolha invalida. tente novamente.\n");
        }
    }
    
    return 0;
}
