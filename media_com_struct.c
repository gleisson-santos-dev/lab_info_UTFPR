#include <stdio.h>

typedef struct 
{
    float p1,p2,media;

} aluno;

int main(){

    int i;
    aluno turma[10];

    for (i=0;i<10;i++){

        turma[i].media=0;

        printf("digite a nota da p1 dos aluno%d \n",i);
        scanf("%f",&turma[i].p1);

        printf("digite a nota da p2 do aluno%d \n ",i);
        scanf("%f",&turma[i].p2);
        turma[i].media= (turma[i].p1+turma[i].p2)/2;
    }
    
    for(i=0;i<10;i++){
        printf("%f\n",turma[i].media);
    }
    return 0;
}