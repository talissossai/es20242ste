#include <stdio.h>
#include <string.h>

int main() {
	char nome[] = "Neymar ", sobrenome[] = "Junior";
	
	strcat(nome, sobrenome);
	
	printf("O nome completo do melhor jogador da historia eh: %s", nome);
	
	return 0;
}
	
