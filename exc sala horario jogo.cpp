//* Faça um porgrama que receba  hora de início e de término de um jogo. Os valores deverão ser expressos em quatidade 
//* de horas e de minutos. Considere que a duração máxima do jogo é de 24 horas e que ele pode começar em um dia e terminar no outro. 
//* O programa deve retornar a duração do jogo em minutos e segundos.


#include<stdio.h>
#include<math.h>


typedef struct {
		
		
		int horai, mini;
		
			
		}inicio; 
		
typedef struct{
	
		int horaf, minf;
}final;
	
	
	
	main(){
			
			int roda = 0, hh = 0, mm= 0, FIM=0;
			inicio H[roda];
			final  R[roda];
		printf("Digite o horario do jogo em hora e minuto: hh:mm\n");
		scanf("%d : %d", &H[roda].horai, &H[roda].mini);
		
		printf("Digite o horario de termino do jogo: hh:mm\n");
		scanf("%d : %d", &R[roda].horaf, &R[roda].minf);
		
		
			if((H[roda].mini > R[roda].minf) && (H[roda].horai < R[roda].horaf)){
				
					R[roda].minf = R[roda].minf + 60;
					R[roda].horaf = R[roda].horaf - 1;
					
					hh = (R[roda].horaf - H[roda].horai)*60;
					mm = (R[roda].minf - H[roda].mini);
				
					
					FIM = hh + mm;
					
					
					printf("\nA duracão do jogo em minutos e segundos foi de: %d", FIM);
					 
					
					
				
				
				
			}
	}
	
