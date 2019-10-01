//* funcionário contratado em 1995, com sal_inicial = 1000,00;
//* em 1996 recebeu um aum_sal = 1,5% sobre seu sal_incial; novo_sal = sal_inicial * 1,5/100;
//* em 1997 os aumentos sal sempre correspondem ao dobro do percentual do ano anterior;
//* Programa que determine o sal_atual desse funcionário.



#include<stdio.h>
#include<math.h>
#include<stdlib.h>


	main() {
		
		float salario, novo_sal, percentual; 
		int i, ano_atual;
		
		
			printf("Digite o ano atual:\n");
			scanf("%d", &ano_atual);
			
			percentual = 1,5/100;
			salario = 1000;
			
			novo_sal = salario + (salario*percentual);
				
				i=1997;
				while(i <= ano_atual){
					
				percentual = 2 * percentual;
				novo_sal = novo_sal + percentual * novo_sal;
					i = i + 1;
				}
		
		
					printf("\nO novo salario eh: %5.2f \n", novo_sal);
	}
