#include<stdio.h>
#include<math.h>
#include<stdlib.h>



	main(){
		
		
		int i, cont_mes, ponto;
		float sal_final, ponto_total, maior_ponto, media_ponto;
		
			maior_ponto = 0;
			for(i = 1; i <= 15; i++){
				
				ponto_total = 0;
				
					for(cont_mes = 1; cont_mes <= 3; cont_mes++){
						
						
						printf("\n\nDigite os pontos:\n");
						scanf("%d", &ponto);
						
							ponto_total = ponto_total + ponto;
							
								if(ponto > maior_ponto){
									
									maior_ponto = ponto;
								}
					}
						printf("\nA maior pontuacão foi: %f\n", ponto_total);
						
						media_ponto = ponto_total / 3;
						printf("\nA media de pontos foi: %f\n", media_ponto);			
					printf("\nO maior ponto foi: %f\n", maior_ponto);
			}
	}
