#include <stdio.h>

//definicao da estrutura
struct pessoa {
    char nome[100];
    int idade;
    char genero;
};

//declaracao de variaveis do tipo struct pessoa (respeitar ordem da declaracao)
struct pessoa p1 = {"Ana", 20, 'F'};
struct pessoa p2 = {"Joao", 25, 'M'};
//não precisa respeitar a ordem, se for)
struct pessoa p3 = {.genero = 'F', .idade = 30, .nome = "Maria"};

//vetores de estruturas
struct pessoa pessoas[3] = {
    {"Ana", 20, 'F'},
    {"Joao", 25, 'M'},
    {"Maria", 30, 'F'}
};

int main() {
    printf("sizeof(struct pessoa) = %zu\n", sizeof(struct pessoa));

int dobro_idade = p1.idade * 2;
p1.idade = 21;
sprintf(p1.nome, "Novo nome");
printf("nome: %s, idade %d\n", p1.nome, p1.idade);

   
return 0;
}   
