#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int dia, ano, mes;
	bool bissexto;

	
	printf("\n Digite o ano para verificar se o mesmo � bissexto ou n�o \n");
	scanf("%d", &ano);
	if(ano %400 ==0){
	bissexto = true;
	}else if((ano %4 ==0) && (ano % 100 !=0)){
	bissexto = true;
	}else{
	bissexto = false;
	}
	
	if(bissexto = true ){
	printf("O ano � bissexto \n");
	}else{
	printf("O ano n�o � bissexto \n");
	}
	
	
	printf("\n Informe o m�s de 1 a 12 \n");
	scanf("%d", &mes);
	
	switch(mes){
	case 1: printf("Janeiro");break;
	case 2:	printf("Feveiro");break;
	case 3:	printf("Mar�o");break;
	case 4:	printf("Abril");break;
	case 5:	printf("Maio");	break;
	case 6: printf("Junho");break;
	case 7: printf("Julho");break;
	case 8:	printf("Agosto");break;
	case 9:	printf("Setembro");break;
	case 10: printf("Outubro");break;
	case 11: printf("Novembro");break;
	case 12: printf("Dezembro");break;
	default: printf("M�s invalido");break;
}
		do{
	printf ("\n Digite o dia para a confirma��o de validade \n");
	scanf ("%d", &dia);
	if (dia<=0 || dia>31){
	printf ("\n Invalido, tente novamente");
	}

	}while (dia<=0);
	
	printf ("A data � dia %d m�s %d e ano %d", dia, mes, ano);
	
return (0);
}
