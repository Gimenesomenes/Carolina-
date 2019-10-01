#include<stdio.h>
#include<math.h>


	main(){
		
		float num1, num2, soma, raiz;
		int op;
		
		printf("MENU\n");
		printf("\n1-Somar dois numeros\n");
		printf("\n2-Raiz quadrada de um numero\n");
		printf("\nDigite sua opcao:\n");
		
			scanf("%d", &op);
			
			
			if(op==1){
				
				printf("\nDigite o primeiro numero:\n");
				scanf("%f", &num1);
				
				printf("\nDigite o segundo numero:\n");
				scanf("%f", &num2);
				
				soma= num1 + num2; 
				 
				 printf("\nA soma dos dois numeros eh: %.2f", soma);
			}
			
			
			if(op==2){
				
				printf("\nDigite um valor:\n");
				scanf("%f", &num1);
				
				raiz=sqrt(num1);
				
				printf("\nA raiz quadrada do numero eh: %.2f", raiz);
				
				
				
			}
	}
	
