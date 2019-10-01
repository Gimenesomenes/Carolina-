#include<stdio.h>
#include<math.h>
#include<stdlib.h>



	main(){
		
		
		int div, resto, n, n_div;
		
			printf("Digite um numero: \n");
			scanf("%d", &n);
					n_div = 0;
				for(div = 1; div <= n; div++){
					
						resto = n%div;
						
							if(resto == 0){
								n_div = n_div + 1;
								
								if(n_div >= 3){
									break;
								}
							}
				}
				
				if(n_div == 2){
					
					printf("O numero %d eh primo!", n);
					
				}
				else{
					
					printf("O numero %d nao eh primo!", n);
				}
			
	}
