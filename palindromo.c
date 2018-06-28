#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 50

/**

Verifica se a palavra informada pelo usuario é um palíndromo.

Autor:
Wilton Filipe Canatto
filipecanatto@gmail.com
filipecanattodev.com.br

**/

int main(){
	
	char in[MAX];
	char *out;
	int i, k;
	
	printf("Enter with onde word: ");
	scanf("%s", in);
	out = (char*) malloc( strlen(in) +1);
	
	if (out==NULL) exit (1);
	
	//verifica se a palavra e um palindromo
	for(i = strlen(in)-1, k=0 ; i >= 0; i-- , k++ ){
		out[k] = in[i];
		if (in[k] != out[k]){
			printf("A palavra nao e um palindromo \n");
			return 0;
		}
	}
	
	printf("A palavra e um palindromo");
}