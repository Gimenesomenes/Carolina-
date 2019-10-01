#include<stdio.h>
#include<math.h>


	main(){
		
		float x,y,z;
		
			printf("Forneca o tamanho da escada:\n");
			scanf("%f", &x);
			printf("\nA altura que quer pregar o quadro:\n");
			scanf("%f", &y);
			
			
				z=sqrt(pow(x,2)-pow(y,2));
				
					printf("\nA distancia que a escada deve estar da parede eh:\n %.2f", z);
					 
				
				
		}
