#include<stdio.h>
 
int main()
{
    double x;
    scanf("%lf",&x);
    double temp=1.0,sum=1.0;
    int i=1;
    for (i=1;;i++){
        temp=(temp*x)/i; 
        sum+=temp;
        if(temp<0.00001)break;
    }
    printf("%.4lf",sum);
    return 0;
}
