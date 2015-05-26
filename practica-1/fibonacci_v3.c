#include <stdio.h>
int main(){
    int n, ant1=0, ant2=1, fib=0;
    printf("Introduzca el número que desea ubicar en la serie Fibonacci: ");
    scanf("%d",&n);
    do{
        fib = ant1 + ant2;
        ant1 = ant2;
        ant2 = fib;
        printf("%d ",fib);
    }while(fib<n);
    fib = ant1 + ant2;
    return 0;
}
