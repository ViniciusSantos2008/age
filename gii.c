#include<stdio.h>
int main (){
    char nome[50];
    int idade;

    printf("Qual o seu nome meu pequeno gafanhoto?:");
    scanf("%s" , nome);

    printf("Qual a sua idade? %s" , nome);
    scanf("%d" , &idade);

    printf("Prazer em te conhecer %s de %d anos" , nome, idade);
    return 0;
}