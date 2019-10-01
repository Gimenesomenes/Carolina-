#include<stdio.h>
#include<math.h>


	main(){
		
		float custo, convite, qtd_convite; 
		
			printf("Digite o custo do espetaculo:\n");
			scanf("%f", &custo);
			printf("\nDigite o preco do convite:\n");
			scanf("%f", &convite);
			
			
				qtd_convite = custo / convite;
				
					printf("\nA quantidade de convites eh: \n %.2f", qtd_convite);
					
			
		}
