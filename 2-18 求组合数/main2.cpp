#include <stdio.h>
#include <string.h>

const int N = 105;

int main(){
    int m,n;
    scanf("%d%d",&m,&n);

    int f[N][N];
    memset(f,0,sizeof(f));
    f[0][0]=1;
    for (int i=1;i<=n;i++){
        f[i][0]=1;
        for (int j=1;j<=i;j++)
            f[i][j]=f[i-1][j]+f[i-1][j-1];
    }
    printf("result = %d\n",f[n][m]);

    return 0;
}