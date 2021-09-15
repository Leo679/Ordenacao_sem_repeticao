#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h>

#define n1 100
#define n2 1000
#define n3 10000


void exibir_vetor(int valores[]){
	int i;
	for (i=0; i<n1; i++){
		printf("%d\t", valores[i]);
	}
	printf("\n\n");
}

void exibir_vetor2(int valores2[]){
	int i;
	for (i=0; i<n2; i++){
		printf("%d\t", valores2[i]);
	}
	printf("\n\n");
}

void exibir_vetor3(int valores[]){
	int i;
	for (i=0; i<n3; i++){
		printf("%d\t", valores[i]);
	}
	printf("\n\n");
}

void fazer_ordem(int valores[]){
	int i, troca, copia;
	do{
        troca = 0;
        for(i = 0; i < n1-1; i++){
            if(valores[i] > valores[i+1]){
                copia = valores[i];
                valores[i] = valores[i+1];
                valores[i+1] = copia;
                troca = 1;
			}
		}
	}while (troca);
}

 void fazer_ordem2(int valores2[]){
	int i, troca, copia;
	do{
        troca = 0;
        for(i = 0; i < n2-1; i++){
            if(valores2[i] > valores2[i+1]){
                copia = valores2[i];
                valores2[i] = valores2[i+1];
                valores2[i+1] = copia;
                troca = 1;
			}
		}
	}while (troca);
}


 void fazer_ordem3(int valores3[]){
int i, troca, copia;
	do{
        troca = 0;
        for(i = 0; i < n3-1; i++){
            if(valores3[i] > valores3[i+1]){
                copia = valores3[i];
                valores3[i] = valores3[i+1];
                valores3[i+1] = copia;
                troca = 1;
			}
		}
	}while (troca);
}


int main() {
	
	int i, j, valores[n1];		
	char repete;
	srand(time(NULL));
    for (i = 0; i < n1; i++) {
        valores[i] = rand() % 100+1;
	repete = 'N';
	  for (j=0; j<i && repete == 'N'; j++) {
            if (valores[i] == valores[j])
                repete = 'S';
        }
        if (repete == 'S')
            i--;
	}


	 int valores2[n2];
	  for (i = 0; i < n2; i++) {
        valores2[i] = rand() % 1000+1;
	repete = 'N';
	  for (j=0; j<i && repete == 'N'; j++) {
            if (valores2[i] == valores2[j])
                repete = 'S';
        }
        if (repete == 'S')
            i--;
	}

	 int valores3[n3];
	 for (i = 0; i < n3; i++) {
        valores3[i] = rand() % 10000+1;
	repete = 'N';
	  for (j=0; j<i && repete == 'N'; j++) {
            if (valores3[i] == valores3[j])
                repete = 'S';
        }
        if (repete == 'S')
            i--;
	 }

	printf("valores não ordenados de 100:\n\n");
	exibir_vetor(valores);

	 printf("\n\nvalores não ordenados de 1000:\n\n");
	 exibir_vetor2(valores2);

	printf("\n\nvalores não ordenados de 10000:\n\n");
	exibir_vetor3(valores3);


	printf("\n--------------------------------------------------------------------------------------------------------\n");

	
	fazer_ordem(valores);
	printf("\nvalores ordenados sem repetir de 100:\n\n");
	exibir_vetor(valores);

  	 printf("\n\nValores ordenados de 1000:\n\n");
	fazer_ordem2(valores2);
	exibir_vetor2(valores2);

	 printf("\n\nValores ordenados de 10000:\n\n");
	 fazer_ordem3(valores3);
	exibir_vetor3(valores3);
	
  return 0;
}