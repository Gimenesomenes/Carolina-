#include<stdio.h>
#include<math.h>

	main(){
		
		float ang_escada, alt_parede, medida_escada, radiano; 
			
			printf("Digite o angulo da escada:\n");
			scanf("%f", &ang_escada);
			printf("\nDigite a altura da parede:\n");
			scanf("%f", &alt_parede);
				
				radiano = ang_escada * 3.14/180;
				medida_escada = alt_parede / sin(radiano);
				
					printf("\nA medida da escada eh:\n %.2f", medida_escada);
					
	}
