#include <stdio.h>

  typedef  struct{
char nome[50];
int idade;
float altura;
}pessoa;
int main() {
    pessoa p;
scanf("%s %d %f",p.nome, &p.idade, &p.altura);
printf("nome: %s\n idade: %d\n altura %.2f\n", p.nome, p.idade, p.altura);
return 0;   
}