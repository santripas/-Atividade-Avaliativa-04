#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int altura, alturaMulheres =0, mulheres=0 , mediaMulheres=0 , maior =0, menor =0;
	char sexo;
	
	
	
	menor = altura;
	
	
	for(int i = 1; i <= 50; i++){
		printf("Informe o sexo : 'M'- masculino ou 'F'- feminino da pessoa %d: ",i);
		scanf("%c", &sexo);
		fflush(stdin);
		sexo = toupper(sexo);
		printf("Informe a altura em cent�metros: ");
		scanf("%d", &altura);
		fflush(stdin);
	
		if(maior < altura){
			maior = altura;
		}		
		if(sexo == 'F'){
			mulheres++;
			alturaMulheres = alturaMulheres + altura;
		}
  		if(menor > altura){
			menor = altura;		
		}
    }
		mediaMulheres = alturaMulheres / mulheres;
		
		printf("A maior altura  �: %d cent�metros\n", maior);
		printf("A menor altura  �: %d cent�metros\n", menor);
		printf("A m�dia de altura das mulheres �: %d cent�metros", mediaMulheres);
	
	return 0;
}
