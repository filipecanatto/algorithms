/**

FATEC - 01/2014.

Faca um programa que liste todas as possiveis permutacoes de um conjunto de letras "i" informado pelo usuario.
Essas combinacoes devem ter comprimento "g", esse dado tambem deve ser informado pelo usuario.

Autor:
Wilton Filipe Canatto
filipecanatto@gmail.com
filipecanattodev.com.br

**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 26

int main() {
	
	// definition of variables
	int group;
	char input[MAX];
	int *nmap;
	int i;
	int j;
	int k;
	int last_index;
	int input_size;
	int count = 0;
	
	printf("Enter with the set os characters: ");
	scanf("%s", input);
	
	printf("Enter with the lenght of the set: ");
	scanf("%i",&group);
	
	// initialization of variables
	input_size = strlen(input);
	nmap = (int*) calloc (input_size, sizeof(int));
	last_index = (input_size-1);
	
	while (nmap[0] == 0){
		
		// begin map cicle
		for (i=0; i < input_size; i++){
			nmap[group] = i;
			count ++;
			printf ("%i - ", count);
			for (j = 1; j <= group; j++){
				printf ("%c", input[nmap[j]]);
				//printf ("%i", nmap[j]);
			}
			
			printf ("\n");
		}
		
		//end of cicle
		for (k = group; k > 0; k--){
			if (nmap[k] == last_index){
				nmap[k] = 0;
				if (nmap[k-1] < last_index){
					nmap[k-1] ++;
					
					// exit the loop
					break; 
				}
			}
		}	
	}
}
