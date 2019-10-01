#include<stdio.h>
#include<math.h>

	main(){
		
		float trab, aval, exame, media;
			printf("Digite a nota do trabalho:\n");
			scanf("%f", &trab);
			
			printf("\nDigite a nota da avaliacao semestral:\n");
			scanf("%f", &aval);
			
			printf("\nDigite a nota do exame final:\n");
			scanf("%f", &exame);
			
				media = (trab*2 + aval*3 + exame*5) / 10;
				
					if(media>=8 && media<=10){
						printf("\nConceito A\n");
					}
					
					if(media>=7 && media<8){
						printf("\nConceito B\n");
						
					
					}
					if(media>=6 && media<7){
						printf("\nConceito C\n");
					}
					
					if(media>=5 && media<6){
						printf("\nConceito D\n");
					}
					
					if(media>=0 && media<5){
						printf("\nConceito E\n");
					}
	}
