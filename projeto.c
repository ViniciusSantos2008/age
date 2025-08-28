#include<stdio.h>
int main (){
    char nome[50];
    int idade;

    printf("Qual o seu nome? ");
    scanf("%s" , nome);

    printf("Qual a sua idade? ");
    scanf("%d" , &idade);

    printf("Prazer %s. Muito importante ter voce no nosso projeto!" , nome);


    return 0;
}