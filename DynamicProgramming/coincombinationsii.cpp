#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,x;
cin>>n>>x;

vector<int> coins(n);
for(int i=0;i<n;i++) cin>>coins[i];

vector<long long> dp(x+1);
dp[0]=1;

long long MOD=1e9+7;

for(int coin : coins){
for(int i=coin; i<=x;i++){

dp[i]=(dp[i]+dp[i-coin])%MOD;
}
}

cout<< dp[x]<<'\n';

}
