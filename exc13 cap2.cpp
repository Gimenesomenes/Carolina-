#include<stdio.h>
#include<math.h>
#include<conio.h>

		main(){
			
			float pes, polegada, jardas, milhas;
		
			
				printf("\nDigite a medida em pes:\n");
				scanf("%f", &pes);
				
				polegada=pes*12;
				jardas= pes/3;
				
				milhas=(jardas/1760);
				
				
				
				printf("\npolegada\n %.2f", polegada);
				printf("\njarda\n %.2f", jardas);
				printf("\nmilhas\n %.2f", milhas);
				
			
			
		}
