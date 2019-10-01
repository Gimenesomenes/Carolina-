#include<stdio.h>
#include<math.h>
#include<stdlib.h>



	main(){
		
		float cont, n1, n2, media, ta, te, tr, total_classe, media_classe;
		
		
		
			for(cont = 1; cont <= 6; cont++){
			
					printf("Digite as notas p1 e p2:\n");
					
					scanf("%f %f", &n1, &n2);
					
					
						media = n1 + n2/2;
					
					printf("\nA media das notas eh: %f\n", media);	
					
					
				if(media <= 3){
					
					tr=tr+1;
					printf("\nO aluno foi reprovado!\n");
				}
				
				if(media>3 && media<7){
					te = te + 1;
					printf("\nO aluno esta de Exame!\n");
				}
				
				if(media >= 7){
					ta = ta + 1;
					printf("\nO aluno esta aprovado!\n");
					
				}
				
				total_classe = total_classe + media;
				
			}
			
			printf("O total de alunos reprovados: %.1f\n", tr);
			printf("O total de alunos de exame: %.1f \n", te);
			printf("O total de alunos aprovados: %.1f \n", ta);
			
			media_classe = total_classe/6;
			
				printf("\nA media da classe eh: %.1f", media_classe);
			
			
				
				}
				
				
		
