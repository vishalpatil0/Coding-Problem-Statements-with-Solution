#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long int s,n,m;
    scanf("%ld%ld%ld",&s,&n,&m);
    long int ans=pow(s,n);
    ans%=10;
    ans=pow(ans,m);
    ans%=1000000007;
    printf("%ld",ans);
    return 0;
}