#include<stdio.h>
#include<math.h>
#include<stdlib.h>


	main(){
		
		int vetor[10],vv[10],i, aux;
		float resto;
			FILE *arq;
			
				printf("Digite 10 valores para o vetor:\n");
				
					for(i = 0; i < 10; i++){
						
						scanf("%d", &vetor[i]);
						
					}
		
		
				arq = fopen("dados.txt", "wt+");
				
				
				
					if(arq == NULL){
						
						printf("\nO arquivo não pode ser aberto!\n");
						exit(1);
						
					}
					
					for(i = 0; i < 10; i++){
						
						resto = vetor[i]%2;
						
							if(resto != 0){
								
								fprintf(arq, "%d\n", vetor[i]);
							}
							
							
					}
					
					fclose(arq);
					
					arq = fopen("dados.txt", "rt+");
					
					while(feof(arq) == 0){
						
						fscanf(arq, "%d", &aux);
						printf("%d", aux);
						
						
						
					}
					
					fclose(arq);
					
	}
