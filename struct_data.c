#include <stdio.h> 

 struct data
{
    int dia, mes, ano; 
    
};
int main(){
    struct data hoje;
    printf("digite o dia\n");
    scanf("%d", &hoje.dia);
    printf("digite o mes\n");
    scanf("%d", &hoje.mes);
    printf("digite o ano\n");
    scanf("%d", &hoje.ano);
    
    printf("hoje é: %d/%d/%d \n", hoje.dia, hoje.mes, hoje.ano);
    return 0;
}