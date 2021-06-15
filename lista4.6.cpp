#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");


    int n1,n2;
    
    printf("Informe o primeiro número: \n");
    scanf("%d",&n1);
    printf("Informe o segundo número: \n");
    scanf("%d",&n2);
    
    	for(int i = n1; i <= n2; i++){
		if((i % 2 != 0) && (i % 3 != 0) && (i % 5 != 0) && (i % 7 != 0) && (i % 11 != 0) || i== 1 || i == 2 || i == 3 || i == 5 || i == 7 || i ==11){
			printf("%d é primo!\n", i);

        }
          }
return 0;

}
