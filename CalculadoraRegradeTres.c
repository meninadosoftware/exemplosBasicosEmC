#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
	float num1 , num2, num3, resultado;
	
	printf("Digite o valor de num1:\n");
	scanf("%f", &num1);
	printf("Digite o valor de num2:\n");
	scanf("%f", &num2);
	printf("Digite o valor de num3:\n");
	scanf("%f", &num3);
	
	resultado = (num1* num2)/ num3;
	printf(" O resultado e : %.2f\n", resultado);
	
	
	getch();	
	
}
