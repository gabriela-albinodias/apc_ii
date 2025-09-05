//GABRIELA ALBINO DIAS
//2512082002

#include <stdio.h>

struct pessoa {
    char nome [100];
    int idade;  
};


int main() {
    
    struct pessoa pessoas [3];

    for (int i = 0; i<3; i++) {
        printf ("\nCadastro de pessoa %d:\n", i+1);
        printf ("Digite o nome: ");
        scanf ("%99[^\n]%*c", pessoas[i].nome);       
        printf ("Digite a idade: ");
        scanf ("%d%*c", &pessoas[i].idade);
       
    }
    printf ("\nPessoas cadastradas:\n");
    for (int i = 0; i<3; i++) {
        printf ("Pessoa %d: %s, %d anos\n", i+1, pessoas[i].nome, pessoas[i].idade);
    }
return 0;
}
