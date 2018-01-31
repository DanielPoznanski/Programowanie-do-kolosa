#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int f4(char *napis){
int licznik=0;
for(int i=0;napis[i]!='\0';i++){
if(napis[i]>='a' && napis[i]<='z')
    napis[i]=napis[i]-('a'-'A');
if(napis[i+1]>='a' && napis[i+1]<='z')
    napis[i+1]=napis[i+1]-('a'-'A');
if(napis[i]==napis[i+1])
    licznik+=1;
}return licznik;}
int main()
{
char napis[80];
scanf("%s",&napis);

printf("%i",f4(napis));

return 0;

}
