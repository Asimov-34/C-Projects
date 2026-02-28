#include<stdio.h>
#include<math.h>

int main () {

FILE *primos;
primos = fopen("primos.dat","r");

int n,i,m;
int A[100000];
int B[100000];
printf("Seleccione por favor el número que desea descomponer: ");
scanf("%d", &n);
m=n;
for (i=0;i<100000;i++){
    fscanf(primos," %d ",&A[i]);
    B[i]=0;
}
while (n!=1){ 
    for (i=0;i<100000;i++){
        if (n%A[i]==0){
            B[i]=B[i]+1;
            n=n/(A[i]);
            i=0;
        }
    }
}
printf("Facroirzacíón de %d=" ,m);
for (i=0;i<100000;i++){
    if (B[i]!=0){
    printf(" %d^%d " ,A[i] ,B[i]);
    }
    
}
printf("\n");

    
return 0; 
}