#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int N=25e2+10;
int dp[N];
vector<int>a(N);
int lis(int i)
{
    int ans=1;
    if(dp[i]!=-1) return dp[i];
    for(int j=0;j<i;j++)
        if(a[i]>a[j])
            ans=max(ans,lis(j)+1);
    return dp[i]=ans;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ans=0;
    for(int i=0;i<n;i++)
        ans=max(ans,lis(i));
    cout<<ans<<endl;
}