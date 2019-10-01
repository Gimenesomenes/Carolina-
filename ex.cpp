#include<stdio.h>
#include<conio.h>


	int MaxDivCom(int x, int y){
		
		int resto;
		resto = x % y;
		
			while( resto != 0){
				
				x = y;
				y = resto;
				resto = x % y;
			}
			
			return(y);
			
			
	}
	
	
	// Função principal recebe a função MaxDivCom::
	
	
	main(){
		
		int Mdc, a, b;
		int MaxDivCom( int x, int y);
		
		printf("Digite os dois inteiros: \n");
		scanf("%d %d", &a, &b);
		
		Mdc = MaxDivCom(a,b);
		
			printf("Mdc(%d %d) = %d", a, b, Mdc );
			
	}
