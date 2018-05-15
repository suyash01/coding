#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main(){
    int t,i,n,sum;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        sum = 0;
        scanf("%d",&n);
        sum = sum + n/100;
        n = n%100;
        sum = sum + n/50;
        n = n%50;
        sum = sum + n/10;
        n = n%10;
        sum = sum + n/5;
        n = n%5;
        sum = sum + n/2;
        n = n%2;
        sum = sum + n;
        printf("%d\n",sum);
    }
    return 0;
}