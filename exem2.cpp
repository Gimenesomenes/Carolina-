//*  O programa calcula o máximo divisor comum (MDC) entre dois números positivos.

#include<stdio.h>
#include<math.h>
#include<stdlib.h>


	main(){
		
		int numA, numB, resto;
		
				printf("Digite dois numeros em ordem crescente:\n");
				printf("Digite o numero A e B:\n");
				scanf("%d %d", &numA, &numB);
				
				
				
				while(numA > 0){
					
					resto = numB%numA;
						
						printf("numero B = %d; numero A = %d", numB, numA);
						printf("\nresto = %d \n", resto);
						
						numB = numA;
						numA = resto;
						
				}
					
					
					printf("MDC: %d", numB);
					
					
		
	}
