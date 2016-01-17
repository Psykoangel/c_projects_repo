#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define LONGUEUR 100000

/*
2      sqrt(2)     sqrt(2+sqrt(2))     sqrt(sqrt(2+sqrt(2)))
sqrt(sqrt(sqrt(2+sqrt(2))))
---- = --------- X ----------------- X -----------------------
X----------------------------- X ....
PI       2                2                     2                            2
http://fr.wikipedia.org/wiki/Pi

float FctPi(int x){
float temp;
int i;
if (x==1){
return sqrt(2)/2;     //C(X)=2^(0,5)
}
else {
temp = 2+sqrt(2);
for(i=2;i<=x;i++){
temp=sqrt(temp);
}
return (temp/2)*FctPi(x-1);
}
}


float FctPI2(int x){

if(x == 1){
return sqrt(2);
}else{
return sqrt( 2 + FctPI2(x-1));
}
}

float FctPI3(int x){
float pi = 1;
int i;
for(i=0;i<=x;i++){
pi *= (float)(2*i+2)/(2*i+1);
pi *= (float)(2*i+2)/(2*i+3);
}
return pi;
}
*/

double Calcule(int i) {
  if (i == 1)
    return (sqrt(2));
  else {
    return (sqrt(2 - 2 * sqrt(1 - pow(Calcule(i - 1) / 2, 2))));
  }
}

double Calculepi(int i) { return (pow(2, i) * Calcule(i)); }

int main(void) {
  // printf("Pi est egale a : %f \n",(2*pow(FctPi(2),-1)));
  // printf("Pi est egale a : %f \n",pow(2,20)*sqrt(2-FctPI2(20)));
  // printf("Pi est egale a : %f \n",FctPI3(1000)*2);
  printf("Pi est egale a : %f \n", Calculepi(10));

  // long long nombre[LONGUEUR] = {0};
  // long long i,j;
  // for(i=1;i<LONGUEUR;i++){
  //	nombre[i]=i;
  //	}
  // for(i=2;i<sqrt(LONGUEUR);i++){
  //	if(nombre[i] != 0){
  //		for(j=i+1;j<LONGUEUR;j++){
  //			if(nombre[j]%i == 0){
  //				nombre[j] = 0;
  //				}
  //			}
  //		}
  //	}

  // for(i=2,j=0;i<LONGUEUR;i++){
  //	if(nombre[i] != 0){
  //		printf("%d",nombre[i]);
  //		if(j++%5==0)
  //			printf("\n");
  //		else
  //			printf(",");
  //		}
  //	}
  //
  return 0;
}
