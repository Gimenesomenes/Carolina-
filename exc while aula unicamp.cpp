//*Este programa imprime todos os divisores de um n�mero inteiro
//*positivo. Para o n�mero n dado, o programa verifica se cada n�mero de 1 at� n � ou n�o um
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
