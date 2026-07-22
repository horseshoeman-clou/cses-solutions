#include<bits/stdc++.h>
using namespace std;

int minimizeCoins(vector<int> coins,int x){

int INF=INT_MAX;
vector<long long> dp(x+1,INF);
dp[0]=0;

for(int i=1;i<=x;i++){

for(int coin : coins){

if(coin <=i){

dp[i]=min(dp[i],dp[i-coin]+1);
}
}
}

return dp[x] == INF ? -1 : dp[x];
}



int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,x;
cin>>n>>x;

vector<int> coins(n);

for(int i=0;i<n;i++) cin>>coins[i];

int ans= minimizeCoins(coins,x);

cout<<ans<<'\n';

}
