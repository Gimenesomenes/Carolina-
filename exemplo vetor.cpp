#include<stdio.h>
#include<stdlib.h>

//digita nota, calcula m�dia utilizando vetores...



	main(){
		
		float notas[5] = {0};
		float total = 0;
		float media;
		int i;
		
		
		printf("Insira 5 notas:\n");				//Assim que o usu�rio digitar a nota, ela vai entrar no vetor
													// na posi��o 0, pois o for come�a no 0, para alocar no vetor
													// notas[5] = [0][1][2][3][4]
		
		
		for(i = 0; i < 5; ++i){
			
			scanf("%f", &notas[i]);
			
				
					
					
					total = total + notas[i];   //Cada vez que insere um nota o total soma essa nota na vari�vel total...
				 				

		}
		
		
			media = total /5;
		
			printf("A media das notas eh: %.2f", media);
		
	
	}
	
	
