#include<stdio.h>
#include<math.h>

	main(){
		
		
		int num, resto; 
		
			printf("Digite um numero inteiro:\n");
			scanf("%d", &num);
			
				resto = (num%2);
				
				if(resto==0){
					
					printf("\nO numero eh par");
				}
				else{
					printf("\nO numero eh impar");
				}
	}
