#include <stdio.h>

int main(){
	
	int x;
	scanf("%d", &x);
	
	for(int i=(x-1); i>0; i--){
		x=x*i;
	}
	printf("%d", x);
	return 0;
}
