//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que receba um número inteiro maior do que 1 e verifique se o número fornecido é primo ou não.

#include <stdio.h>

int main()
{
    int num, i, resultado = 0;
 
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if(num  > 1){ // Respeitar as condição de maior que 1
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0 ) {
            resultado++;
            break;
            }
        }
    }
    
    if (resultado == 0){
        printf("%d e um numero primo\n", num);
    }
    else{
        printf("%d nao e um numero primo\n", num);
    }
    return 0;
}