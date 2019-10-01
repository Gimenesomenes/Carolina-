//*Este programa imprime todos os divisores de um número inteiro
//*positivo. Para o número n dado, o programa verifica se cada número de 1 até n é ou não um
//*divisor de n. 




#include<stdio.h>
#include<math.h>


	main(){
		
		
		int numero, divisor, resto;
		
			printf("Digite o numero:\n");
			scanf("%d", &numero);
			
				divisor = 1; 
				
				while(divisor <= numero){
					
					resto = numero % divisor;
						if(resto == 0){
							
							printf("\nDivisor encontrado: %d \n", divisor);
							
						}
						
						divisor = divisor + 1; 
						
				}
				
				
				
				
	}
