#include<stdio.h>
#include<math.h>
#include<stdlib.h>


	main(){
			
			int qtd, cont;
			double valores, media, soma;
			
			
		
			printf("Digite a quantidade de valores:\n ");
			scanf("%d", &qtd);
			
					soma = 0;
				for(cont = 1; cont <= qtd; cont++){
					
					printf("Digite os valores:\n");
					scanf("%lf", &valores);
					
					soma = soma + valores;    //* atualiza o valor da soma... para fazer a média.
					
						printf("%lf \n", soma);
				}
				
				media = soma /qtd;
				
				printf("A media eh: %.2lf", media);
				
				return 0;
	}
