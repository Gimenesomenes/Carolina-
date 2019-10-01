#include<stdio.h>
#include<stdlib.h>



	main(){
		
		int time, jogador, qtde, idade;
		float peso, altura, media_altura, media_idade, peso_80, porc;
		
		
		
		
				qtde = 0;
				media_altura = 0;
				peso_80 = 0;
				
			for(time = 1; time <= 5; time++){
				
					media_idade = 0;	
				for(jogador = 1; jogador <= 11; jogador++){
					
					printf("\nDigite a idade do jogador:\n");
					scanf("%d", &idade);
					printf("\nDigite o peso do jogador:\n");
					scanf("%f", &peso);
					printf("\nDigite a altura do jogador:\n");
					scanf("%f", &altura);
					
					
					
					if(idade < 18){
							
							qtde = qtde + 1;
					}
					
					if(peso > 80){
						
						peso_80 = peso_80 + 1;
					}
				
					media_idade = media_idade + idade; 
					media_altura = media_altura + altura;
				}
			
				printf("\nA media de idade dos jogadores eh: %.2f", media_idade = media_idade/2);
			
			}
	
			printf("\nA porcentagem de pessoas com peso > 80 eh: %.2f ",  porc = peso_80*100 / 55);
			printf("\nA quantidade de jogadores < 18 anos eh: %d", qtde);
			printf("\nA media de altura de todos os jogadores eh: %.2f", media_altura = media_altura/55);



	}
	
