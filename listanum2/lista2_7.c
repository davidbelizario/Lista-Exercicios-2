#include <stdio.h>
#include <stdlib.h>

 typedef struct cadastro{
        char nome[30];
        char endereco[50];
        int idade;
}CADASTRO;


CADASTRO *alocaMemoria(int n){
    CADASTRO *vetor = (CADASTRO*) malloc (n * sizeof(CADASTRO));
}

CADASTRO coletaDados(int n){
    CADASTRO cad;
    int i;
    for (i = 0; i < n; i++){
        printf("Digite seu nome:");
        getchar();
        gets (cad.nome);

        printf("Digite seu endereco:");
        gets (cad.endereco);

        printf("Digite sua idade:");
        scanf("%d", &cad.idade);

        system("cls");

        return cad;

}
}

void imprimeCadastro(CADASTRO *vet, int n){
       int i;
            for(i = 0; i < n; i++){
             printf("\t**** CADASTRO No: %d *****\n\n", i + 1);
             printf("Nome: %s\n", vet[i].nome);
             printf("Endereço: %s\n", vet[i].endereco);
             printf("Idade: %d\n", vet[i].idade);
             printf("\n\n");
    }
    printf("\n\n\n\n");
    system("pause");
}


int main(){
int n, i;
printf("Quantos cadastros voce deseja realizar?\n");
scanf("%d", &n);
system("cls");

CADASTRO *vet;
vet = alocaMemoria(n);

for (i = 0; i < n; i++){
    vet[i] = coletaDados(n);
}

imprimeCadastro(vet, n);

system("pause");
return(0);
}
