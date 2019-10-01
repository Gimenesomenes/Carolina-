#include<stdio.h>
#include<math.h>
#include<stdlib.h>


	main( ){
		
		
		int qtd, cont;
		double media, valor,soma; 
		
		
			printf("Digite a quantidade de numeros que devem ser lidos:\n");
			scanf("%d", &qtd);
				
				
					soma = 0;
				for(cont = 1; cont <= qtd; cont++){
					
					printf("\n Valor:");
					scanf("%lf", &valor);
					
						soma = soma + valor; 
						printf("%.2lf", soma);
					
				}			
				
				media = soma / qtd;
					printf("\nA media dos valores eh: %.2lf\n", media);
	}
