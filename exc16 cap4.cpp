#include<stdio.h>
#include<stdlib.h>



	main(){
		
		int num1, num2, soma, mult, i;
		
		
			printf("Digite dois numeros: \n");
			scanf("%d %d", &num1, &num2);
			
			
				soma = 0;
				mult = 1;
				
					if(num1 == num2){
						if(num1 % 2 == 0){
							
							soma = soma + num1;
						}
						else{
							
							mult = mult * num1;
						}
					}
					
					if(num1 < num2){
						
						for(i = num1; i < num2; i++){
							
							if(i % 2 == 0){
								soma = soma + i;
								
							}
							
							else{
								
								mult = mult * i;
							}
							
						}
					}
					
					if(num1 > num2){
						
						for(i = num2; i < num1; i++){
							
							if(i % 2 == 0){
								
								soma = soma + i;
							}
							
							else{
								
								mult = mult *i; 
							}
						}
					}
					
					printf("\nA soma dos numeros eh: %d", soma);
					printf("\nA multiplicacao dos numeros eh: %d", mult);
					
					
				
				
				
			
				
	}
