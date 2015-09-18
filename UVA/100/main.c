#include <stdio.h>
#define NUMBER 4294967294

int function(long n);

int main(){
	long i, j, n;
	int max, aux;	

	long trueI, trueJ;

	while ( scanf("%li %li",&i,&j) == 2){
		trueI = i;
		trueJ = j;

		if( i > j){
			n = j;
			j = i;
			i = n;
		}		
		n = i;
		max = function(n);
		while(n < j){		
			n ++;
			aux = function(n);
			if (aux > max) max = aux;			
		}
		printf("%li %li %d\n",trueI,trueJ,max);
	}
	return 0;
}

int function(long n){
	int level;
	if (n == 1) return 1;
	else{
		if ( n % 2 == 1){
			level = function( (3*n) + 1) + 1;
		}else{
			level = function( n / 2) + 1;
		}
	return level;
	}
}
