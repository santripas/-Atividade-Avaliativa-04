#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <ctype.h>


int main(void){
	setlocale(LC_ALL,"portuguese");
	
	int tinto, branco, rose ;
	float totalVinhos,T, B, R;
	char vinho;
	
	do
	{
        printf("\nInforme o tipo de vinho:\n");
        printf("\n 'T' para Vinho Tinto\n");
        printf("\n 'B' para Vinho Branco\n");
        printf("\n 'R' para Vinho Rosê\n");
        printf("\n Aperte 'f' para encerrar o programa e exibir os dados!\n");

        scanf("%c", &vinho);
        fflush(stdin);
        vinho = toupper(vinho);
        system("cls");


        if(vinho == 'T'){
        tinto = tinto + 1;
            }
            else if( vinho == 'R'){
                rose = rose + 1;
            }
                else if(vinho == 'B'){
                    branco = branco +1;
                }
                    else{
                        printf("Inválido!\n");
                    }
    }while(vinho != 'F');


    totalVinhos = tinto + rose + branco;

    T = (tinto/totalVinhos) * 100;
    R = (rose/totalVinhos) * 100;
    B = (branco/totalVinhos) * 100;

    printf("%.1f são de vinhos tintos\n%.1f de vinhos brancos\n%.1f de vinhos rosê!", T, B, R);

    return  (0);	
}
