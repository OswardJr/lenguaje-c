#include <stdio.h>
int main(){

int num,ant1=0,ant2=1,fibo=0;

    printf("introduzca el numero que quiere saber si es fibonacci: ");
        scanf("%d",&num);

    while (fibo<num){

        fibo=ant1 + ant2;
        ant1=ant2;
        ant2=fibo;
        printf("%d ,",fibo);
    }

        if (fibo==num)
            printf("%d",fibo);

            else
                printf("%d",fibo);
return 0;
}
