#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,m;
cin>>n>>m;

vector<int> x(n+1);
for(int i=1;i<=n;i++) cin>>x[i];

vector<vector<long long>> dp(n+1, vector<long long>(m+1));

long long MOD = 1e9+7;

if(x[1] != 0){
dp[1][x[1]]=1;
}
else{
for(int v=1;v<=m;v++)
dp[1][v]=1;
}

for(int i=2;i<=n;i++){
for(int v=1;v<=m;v++){
if(x[i] != 0 && v != x[i]){
dp[i][v] = 0;
continue;
}
if(v<m){
dp[i][v] =(dp[i-1][v-1]+dp[i-1][v]+dp[i-1][v+1])%MOD;
}
else{
dp[i][v] = (dp[i-1][v-1]+dp[i-1][v])%MOD;
}
}
}

long long ans=0;

for(int v=1;v<=m;v++){
ans+=dp[n][v];
}

cout<<ans%MOD<<'\n';
}

