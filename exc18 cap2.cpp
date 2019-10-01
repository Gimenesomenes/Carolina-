#include<stdio.h>
#include<math.h>


	main(){ 
	
		float peso_s, racao_gato1, racao_gato2, racao_final;
		
			printf("Digite o peso do saco de racao:\n");
			scanf("%f", &peso_s);
			printf("\nQuantidade de racao para gato 1:\n");
			scanf("%f", &racao_gato1);
			printf("\nQuantidade de racao para gato 2:\n");
			scanf("%f", &racao_gato2);
			
			racao_gato1 = racao_gato1/1000;
			racao_gato2 = racao_gato2/1000;
			racao_final = peso_s - 5*(racao_gato1 + racao_gato2);
			
				printf("\nA quantidade de racao que sobrou eh:\n %.2f", racao_final);
	}
