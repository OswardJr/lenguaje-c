#include <stdio.h>
int main(){

int num,ant1=0,ant2=1,fibo=0;

    printf("introduzca el numero que quiere saber si es fibonacci: ");
        scanf("%d",&num);

    do{

        fibo=ant1 + ant2;
        ant1=ant2;
        ant2=fibo;
        
       
       }while(fibo<num);
        
        if (num==fibo)
            printf("pertenece a la serie");

            else
            printf("No pertenece a la serie");

    return 0;
}
