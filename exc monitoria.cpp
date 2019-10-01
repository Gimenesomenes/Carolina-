#include<stdio.h>
#include<stdlib.h>


//* Uma empresa possui N funcionario cadastrados com nome, salário, idade e sexo. Deseja-se descobrir qual a media de idade das mulheres e dos homens, quem é 
//* o mais velho, qual a media salarial das mulheres e dos homens e a da empresa.


	
	
typedef struct{

		
		char nome[30];
		float salario;
		int idade; 
		char sexo;
		
	} ficha;
	
	
int	main(){

		
		
		ficha X[100];
		int i = 0, idade_H, idade_M, velho, op;
		float  media_sal_M, media_sal_H;
		
		
		
		while(op != 5){
			printf("1 = Cadastrar funcionario:\n");
			printf("2 = Media de idade das mulheres, e mais velho:\n");
			printf("3 = Media de idade dos homens, e mais velho: \n");
			printf("4 = Media de salario dos homens:\n");
			printf("5 = Media de salario das mulheres:\n");
			printf("6 = Digite para sair:\n");
			printf("\nDigite a opcao:\n");
			
			scanf("%d%*c", &op);
			
		
		if(op == 1){
		
		
		
			
			printf("Digite o seu nome:\n");
			scanf("%s%*c", &X[i].nome);
		
			printf("Digite o salario:\n");
			scanf("%f%*c", &X[i].salario);
		
			printf("Digite a idade:\n");
			scanf("%d%*c", &X[i].idade);      
		
			printf("Digite o sexo:\n");
			scanf(" %c%*c", &X[i].sexo);
			
			i++;
		
		}
		
		
			
	
	}


	}


