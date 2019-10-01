#include<stdio.h>
#include<math.h>

	main(){
	
		float x, y, z1, z2;
		
			printf("\nDigite os dois numeros:\n");
			scanf("%f", &x);
			scanf("%f", &y);
			
				if(x>0 && y>0){
					
					z1=(pow(x,y));
					z2=(pow(y,x));
					
						printf("\nX elevado a Y eh:\n %5.2f", z1);
						printf("\nY elevado a X eh:\n %5.2f", z2);
						
				}
				else 
				printf("\nNao eh possivel realizar a operacao!\n");
				
		
	
	
	
	}
	
