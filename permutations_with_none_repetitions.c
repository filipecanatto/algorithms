#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef char * string;

void permute(string, int );
void change(char * ,int ,int, int );

int main()
{
	/* example with "abc", the program should generate
	abc
	acb
	bac
	bca
	cab
	cba
	*/
	
	string ptr = malloc(3*sizeof(char));
	strcpy(ptr, "abc");
	permute(ptr, 0);	
}


// generate permutations with none repetitions
void permute( string str, int k)
{
	int i, len;
	len = strlen(str);
		if (k == len-1) {
		printf( "%s\n", str); 
   } else {
	   for (i = k; i < len; i++) {
		   change( str, k, i, 1);
		   permute( str, k + 1);

		   // the first loop cant undo changes
		   if (k != 0){
		   	change( str, i, k, 0);}
      }
   }
}

void change(string str, int p1, int p2, int p3)
{
   char tmp;
   tmp = str[p1]; str[p1] = str[p2]; str[p2] = tmp;
}