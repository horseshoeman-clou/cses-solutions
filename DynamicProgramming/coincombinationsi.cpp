#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,x;
cin>>n>>x;

long long MOD =1e9+7;

vector<int> coins(n);
for(int i=0;i<n;i++) cin>>coins[i];

vector<long long> dp(x+1);
dp[0]=1;

for(int i=1;i<=x;i++){
for(int k=0;k<n;k++){

if(i-coins[k]>=0){

dp[i]=(dp[i]+dp[i-coins[k]])%MOD;
}
}
}

cout<<dp[x]<<'\n';
}
