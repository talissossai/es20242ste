#include<stdio.h>

int main(){
	char nome[50], sexo, continuar; 
	int idadeF,idadeM, cont, soma;
	
	for(cont = 0; cont < 3; cont++){
		printf("Digite seu nome: ");
		scanf(" %s", &nome);
		printf("Digite seu sexo F/M: ");
		scanf(" %c", &sexo);
		if (sexo == 'F'){
	       printf("Digite sua idade: ");
		   scanf(" %d", &idadeF);			
		}else{
		   printf("Digite sua idade: ");
		   scanf(" %d", &idadeM);	
		}				
		printf("Deseja continuar? S/N: \n");
		scanf(" %c", &continuar);
		
		soma += idadeF;
		
		printf("A media de idade das mulheres eh: %d \n", idadeF/);
		
	}
	return 0;
}
