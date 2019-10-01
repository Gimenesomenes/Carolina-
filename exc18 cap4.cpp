#include<stdio.h>
#include<stdlib.h>


	main(){
		
		
		int num1, cont, qtde; 
		
		printf("Digite um numero inteiro > 1: \n");
		scanf("%d", &num1);
		
		
			for(cont = num1; cont < num1; cont++){    // Usa o for para dividir o numero até ele chegar a 0 e contar qtos divisores tem..
			
				
					if(num1 % cont == 0){
						
						qtde = qtde + 1;
					}
			}
				if(qtde > 2){
					
					printf("\nO numero nao eh primo!\n");
				}
				
				else{
					
					printf("\nO numero eh primo!");
				}
						
						
			
				
				
	}
	
