#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<locale.h> 
#include<math.h>



void limpaTela(){
	system("cls");
}
 
 
int main (){
	setlocale (LC_ALL, "portuguese");



int dia, mes;


	printf ("Qual o dia do seu aniversário ? \n");
	scanf ("%d", &dia);

	printf ("Qual o mês do seu aniversário ? \n");
	scanf ("%d", &mes);
	limpaTela();

	
	if (dia >= 20 && dia <= 31 && mes ==3 || dia >= 1 && dia <=20 && mes ==4){
	printf ("O seu signo é Aries");

	} else if (dia >= 21 && dia <= 30 && mes ==4 || dia >= 1 && dia <=20 && mes ==5){
	printf ("O seu signo é Touro");

	}else if (dia >= 21 && dia <= 31 && mes ==5 || dia>=1 && dia<=20 && mes==6){
	printf ("O seu signo é Gêmeos");

	}else if (dia>=21 && dia<=30 && mes==6 || dia>=1 && dia<=21 && mes==7){
	printf ("O seu signo é Câncer");

	} else if (dia>=22 && dia<=31 && mes==7 || dia>=1 && dia<=22 && mes==8){
	printf ("O seu signo é Leão");	

	} else if (dia>=22 && dia<=31 && mes==8 || dia>=1 && dia<=22 && mes==9){
	printf ("O seu signo é Virgem");	

	} else if (dia>=22 && dia<=30 && mes==9 || dia>=1 && dia<=22 && mes==10){
	printf ("O seu signo é Libra");	

	}else if (dia>=23 && dia <=31 && mes==10 || dia>=1 && dia<=21 && mes==11){
	printf ("O seu signo é Escorpião");	

	}else if (dia>=22 && dia<=30 && mes==11 || dia>=1 && dia<=21 && mes==12){
	printf ("O seu signo é Sagitário");

	}else if(dia>= 21 && dia<= 31 && mes == 1 || dia >=1 && dia <=18 && mes == 2){
	printf ("O seu signo é Aquário");

	}else if (dia>= 19 && dia <= 29 && mes == 2 || dia >=1 && dia <= 19 && mes == 3){
	printf ("O seu signo é Peixes");	

	}else{
	printf ("Mês Inválido!");
	}
	
return (0);
}
