#include <stdio.h>
#include <math.h>


        main(){

            float a,b,c,x;

                printf("\nEscreva os 3 valores\n");
                scanf("%f", &a);
                scanf("%f", &b);
                scanf("%f", &c);
                    x=(pow(b,2)-(4*a*c));

                    if(x>=0){
                            printf("O valor de x �: %f\n", x);
                    }
                    else{
                        printf("N�o existe raiz!\n");
                    }
        }



