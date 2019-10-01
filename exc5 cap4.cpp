#include<stdio.h>
#include<math.h>
#include<stdlib.h>



	main(){
		
		
		int cont, aluno;
		float altura, num_maior, num_menor, maior, menor;
		
				
				
					for(cont = 1; cont <= 5; cont++){
						
						
						printf("\nDigite o numero do aluno:\n");
						scanf("%d", &aluno);
				
						printf("\nDigite a altura do aluno:\n");
						scanf("%f", &altura);
						
							if(cont == 1){
								
								maior = altura;
								num_maior = aluno;
								menor = altura;
								num_menor = aluno;
								
							}
							
							else if(altura > maior){
								
								maior = altura;
								num_maior = aluno;
							}
							
							if(altura < menor){
								
								menor = altura;
								num_menor = aluno;
							}
							
							printf("\nA maior altura eh: %f , e o seu numero eh: %f", maior, num_maior);
							printf("\nA menor altura eh: %f , e o seu numero eh: %f", menor, num_menor);
								
								
						}
	}

