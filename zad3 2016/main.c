#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct planeta{
int nr;
char nazwa[50];
float r;
float V;
};
struct planeta f3(struct planeta tab[] , int n){

struct planeta pom=tab[0];

for(int i=0;i<n;i++)
    if(i%2==0)
     tab[i].V=(3.1415*4.0*tab[i].r*tab[i].r*tab[i].r)/3.0 ;
    else
        tab[i].V=(3.1415*4.0*tab[i].r*tab[i].r*tab[i].r/3.0)*0.9;
for(int i=0;i<n;i++){
if(tab[i].V>pom.V)
    pom=tab[i];
}

return pom;
}

int main()
{

struct planeta tab[3]={{1,"Jowisz",23.41},{2,"Pluto",3111.413},{3,"Ziemia",2846.41}};

struct planeta pomocnicza = f3(tab,3);

    printf("%i %s %f %f",pomocnicza.nr,pomocnicza.nazwa,pomocnicza.r,pomocnicza.V);
    return 0;
}
