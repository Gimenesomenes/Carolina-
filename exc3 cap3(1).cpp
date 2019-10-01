#include<stdio.h>
#include<math.h>


	main(){
		
		
		float num1, num2;
		
			printf("Digite o primeiro numero:\n");
			scanf("%f", &num1);
			
			printf("\nDigite o segundo numero:\n");
			scanf("%f", &num2);
			
			if(num1>num2){
				
				printf("O maior numero eh o primeiro:\n %.2", num1);
			}
			
			if(num2>num1){
				
				printf("\nO maior numero eh o segundo:\n %.2f", num2);
			}
			
			if(num1==num2){
				
				printf("\nO numeros sao iguais\n");
				
			}
	}		
	
	
