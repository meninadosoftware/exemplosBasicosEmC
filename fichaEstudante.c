#include <stdio.h>
#include <conio.h>


int main() {
   struct ficha_de_estudante 
   {
   	  char nome[50];
	  char disciplina[30];
	  float nota_prova1;
	  float nota_prova2; 
	  float media;
   };
   
   struct ficha_de_estudante estudante;
   printf("\n ***************************CADASTRO DE ESTUDANTE***********************\n");
   
   printf("Nome:\n");
   fflush(stdin);
   fgets(estudante.nome, 50, stdin);
   
   
   printf("Disciplina:\n");
   fflush(stdin);
   fgets(estudante.disciplina,30,stdin);
   
   printf("Informe a 1a. nota:\n");
   scanf("%f",&estudante.nota_prova1);
   
   printf("Informe a 2a. nota:\n");
   scanf("%f", &estudante.nota_prova2);
   
   printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$MOSTRAR CADASTRO DE ESTUDANTE$$$$$$$$$$$$$$$$$$\n ");
   
   printf("Nome:%s\n",estudante.nome);
   printf("Disciplina: %s\n", estudante.disciplina);
   
   printf("Nota da 1a. prova:%.2f\n\n", estudante.nota_prova1);
   printf("Nota da 2a. prova:%.2f\n\n", estudante.nota_prova2);
   
   /* cálculo do média das notas */
   printf("A media :%.2f\n\n",estudante.media = (estudante.nota_prova1 + estudante.nota_prova2)/2);
   
   
   return(0);
   
   
   
   
   
}
