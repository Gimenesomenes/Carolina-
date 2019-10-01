#include<stdio.h>
#include<math.h>

	main(){
		
		float salario, aumento, novo_sal;
		int cargo; 
		
			printf("Digite o cargo do funcionario (1,2,3,4 ou 5)");
			scanf("%d", &cargo);
			
			printf("\nDigite o valor do salario:\n");
			scanf("%f", &salario);
			
				if(cargo==1){
					
					printf("\nO cargo do funcionario eh Escrituario.\n");
						
						aumento = salario * 50/100; 
						printf("\nO aumento eh: %.2f\n", aumento);
						
						novo_sal = salario + aumento;
						printf("\nO seu novo salario eh: %.2f\n", novo_sal);
						
				
				}
				
				else if(cargo==2){
					
					printf("\nO cargo eh Secretario.\n");
					
						aumento= salario * 35/100; 
						printf("\nO aumento eh: %.2f", aumento);
						
						novo_sal= aumento+salario; 
						printf("\nO seu novo salario eh: %.2f\n", novo_sal);
						
						
				}
				
				else if(cargo==3){
					
					printf("\nO cargo eh Caixa.\n");
					
						aumento = salario * 20/100;
						printf("\nO aumento eh: %.2f", aumento);
						
						novo_sal = aumento + salario;
						printf("\nO novo salario eh: %.2f", novo_sal);
						
						
				}
				
				else if(cargo==4){
					
					printf("\n O cargo eh Gerente.\n");
					
						aumento = salario * 10/100;
						printf("\nO aumento eh: %.2f", aumento);
						
						novo_sal = aumento + salario;
						printf("\nO novo salario eh: %.2f", novo_sal);
						
				}
				
				else if(cargo==5){
					
					printf("\n O cargo eh Diretor.\n");
					
						
						printf("\nNao obteve aumento!\n");
						printf("\nO salario eh o mesmo!\n");
						
						
						
				}
	}			
			
