#include<stdio.h>
#include<math.h>

    main(){

        float sal,salreceber, salgrat, salimp;
            printf("\nDigite o sal�rio\n");
            scanf("%f", &sal);
                salgrat=sal*(5/100);
                salimp=sal*(7/100);
            printf("\nsal�rio gratificado: %f\n", salgrat);
            printf("\nsal�rio com imposto: %f\n",salimp);
                scanf("%f", &salgrat);
                scanf("%f", &salimp);
                    salreceber=sal+salgrat-salimp;
                printf("O sal�rio a receber �: %f", salreceber);



        }
