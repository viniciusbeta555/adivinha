/* Aluno: Francisco Vinicius de Freitas Carneiro*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {

        int numero_grande, segundos, numero;
        int num; /* chute do usuario*/
        int tent = 0;
        char ch;
        int sair = 0;

        int pontosPerdidos;
        int pontuacaoTotal = 1000;

        /* Gera um numero aleatorio*/
        segundos = time(0);
        srand(segundos);
        numero_grande = rand();
        numero = numero_grande % 100; /* Intervalo dos numeros do chute*/

        printf("***********************\n");
        printf("Bem vindo ao jogo!!!!!!\n");
        printf("***********************\n");
        printf("Você tem 10 tentativas!\n");


    while(sair == 0){
        while(tent < 10){

            printf("Chute um numero ate 100!\n");
            scanf("%d", &num);

            if(num >= 0 && num < 100){

                if(num == numero){
                        printf("Parabens, você acertou!!\n");
                        pontosPerdidos = round((abs(numero-num))/2.0);
                        pontuacaoTotal -= pontosPerdidos;
                        printf("Sua pontuação é: %d\n",pontuacaoTotal);

                        break; /*Interrompe o codigo quando acerta*/
                }else{

                     pontosPerdidos = round((abs(numero-num))/2.0);
                     pontuacaoTotal -= pontosPerdidos;
                     printf("Sua pontuação é: %d\n",pontuacaoTotal);

                    if(tent == 9){
                            break;
                    }
                        if(num > numero){
                                printf("Você digitou muito alto, digite um numero menor! \n");
                        }else{
                                printf("Você chutou baixo, digite um numero maior! \n");
                        }
                    
                        tent = tent + 1;

                        } /*fim do else*/
            }        
        } /*fim do while */

        printf("O numero era: %d\n", numero);
        printf("Fim de jogo\n");
        printf("Gostaria de jogar novamente? \n");

                setbuf(stdin, NULL); /* Limpa o buffer do teclado*/
                ch = getchar();
                if(ch == 's' || ch == 'S'){
                        sair = 0;
                }else{
                        sair = 1;
                }

        tent = 0;

        segundos = time(0);
        srand(segundos);
        numero_grande = rand();
        numero = numero_grande % 100;
}
                return 0;

}
