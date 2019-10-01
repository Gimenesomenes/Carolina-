#include<stdio.h>
#include<math.h>
#include<time.h>


	main(){
		
		int hora_i, min_i, hora_f, min_f, hora_d, min_d;
		
			printf("Digite a hora de inicio do jogo: hh:mm\n");
			scanf("%d : %d", &hora_i , &min_i);
			
			printf("\nDigite a hora de termino do jogo: hh:mm\n");
			scanf("%d : %d", &hora_f , &min_f);
			
			
			
				if(min_i > min_f){
					
					min_f = min_f + 60;
					hora_f = hora_f -1;
				}
				
				if(hora_i > hora_f){
					
					hora_f = hora_f + 24;
					
				}
				
				
					min_d = min_f - min_i;
					hora_d = hora_f - hora_i;
				
					printf("\nO jogo durou: %d : %d" , hora_d , min_d);
		
			
	
		}
