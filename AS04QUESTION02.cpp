#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)
        cin>>a[i];
    int dp[n+1]={0};
    dp[0]=1;
    for(int i=0;i<m;i++)
        for(int j=a[i];j<=n;j++)
            dp[j]+=dp[j-a[i]];
    cout<<dp[n]<<endl;
}
