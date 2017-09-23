#include <stdio.h>

int main(){
	
	int x, resultado=0, temp=1;
	scanf("%d", &x);
	
	do{
		printf("%d ", resultado);
		resultado=resultado+temp;
		temp=resultado-temp;
		x--;
	} while (x>=0);
	
	printf("\n");
	return 0;
}
