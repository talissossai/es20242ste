#include <stdio.h>

int main(){
	
	int num[5], i, soma, maior ,menor;
	float media;
	
	for(i = 0; i < 5; i++){
	printf("Digite o numero %d: ",i+1);
	scanf("%d", &num[i]);
    soma += num[i];	
}
    media = (soma - 1)/5;
    printf("O valor da soma eh: %d", soma - 1); 
    printf("\nO valor da media eh %.2f", media);
	 
    maior = num[0];
    menor = num[0];
	
	for(i= 1; i < 5; i++){
	
	   if (num[i] > maior){
	   	   maior = num[i];
	   }
	   if (num[i] < menor){
	   	   menor = num[i];
	   }
}
    printf("\nO maior numero eh: %d\n", maior);
    printf("O menor numero eh: %d\n", menor);
	 
    return 0;
}
