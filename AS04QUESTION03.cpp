#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int price[n+1];
    for(int i=1;i<=n;i++)
        cin>>price[i];
    int dp[n+1]={0};
    for(int i=1;i<=n;i++)
        for(int j=i;j<=n;j++)
            dp[j]=max(dp[j],dp[j-i]+price[i]);
    cout<<dp[n]<<endl;
}
