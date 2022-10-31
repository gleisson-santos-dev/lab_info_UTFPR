#include <stdio.h>
//defição
struct ponto
{
    float x, y; 
};
//oltra forma de defenir
typedef struct 
{
    float a,b;
} ponto2;

int main(){
    //decraração
    struct ponto p1, p2;
    // da oultra forma fica melhor pra decrar
    ponto2 p3,p4;

    //manipulando
    p1.x=3.5;
    p1.y=2;


    

    return 0;
}