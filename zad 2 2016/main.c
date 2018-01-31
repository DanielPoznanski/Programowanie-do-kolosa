#include <stdio.h>
#include <stdlib.h>

int f2(int x, int n, int *tab){

int licznik=0;

for(int i=0;i<n;i++){
if(tab[i]%x!=0)
licznik+=tab[i]*tab[i];

}
return licznik;
}


int main()
{
int n,x;
scanf("%i",&n);
scanf("%i",&x);
int *tab=malloc(sizeof(int)*n);
for(int i=0;i<n;i++){
scanf("%i",&tab[i]);

}
printf("%i",f2(x,n,tab));


}
