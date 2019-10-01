#include<stdio.h>
#include<math.h>
#include<stdlib.h>


	main(){
		
			int qtd;
			double media, valor, soma;
			
				printf("Digite a lista de numeros: \n");
				scanf("%lf", &valor);
				
				
						soma = 0;
						qtd = 0;
						
					while(valor >= 0.0){
						
						soma = soma + valor;
						qtd ++;
						scanf("%lf", &valor);
					}
					
					media = soma/qtd;
					printf("\nA media dos numeros: %.2lf", media);
	}
