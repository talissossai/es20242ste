#include <stdio.h>

int main(){
	
	int num[5], i, soma;
	
	for(i = 0; i < 5; i++){
	printf("Digite o numero %d: ",i+1);
	scanf("%d", &num[i]);
    soma += num[i];	
}
    printf("O valor da soma eh: %d", soma - 1);   
    return 0;
}
