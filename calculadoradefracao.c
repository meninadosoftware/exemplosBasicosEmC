#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	float inteiro, fracao, partes;
	printf("Digite o valor inteiro:\n");
	scanf("%f",&inteiro);
	printf("Digite a quantidade de partes:\n");
	scanf("%f", &partes);
	
	fracao= inteiro/partes;
	
	printf("A fracao e : %.2f\n", fracao);
	
	getch();
	
}
