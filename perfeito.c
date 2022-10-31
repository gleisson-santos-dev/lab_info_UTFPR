#include <stdio.h>
int main (){
    int num, i, aux;

    printf("digite um numero");
    scanf("%d", &num);
    i=1;
    aux=0;

    while (i<num)
    {
        if (num%i==0)
        {
            aux += i;
        }
        
        i++;
    }
    if (aux==num)
    {
        printf("esse numero e um numero perfeito");
    }
    else
        printf("nao e um numero perfeito");

   
return 0 ;    
}