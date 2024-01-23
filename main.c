#include <stdio.h>
#include <stdlib.h>

int main()
{
   char player[256];
   char player2[256];

   printf("Player 1, Sua vez...");
   scanf("%s", &player);

   printf("Player 2, Sua vez...");
   scanf("%s", &player2);

   printf("\nAguarde, estamos calculando o resultado... \n");
   if(strcmp(player, "papel") == 0){

        if(strcmp(player2, "papel") == 0){
        printf("Empate!");
        }else if(strcmp(player2,"tesoura") == 0){
        printf("Player 2 ganhou, por que tesoura corta papel!");
        }else if(strcmp(player2, "pedra") == 0){
                printf("Player 2 perdeu, por que papel embrula pedra!");
        }else{
                printf("Player 2 jogou uma informacao invalida!");
        }


   }else if(strcmp(player,"tesoura") == 0){

        if(strcmp(player2, "papel") == 0){
        printf("Player 2 perdeu, por que tesoura corta papel!");
        }else if(strcmp(player2,"tesoura") == 0){
        printf("Empate!");
        }else if(strcmp(player2, "pedra") == 0){
                printf("Player 2 ganhou, por que pedra quebra tesoura!");
        }else{
                printf("Player 2 jogou uma informacao invalida!");
        }

   }else if(strcmp(player, "pedra") == 0){


        if(strcmp(player2, "papel") == 0){
        printf("Player 2 ganhou, por que papel embrula pedra!");
        }else if(strcmp(player2,"tesoura") == 0){
        printf("Player 2 perdeu, por que pedra quebra tesoura!");
        }else if(strcmp(player2, "pedra") == 0){
                printf("Empate");
        }else{
                printf("Player 2 jogou uma informacao invalida!");
        }

   }else{
        printf("player 1 jogou uma informacao invalida!");
   }

    return 0;
}
