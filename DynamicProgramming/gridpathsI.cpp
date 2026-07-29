#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;

vector dp(n+1,vector<long long>(n+1));
dp[1][1]=1;

long long MOD=1e9+7;

vector grid(n+1,vector<char>(n+1));
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
cin>>grid[i][j];
}
}

for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){

if(i==1 && j==1 && grid[i][j]!='*')
continue;

if(grid[i][j]=='*'){
dp[i][j]=0;
}
else{
dp[i][j] = (dp[i-1][j] + dp[i][j-1])%MOD;
}
}
}

cout<<dp[n][n]<<'\n';
}
