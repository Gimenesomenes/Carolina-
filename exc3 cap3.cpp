#include<stdio.h>
#include<math.h>


	main(){
		
		
		float n1, n2;
		printf("Digite o numero '1':\n");
		scanf("%f", &n1);
		printf("\nDigite o numero '2'':\n");
		scanf("%f", &n2);
		
			if(n1>n2){
				
				printf("O numero 1 eh o maior %.2f", n1);
			}
			
			if(n2>n1){
				printf("O numero 2 eh o maior %.2f", n2);
			}
			
			if(n2==n1){
				printf("Os numeros sao iguais!!");
			}
	}
