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


	printf ("Qual o dia do seu anivers�rio ? \n");
	scanf ("%d", &dia);

	printf ("Qual o m�s do seu anivers�rio ? \n");
	scanf ("%d", &mes);
	limpaTela();

	
	if (dia >= 20 && dia <= 31 && mes ==3 || dia >= 1 && dia <=20 && mes ==4){
	printf ("O seu signo � Aries");

	} else if (dia >= 21 && dia <= 30 && mes ==4 || dia >= 1 && dia <=20 && mes ==5){
	printf ("O seu signo � Touro");

	}else if (dia >= 21 && dia <= 31 && mes ==5 || dia>=1 && dia<=20 && mes==6){
	printf ("O seu signo � G�meos");

	}else if (dia>=21 && dia<=30 && mes==6 || dia>=1 && dia<=21 && mes==7){
	printf ("O seu signo � C�ncer");

	} else if (dia>=22 && dia<=31 && mes==7 || dia>=1 && dia<=22 && mes==8){
	printf ("O seu signo � Le�o");	

	} else if (dia>=22 && dia<=31 && mes==8 || dia>=1 && dia<=22 && mes==9){
	printf ("O seu signo � Virgem");	

	} else if (dia>=22 && dia<=30 && mes==9 || dia>=1 && dia<=22 && mes==10){
	printf ("O seu signo � Libra");	

	}else if (dia>=23 && dia <=31 && mes==10 || dia>=1 && dia<=21 && mes==11){
	printf ("O seu signo � Escorpi�o");	

	}else if (dia>=22 && dia<=30 && mes==11 || dia>=1 && dia<=21 && mes==12){
	printf ("O seu signo � Sagit�rio");

	}else if(dia>= 21 && dia<= 31 && mes == 1 || dia >=1 && dia <=18 && mes == 2){
	printf ("O seu signo � Aqu�rio");

	}else if (dia>= 19 && dia <= 29 && mes == 2 || dia >=1 && dia <= 19 && mes == 3){
	printf ("O seu signo � Peixes");	

	}else{
	printf ("M�s Inv�lido!");
	}
	
return (0);
}
