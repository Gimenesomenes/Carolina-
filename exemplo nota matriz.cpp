#include<stdio.h>
#include<stdlib.h>


	main(){
		
		
		int n_alunos = 4;
		int b_anuais = 4;
		float notas_alunos[n_alunos][b_anuais] = {0};
		
		float medias_alunos[n_alunos] = {0};	
		int aluno; //aluno 
		int nota; //notas
		
		float media = 0;
		
		
			printf("Digite as 4 notas do aluno:\n");
			
			for(aluno = 0; aluno < n_alunos; aluno++){
				
					
				
				for(nota = 0; nota < b_anuais; nota++){
					
					scanf("%f", &notas_alunos[aluno][nota]);
					
					media = media + notas_alunos[aluno][nota];   //somar e armazenar as médias inseridas...
				}
				
				medias_alunos[aluno] = media / b_anuais;           //armazena a soma das notas que estava em uma matriz, em um vetor.  
			
				media = 0; 			//reseta a variável media para fazer a média de outro aluno...
		
				printf("Insira as 4 notas do aluno %d:\n", aluno + 2);
		
			}
		
			return 0; 
	
	}
