#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{   int mat;
	char nome[20];
	float nota[3];
	float media;
}ALUNOO;


int main(){
int n, i, j, maiormed;
float maior;

printf("Digite a quantidade de alunos:");
scanf("%d", &n);
 ALUNOO ALUNO[n];

for (i = 0; i<n; i++){
 printf("Digite a matricula do aluno: ");
	    scanf("%d", &ALUNO[i].mat);
		printf("Digite o nome do Aluno: ");
		scanf("%s", &ALUNO[i].nome);
}
for (i = 0; i<n; i++){
    for (j = 0; j<3; j++){
	printf("Nota %d do aluno %d: ", j+1, i+1);
			scanf("%f", &ALUNO[i].nota[j]);

        }

}
for (i = 0; i<n; i++){
ALUNO[i].media = (ALUNO[i].nota[0] + ALUNO[i].nota[1] + ALUNO[i].nota[2])/ 3;
}
maior = 0;
for(i = 0; i<n; i++){
		if (ALUNO[i].media > maior){
			maiormed = i;
			maior = ALUNO[i].media;
		}
}

  printf("o Aluno da matricula %d com a media %f eh o aluno com a maior media", ALUNO[maiormed].mat, ALUNO[maiormed].media);

	system("pause");
	return 0;
}
