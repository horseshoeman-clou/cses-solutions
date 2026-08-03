#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

string n,m;
cin>>n>>m;

int ns=n.size(), ms=m.size();

vector<vector<int>> dp(ns+1,vector<int>(ms+1));

dp[0][0]=0;

for(int i=1;i<=ns;i++)
dp[i][0]=i;

for(int j=1;j<=ms;j++)
dp[0][j]=j;

for(int i=1;i<=ns;i++){
for(int j=1;j<=ms;j++){

if(n[i-1] == m[j-1]){
dp[i][j]=dp[i-1][j-1];
}
else{
dp[i][j] = min({dp[i-1][j-1]+1, dp[i-1][j]+1, dp[i][j-1]+1});
}

}
}

cout<< dp[ns][ms]<<'\n';
}

