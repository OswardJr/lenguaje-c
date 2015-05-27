#include <stdio.h>
int main()
{
    int n, count;
    int factorial=1;         
    printf("introduzca un numero: ");
    scanf("%d",&n);
    if ( n< 0)
        printf("Error!!! Factorial tiene que se un numero positivo.");
    else
    {
       for(count=1;count<=n;++count)    
       {
          factorial*=count;            
       }
    printf("Factorial = %d",factorial);
    }
    return 0;
}
