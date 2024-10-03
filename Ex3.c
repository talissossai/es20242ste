#include <stdio.h>

int main() {
	int cont, num, soma;
	float media;
	
	cont = 0;
	
	do {
		printf("Digite o numero %d :  ", cont++);
		scanf("%d", &num);
		soma += num;
		
   } while(cont < 5);
   
   
    media = soma/5;
    
    printf("A media dos numeros inseridos eh: %f ", media);
    
    return 0;
		
	}
