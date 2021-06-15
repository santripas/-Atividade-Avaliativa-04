#include <stdio.h>
#include <stdlib.h> 
#include <locale.h> 

int main(){
int anacleto, felisberto, ano;
setlocale(LC_ALL, "Portuguese");

anacleto = 150 + 2*ano;
felisberto = 110 + 3*ano;

	for(ano = 0; felisberto < anacleto; ano++){
	anacleto = 150 +2*ano;
	felisberto = 110 + 3*ano;
}
	printf ("\n Serão necessários %d anos para Felisberto ser maior que  Anacleto", ano);


return (0);
}
