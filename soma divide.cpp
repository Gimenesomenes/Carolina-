#include<stdio.h>

main(){
	int n,i,soma;
	float final;
	
	n=4;
	soma=0;
	for(i=1; i<n; i++){
		soma=soma+i;
		
	}
	final=soma/(n-1);
	printf("Resultado %f", final);
}


