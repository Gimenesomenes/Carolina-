#include<stdio.h>
#include<math.h>


	main(){
		
		int dia, mes, ano, inteira_hs;
		float hs, min;
				
				printf("Digite a data no formato: DD.\n");
				scanf("%d", &dia);
				
				printf("\nDigite o mes no formato: MM.\n");
				scanf("%d", &mes);
				
				printf("\nDigite o ano no formato: AAAA.\n");
				scanf("%d", &ano);
				
				printf("\nInforme a hora no formato: hora,minuto.\n");
				scanf("%f", &hs);
						
					if(dia<10){
						if(mes<10){
								printf("\nData atual: 0%d 0%d %d", dia, mes, ano);
							}
					}
					else{
					
				printf("\nData atual: %d %d %d ", dia, mes, ano);
					}
					
				
				
			
			
				switch(mes){
					
					case 1: 
						printf("\n\nJaneiro\n"); 
						break; 
					case 2:
						printf("\n\nFevereiro\n");
						break;
					case 3:
						printf("\n\nMarço\n");
						break;
					case 4:
						printf("\n\nAbril\n");
						break;
					case 5:
						printf("\n\nMaio\n");
						break;
					case 6:
						printf("\n\nJunho\n");
						break;
					case 7:
						printf("\n\nJulho\n");
						break;
					case 8:
						printf("\n\nAgosto\n");
						break;
					case 9:
						printf("\n\nSetembro\n");
						break;
					case 10:
						printf("\n\nOutubro\n");
						break;
					case 11:
						printf("\n\nNovembro\n");
						break;
					case 12:
						printf("\n\nDezembro\n");
						break;	
						
				}
				
				
						inteira_hs=(int)hs; 
						min=(hs-inteira_hs)*100;

						printf("O horario informado eh %.2d : %.1f \n",inteira_hs, min);
					
					
				
			
	}
