#include<stdio.h>
#include<math.h>


	main(){
		
		int N,i,j;
		float E, fat;
		
			printf("Digite um numero inteiro e N > 0: \n");
			scanf("%d", &N);
			
				E = 1;
				for (i=1;i<=N;i++)
		{
			fat = 1;
			
			
			for (j=1;j<=i;j++)
				fat = fat * j;
			E = E + 1/fat;
		}
				
				printf("O valor de E eh: %f", E);
				
				
	}
