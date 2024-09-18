/*Faça um programa que receba via teclado  o nome, endereço, telefone e imprimir na tela as informações recebidas.*/
#include <stdio.h>
#include <stdlib.h>
main(){
    char nome[30];
    char endereco[100];
    int telefone;

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite seu endereço: \n");
    scanf("%s", &endereco);

    printf("Digite seu telefone: \n");
    scanf("%d", &telefone);

    printf("Nome: %s \n", &nome);
    printf("Endreço: %s \n", &endereco);
    printf("Telefone: %d \n", &telefone);

    return 0;
}