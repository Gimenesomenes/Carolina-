#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>



	main(){
		
		
		float n, i, f, a;
		 
		
			printf("Escreva o numero real:\n");
			scanf("%f", &n);
			
				i = int(n);
				f = n-i;
				a = ceil(n);
				
					printf("\nA parte inteira desse numero: \n %.2f", i );
					printf("\nA parte fracionaria desse numero: \n %.f", f);
					printf("\nO arredondamento desse numero:\n %.2f", a);
					
						}
