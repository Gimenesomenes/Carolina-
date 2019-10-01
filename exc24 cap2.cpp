#include<stdio.h>
#include<math.h>

	main(){
		
		
		
		float hora, min, h, conversao; 
		
			printf("Digite a hora em formato h.min\n");
			scanf("%f", &hora);
			
				h = trunc (hora);
				min = hora - h;
				conversao = (h*60) + (min*100);
				
					printf("\nA hora convertida toda em minutos eh:\n %.2f", conversao);
					
	}
	
