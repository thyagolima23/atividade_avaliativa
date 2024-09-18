/*Faça um programa que pergunte o nome do usuário e mostre na tela uma mensagem de boas vidas do tipo: 
"Seja bem-vindo (nome informado)!*/
#include <stdio.h>
#include <stdlib.h>
main(){
char nome[30];
printf("Digite seu nome: \n");
scanf("%s", &nome);

printf("Seja bem-vindo(a) %s", nome);

return 0;
}