#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool f1(int **tab,int n,int m){
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if (i==0 || j==0 || n-1==i || m-1==j)   //sprawdzamy skrajne komorki tablicy czy sa rozne od zera
            if(tab[i][j]==0)
                return false;
    }
}return true;

}

int main()
{
    int **tab=malloc(sizeof(int*)*3);
    for(int i=0;i<3;i++){
        tab[i]=malloc(sizeof(int)*3);
        for(int j=0;j<3;j++){
        tab[i][j]=(i+7)*1/5;
    }}

    printf("%i",f1(tab,3,3));
}
