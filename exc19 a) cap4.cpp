#include<stdio.h>
#include<math.h>
#include<stdlib.h>


	main(){
		
		float altura, maior_altura, menor_altura;
		int i;
		char sexo;
		
		
			for(i = 1; i <= 15; i++){
				
				printf("\nDigite a altura:\n");
				scanf("%f", &altura);
				printf("\nDigite o sexo [M]Masculino ou [F]Feminino:\n");
				scanf("% c", &sexo);	
				
			
			
				if(i == 1){
					
					maior_altura = altura;
					menor_altura = altura;
				}
				}
				if( altura > maior_altura ){
					
					maior_altura = altura;
				}
				
				else if(altura < menor_altura){
					
					menor_altura = altura;
				}
				
			
						printf("\nA maior altura eh: %f", maior_altura);
						printf("\nA menor altura eh: %f", menor_altura);		
			
			
	}
