#include <stdio.h>

double c;

double fact(int n){
    int res=1;
    if (n==0 || n==1)
        return 1;
    for (int i=2;i<=n;i++)
        res*=i;
    return res;
}

int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    c=fact(n)/fact(m)/fact(n-m);
    printf("result = %.lf\n",c);
    return 0;
}