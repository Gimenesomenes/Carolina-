#include<stdio.h>
#include<math.h>
	
	main(){
		
		float horas, valor_horas, sal_min, sal_bruto, imp, sal_receber;
			
			printf("Digite o numero de horas trabalhadas:\n");
				scanf("%f", &horas);
			printf("\nDigite o valor do salario minimo:\n");
				scanf("%f", &sal_min);
				
				valor_horas= sal_min/2;
				sal_bruto= valor_horas*horas;
				imp = sal_bruto*3/100;
				sal_receber= sal_bruto - imp;
				
				
				printf("\nA hora trabalhada:\n %.2f", valor_horas);
				printf("\nSalario bruto:\n %.2f", sal_bruto);
				printf("\nO imposto vale:\n %.2f", imp);
				printf("\nO salario liquido eh: %.2f", sal_receber);
				
				
	}
