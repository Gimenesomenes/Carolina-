#include<stdio.h>
#include<math.h>


	main(){
		
		
		float nota1, nota2, nota3, media, nota_exame;
		
			printf("Digite a nota da primeira prova:\n");
			scanf("%f", &nota1);
			printf("\nDigite a nota da segunda prova:\n");
			scanf("%f", &nota2);
			printf("\nDigite a nota da terceira prova:\n");
			scanf("%f", &nota3);
			
				media=(nota1+nota2+nota3)/3;
					printf("\nA media eh:\n %.2f", media);
					
				
				
					
						if(media>=0 && media<3){
							printf("\nREPROVADO!\n");
							}
						
						if(media>=3 && media<7){
							printf("\nEXAME!!\n");
							nota_exame = 12 - media;
								printf("\nDeve tirar:\n %.2f", nota_exame, "para ser aprovado\n");
						}	
						
						if(media>=7 && media<=10){
							printf("\nAPROVADO!\n");
						}
	
	
	
	}
	
	
