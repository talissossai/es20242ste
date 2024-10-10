int main(){
	char nome[50], sexo, continuar; 
	int idadeF,idadeM, cont, soma;
	
	do{
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
			
    }while(continuar != 'N');
    
    return 0;
}
