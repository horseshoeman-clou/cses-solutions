#include<bits/stdc++.h>
using namespace std;

int main(){

int n,m;
cin>>n>>m;

int MAX = 500;

vector<vector<int>> dp(MAX+1, vector<int> (MAX+1));

for(int i=1;i<=MAX;i++){
for(int j=1;j<=MAX;j++){
if( i == j)
dp[i][j] = 0;
else{
dp[i][j]=n*m;
for(int k=1;k<i;k++){
dp[i][j] = min(dp[i][j], dp[k][j] + dp[i-k][j]+1);
}
for(int k=1;k<j;k++){
dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j-k]+1);
}
}

}
}

cout<<dp[n][m]<<'\n';
}
