#include<stdio.h>
#include<math.h>

	main(){
		
		float n1, n2, n3, media, exame; 
		
			printf("Digite a nota da p1:\n");
			scanf("%f", &n1);
			printf("\nDigite a nota da p2:\n");
			scanf("%f", &n2);
			printf("\nDigite a nota da p3:\n");
			scanf("%f", &n3);
			
			
			media = (n1+n2+n3)/ 3;
			
				printf("A media eh: %.2f", media);
				
				
					if(media>=0 && media<3){
						printf("\nReprovado", media);
						
					}
					
					if(media>=3 && media<7){
						printf("\nExame", media);
						printf("\nA nota que deve tirar para passar eh: %.2f", exame=12-media);
						
					}
				
					
					if(media>=7 && media<=10){
						printf("Aprovado", media);
					}
	
	
				
						
	
	
	
	}
	
	
