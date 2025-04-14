#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];


    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    
    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s\n, - Idade: %d\n, - Altura: %.2f\n, - Matricula: %d\n", nome, idade, altura, matricula);    
    
    return 0;

}

