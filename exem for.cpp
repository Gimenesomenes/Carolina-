#include<stdio.h>
#include<math.h>
#include<stdlib.h>


	main(){
		
		int num, div, resto;
		
		
			printf("Digite um numro: \n");
			scanf("%d", &num);
			
			
				for(div = 1; div <= num; div++){
					
						resto = num%div;
						
							if(resto == 0){
								
								printf("Os divisores encontrados: %d \n", div);
							}
				}
	}
