#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() 
{
	/* Declaração das variáveis */
	float salario, aumento, novosalario,diferencas;
	int cargo;
	
	/*  Funções para imprimir e ler variáveis */
	
	printf("\nDigite 1 - Gerente: \nDigite 2 - Engenheiro(a): \n \nDigite 3- Tecnico(a):\n ");
	scanf("%d", &cargo);
	printf("Digite o seu salario:\n");
	scanf("%f", &salario);
	
	/*   Switch  case */
	
	switch(cargo){
		case 1:
				aumento=0.1*salario;
			novosalario= salario + aumento;
			diferencas = novosalario - salario;
			printf("ANTIGO SALARIO=R$%.2f\n", salario);
			printf("NOVO SALARIO=R$%.2f\n", novosalario);
			printf("DIFERENCA ENTRE SALARIOS=R$%.2f\n", diferencas);
			printf("Seu cargo e: Gerente\n");
			break;
		
		case 2:
			aumento = 0.2*salario;
			novosalario = salario + aumento;
			diferencas = novosalario - salario;
			printf("ANTIGO SALARIO=R$%.2f\n", salario);
			printf("NOVO SALARIO =R$%.2f\n", novosalario);
			printf("DIFERENCA ENTRE SALARIOS=R$%.2f\n", diferencas);
			printf("Seu cargo e : Engenheiro(a)\n");
			break;
		
		case 3:
			aumento= 0.3* salario;
			novosalario = salario + aumento;
			diferencas = novosalario - salario;
			printf("ANTIGO SALARIO=R$%.2f\n", salario);
			printf("NOVO SALARIO=R$%.2f\n", novosalario);
			printf("DIFERENCAS ENTRE SALARIOS=%.2f\n", diferencas);
			printf("Seu cargo e : Tecnico(a)\n");
		case 4:
			aumento= 0.4*salario;
			novosalario = salario + aumento;
			diferencas = novosalario - salario;
			printf("ANTIGO SALARIO=R$%.2f\n", salario);
			printf("NOVO SALARIO  =R$ %.2f\n", novosalario);
			printf("DIFERENCAS ENTRE SALARIOS=R$%.2f\n", diferencas);
			break;
			
	}
	getchar();
	return(0);
	
}
