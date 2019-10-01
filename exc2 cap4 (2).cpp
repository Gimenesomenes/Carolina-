#include<stdio.h>
#include<stdlib.h>


	main(){
		
		int N, i; 
		float E, fat;
		
		
			printf("Digite o valor de N ( inteiro e positivo): \n");
			scanf("%d", &N);
			
			
			for(fat = 1; N >= 1; --N){
				
				
				fat = fat * N;
			
				for(i=1 ; i< N ; i++){
					
					E = 1 + (1 /fat);
					
					
				}
				
			}
			
			printf("%.2f", fat);
			
			
			
			
			printf("%f", E);
			
	}
	
	
	
	//* E = 1 + 1/1! + 1/2! + ... + 1/N!
	//* 5! = 120
	//* 4! = 24
	//* 3! = 6
	//* 2! = 2
	//* 1! = 1
	
	
	//* E = 1 + 1 + 0.5 + 0.16 + 0.0416 + 0.0083
