#include <stdio.h>

int main(){
	
	int x, y, resultado=1;
	scanf("%d %d", &x, &y);
	
	for(int i=y; i>0; i--){
		resultado=resultado*x;
	}
	printf("%d", resultado);
	return 0;
}
