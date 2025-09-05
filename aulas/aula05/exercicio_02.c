//GABRIELA ALBINO DIAS
//2512082002

#include <stdio.h>


typedef unsigned int uint; 


typedef struct pessoa Pessoa;

struct pessoa {
    char nome[100];
    int idade;  
};

void preencher(uint n,Pessoa pessoas[n]){
    for (uint i = 0; i < n; i++) {
        printf("\nCadastro de pessoa %u:\n", i + 1);
        printf("Digite o nome: ");
        scanf("%99[^\n]%*c", pessoas[i].nome);
        printf("Digite a idade: ");
        scanf("%d%*c", &pessoas[i].idade);
    }
}
void exibir(uint n, struct pessoa pessoas[n]) {
    printf("\nPessoas cadastradas:\n");
    for (uint i = 0; i < n; i++) {
        printf("Pessoa %u: %s, %d anos\n", i + 1, pessoas[i].nome, pessoas[i].idade);
    }
}

int main() {

    uint n; 

    printf("Digite o numero de pessoas a serem cadastradas: ");
    scanf("%u%*c", &n);

    Pessoa pessoas[n];
    preencher(n, pessoas);
    exibir(n, pessoas);

    return 0;
}


