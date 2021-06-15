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
	
	int ouro1=0,ouro2=0,ouro3=0,prata1=0,prata2=0,prata3=0,bronze1=0,bronze2=0,bronze3=0,total1,total2,total3;
	char p1[30],p2[30],p3[30];
	
	

	printf("Informe o nome do Páis 1: \n");
	fgets(p1,30,stdin);
	
	printf("Informe a quantidade de medalhas de Ouro do País 1: \n");
	scanf("%d",&ouro1);
	printf("Informe a quantidade de medalhas de Prata do País 1: \n");
	scanf("%d",&prata1);
	printf("Informe a quantidade de medalhas de Bronze do País 1: \n");
	scanf("%d",&bronze1);
	limpaTela();
	fflush(stdin);
	
	
	
	printf("Informe o nome do Páis 2: \n");
	fgets(p2,30,stdin);
	printf("Informe a quantidade de medalhas de Ouro do País 2: \n");
	scanf("%d",&ouro2);
	printf("Informe a quantidade de medalhas de Prata do País 2: \n");
	scanf("%d",&prata2);
	printf("Informe a quantidade de medalhas de Bronze do País 2: \n");
	scanf("%d",&bronze2);
	limpaTela();
	fflush(stdin);
	
	
	printf("Informe o nome do Páis 3: \n");
	fgets(p3,30,stdin);
	printf("Informe a quantidade de medalhas de Ouro do País 3: \n");
	scanf("%d",&ouro3);
	printf("Informe a quantidade de medalhas de Prata do País 3: \n");
	scanf("%d",&prata3);
	printf("Informe a quantidade de medalhas de Bronze do País 3: \n");
	scanf("%d",&bronze3);
	limpaTela();
	fflush(stdin);
	
	
	
	total1 = (ouro1 *3) + (prata1 *2) + bronze1;
	total2 = (ouro2 *3) + (prata2 *2) + bronze2;
	total3 = (ouro3*3 )+ (prata3*2) +bronze3;
	
	printf("A quantidade de pontos %s : %d \n",p1,total1);
	printf("A quantidade de pontos %s : %d \n",p2,total2);
	printf("A quantidade de pontos %s :%d \n",p3,total3);


	
}
