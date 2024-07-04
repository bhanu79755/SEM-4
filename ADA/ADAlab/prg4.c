#include<stdio.h>
#define INF 999
int prim(int[10][10],int n,int s)
{
    int v[10],i,j,sum=0,ver[10],d[10],min,u;
    for(i=1;i<=n;i++)
    {
        ver[i]=s;
        d[i]=c[s][i];
        v[i]=0;
    }
    v[s]=1;;
    for(i=1;i<=n-1;i++)
    {
        min=INF;
        for(j=1;j<=n;j++)
        if(v[j]==0&&d[j]<min)
        {
            min=d[j];
            u=j;
        }
        v[u]=1;
        sum=sum+d[u];
        printf("\n%d->%d sum=%d",ver[u],u,sum);
        for(j=1;j<=n;j++)
        if (v[i]==0&& c[u][j]<d[j])
        {
            d[j]=c[u][j];
            ver[j]=0;
        }
        }
        return sum;
}