#include<stdio.h>
#include<math.h>
#include<stdlib.h>



	main(){
		
		int N,i,j;
		float num, fat; 
		
		
			printf("Digite o valor N:\n");
			scanf("%d", &N);
		
					for(i=1; i<=N; i++){
				
				
							scanf("%f", &num);
				
			
								fat = 1;
								
								for(j=1; j <= num; j++){
						
									fat = fat * j;
						
								}
					}
			
			printf("%.2f", fat);
			}
