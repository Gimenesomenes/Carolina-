#include<stdio.h>
#include<math.h>

	main(){
		
		int ano_nascimento, ano_atual, idade, idade2005;
		
			printf("\nDigite o ano de nascimento:\n");
			scanf("%d", &ano_nascimento);
			
			printf("\nDigite o ano atual:\n");
			scanf("%d", &ano_atual);
			
				idade=(ano_atual-ano_nascimento);
				idade2005=(2005-ano_nascimento);
			
			printf("\nSua idade atual eh:\n %.2d", idade);
			printf("\nSua idade em 2005 era:\n %.2d", idade2005);
			
		
	}
