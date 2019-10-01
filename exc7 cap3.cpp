#include<stdio.h>
#include<math.h>


	main(){
		
		
		float a,b,c,I; 
		
			printf("Digite o valor de a:\n");
			scanf("%f", &a);
			printf("Digite o valor de b:\n");
			scanf("%f", &b);
			printf("Digite o valor de c:\n");
			scanf("%f", &c);
			printf("Digite 1,2 ou 3 para I:\n");
			scanf("%f", &I);
			
			
				if(I==1){
					if(a<b && a<c)
					if(b<c)
						printf("\nOs numeros ficam em ordem crescente:\n \t%.2f \t%.2f \t%.2f", a,b,c);
					else
						printf("\nOs numeros ficam em ordem crescente:\n \t%.2f \t%.2f \t%.2f", a,c,b);
			}
		}
					
				
					
				
	
	
	
	

