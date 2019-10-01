#include<stdio.h>
#include<math.h>
#include<stdlib.h>


float main(){
		
		int i;
		float fat;
		
			printf("Digite o numero que quer saber o fatorial:\n");
			scanf("%d", &i);
			
				for(fat = 1; i > 1; --i){
					
					fat = fat * i;
					
					 
				}
				
				printf("O fatorial eh : %d", fat);
	}
