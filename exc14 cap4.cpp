#include<stdio.h>
#include<math.h>
#include<stdlib.h>


	main(){
		
		int num, soma, cont;
			
			
			soma=0;
			num=2;
			for(cont = 1; cont <= 50; cont++){
				
				soma = soma + num;
				num = num + 2;
				
			}
			
			printf("\n A soma eh:%d", soma);
	}
