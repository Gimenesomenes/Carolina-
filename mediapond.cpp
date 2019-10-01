#include<stdio.h>

main(){
	float a,b,c,mediapond;
	printf("Digite as 3 notas\n");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
		mediapond=((a*2)+(b*3)+(c*1))/6;
			printf("A média ponderada das notas é: %5.2f", mediapond);
			
}
