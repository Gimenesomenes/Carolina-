#include<stdio.h>
#include<math.h>

	main(){
		
		
		float sal, imp, aumento, novo_sal;
		int op; 
		
		
			printf("Menu de opções:\n");
			printf("\n1. Imposto\n");
			printf("\n2. Novo Salario\n");
			printf("\n3. Classificacão\n");
			printf("\nDigite a opcão desejada:\n");
			scanf("%d", &op);
			
			
				if(op == 1){
					
					printf("\nDigite o salario do funcionario:\n");
					scanf("%f", &sal);
					
					if(sal < 500){
						
						novo_sal = sal * 5/100;
						imp = sal - novo_sal;
							printf("\nO valor do imposto eh: %f", imp);
					}
					
					if(sal>=500 && sal<=850){
						
						novo_sal = sal * 10/100;
						imp = sal - novo_sal;
							printf("\nO valor do imposto eh: %f", imp);
						
					}
					
					if(sal > 850){
						
						novo_sal = sal * 15/100;
						imp = sal - novo_sal;
								printf("\nO valor do imposto eh: %f", imp);
					}
				}
				
				
				if(op == 2){
					
					printf("\nDigite o salario do funcionario:\n");
					scanf("%f", &sal);
					
					
						if(sal > 1500){
							
							aumento = sal + 25; 
							novo_sal = aumento;
							
								printf("\nO novo salario eh: %.2f\n", novo_sal);
							
						}
						
						if(sal >= 750 && sal <= 1500){
							
							aumento = sal + 50;
							novo_sal = aumento;
							
								printf("\nO novo salario eh: %.2f\n", novo_sal);
						}
						
						
						if(sal >= 450 && sal<750){
								
								
							aumento = sal + 75;
							novo_sal = aumento;
							
								printf("\nO novo salario eh: %.2f\n", novo_sal);
							
						}
						
						
						if(sal < 450){
							
							aumento = sal + 100;
							novo_sal = aumento;
							
								printf("\nO novo salario eh: %.2f\n", novo_sal);
							
							
						}
				}
				
				
				
					if(op == 3){
						
						printf("\nDigite o salario do funcionario:\n");
						scanf("%f", &sal);
						
						if(sal <= 700){
							
							printf("\nA classificacão eh: Mal Remunerado!\n");
							
						}
						
						if(sal > 700){
							
							printf("\nA classificacão eh: Bem remunerado!\n");
						}
					}
					
					if (op<1 || op>3){
						
						printf("\nOpcão invalida!\n");
					}
	}
