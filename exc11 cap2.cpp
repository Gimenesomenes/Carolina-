#include<stdio.h>
#include<math.h>

	main(){
		
		float n, quad, cubo, raiz, raizc;
			
			printf("\nDigite o numero:\n");
			scanf("%f", &n);
			
				if(n>0){
					quad= (pow(n,2));
				
					cubo=(pow(n,3));
					
					raiz=sqrt(n);
					raizc=(pow(n,1.0/3.0));
					
					printf("\n O quadrado eh:%5.2f", quad);
					printf("\nO cubo eh: %5.2f", cubo);
					printf("\nA raiz eh:%5.2f", raiz);
					printf("\nA raiz cubica eh:%5.2f", raizc);
						
				}
				else
				printf("\nn menor que 0, nao eh possivel realizar a operacao!\n");
				
	}
