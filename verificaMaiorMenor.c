#include <stdio.h>
#include <math.h>

int main(){
	int num[3];
	int i;
	
	printf("Digite o primeiro numero: \n");
	scanf("%d", &num);
	printf("Digite o segundo numero : \n");
	scanf("%d", &num);
	printf("Digite o terceiro numero: \n");
	scanf("%d", &num);
	
	do {
		printf("O maior de acordo com a ordem = %d\n", i);
	} while((i=num<1 || i>2) ); ((i=num<2 ||i>3)); ((i=num<3 || i>2));
	
	return(0);
}
