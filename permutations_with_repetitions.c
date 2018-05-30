/**

FATEC - 01/2014 - ALP (Algoritimos e Logica de Programacao).

Faca um programa que liste todas as possiveis permutacoes de um conjunto de letras "i" informado pelo usuario.
Essas combinacoes devem ter comprimento "g", esse dado tambem deve ser informado pelo usuario.

**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	// definition of variables
	int *ptr;
	
	int group = 4;
	char input[4] = {'a', 'b', 'c', 'd'};
	int nmap[group+1] = {0, 0, 0, 0, 0};
	
	int i;
	int j;
	int k;
	int last_index = sizeof(input) - 1;
	
	
	// initialization of variables
	ptr = &nmap[group];
	
	while (nmap[0] == 0){
		
		// begin map cicle
		for (i=0; i < group; i++){
			nmap[group] = i;
			
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
