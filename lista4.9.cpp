#include<stdio.h>
#include<locale>
#include<ctype.h>

void limpaTela(){
	system("cls");
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, chutes, i=1;
	
	printf("Informe o numero imaginado: ");
	scanf("%d", &numero);
	fflush(stdin);
	limpaTela();
	
	while(chutes != numero){
			
		printf("%d° chute: ", i);
		scanf("%d", &chutes);
		fflush(stdin);
		
		if(chutes<numero)
			printf("\nMais\n\n");
			else if(chutes>numero)
				printf("\nMenos\n\n");
					else printf("\nAcertou!\n\n");
		
		system("pause");
	limpaTela();
		
		i++;		
	}
	
	printf("\nO numero imaginado foi: %d", numero);
	
	return 0;
}
