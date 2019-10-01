#include<stdio.h>
#include<stdlib.h>
#include<math.h>



	main(){
		
		float altura, maior_altura, menor_altura, media_F, qtde_F, cf, cm;
		char sexo, maior_sexo;
		int i;
		
		qtde_F = 0;
		cf = 0;
		cm = 0;
		
		for(i = 1; i <= 5; i++){
			
			printf("\nDigite a altura:\n");
			scanf("%f", &altura);
			printf("\nDigite o sexo, [M]Masculino ou [F]Feminino:\n");
			scanf(" %c", &sexo);
			
			
				if(i == 1){
					
					maior_altura = altura;
					menor_altura = altura;
					maior_sexo = sexo;
				}
				
				if(altura > maior_altura){
					
					maior_altura = altura;
					maior_sexo = sexo;
				}
				
				else if(altura < menor_altura){
					
					menor_altura = altura;
				}
				
				if(sexo == 'F'){
					
					qtde_F = qtde_F + altura;
					cf = cf + 1;
				}
				
				else{
					
					cm = cm + 1;
				}
				
				
				media_F = qtde_F / cf;
			
		}
		
		printf("\nA media de altura das mulheres eh: %.2f", media_F);
		
		printf("\nA menor altura eh: %.2f, e a maior altura eh: %.2f", menor_altura, maior_altura);
		
		printf("\n O numero de homens: %.2f", cm);
		
		printf("\nA maior altura eh do sexo: %c", maior_sexo);
	}
