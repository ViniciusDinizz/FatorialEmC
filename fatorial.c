#include <stdio.h>

int main (void){
	int fatorial (int num, int  ind);
	int num = 0;
	
	printf("Número: ");
	scanf("%d", &num);
	
	printf("Resultado = %d", fatorial (num, 1));
	
	return 0;
}

int fatorial (int num, int ind){
	if (num == 0){
		return ind;
	}else {
		ind *= num;
		return fatorial(num-1, ind);
	}
}
