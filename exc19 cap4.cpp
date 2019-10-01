#include<stdio.h>
#include<stdlib.h>
#include<math.h>



	main(){
		
		float altura, maior_altura, menor_altura, media_alt_F, somaf,cf, cm;
		int num_H, i;
		char sexo, maior_sexo;
		
		
			somaf = 0;
			cf = 0;
			cm = 0;
		
				for(i = 1; i <= 5; i++){
					
					printf("Digite a altura:\n");
					scanf("%f", &altura);
					
					printf("\nDigite o sexo [M]Masculino ou [F]Feminino:\n");
					scanf(" %c", &sexo);
				
				
				}
						if(i == 1){
							
							maior_altura = altura;   //Atualiza a entrada //
							maior_sexo = sexo;		//da primeira variável//
							menor_altura = altura;
							
						}
						
						else if(altura > maior_altura){
							
								maior_altura = altura;
								maior_sexo = sexo;
								
						}
						
						else if(altura < menor_altura){
							
							menor_altura = altura;
						}
						
						if(sexo == 'F'){
							
							somaf = somaf + altura;
							cf = cf + 1;
						}
						
						else{
							
							cm = cm + 1;
							
						}
					
					printf("\A menor e maior altura: %f %f", maior_altura, menor_altura);
				
				
				if(cf = 0){
					
					media_alt_F = 0;
			}
				
				else{
					
					media_alt_F = somaf / cf;
				}
				
				printf("\nA media de altura das mulheres eh: %f", media_alt_F);
				printf("\nO numero de homens eh: %f", cm);
				printf("\nO sexo da pessoa mais alta eh: %f", maior_sexo);
	}
