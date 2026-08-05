#include<bits/stdc++.h>
using namespace std;

int main(){

int n,m;
cin>>n>>m;

vector<long long> a(n+1), b(m+1);

for(int i=1;i<=n;i++) cin>>a[i];
for(int j=1;j<=m;j++) cin>>b[j];

vector<vector<long long>> dp(n+1, vector<long long> (m+1));
vector<long long> lcs;


for(int i=1;i<=n;i++){
for(int j=1;j<=m;j++){

if(a[i] == b[j]){
dp[i][j]=dp[i-1][j-1]+1;
}
else{
dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
}
}
}

int i=n, j=m;
while(i>0 && j>0){

if(a[i] == b[j]){
lcs.push_back(a[i]);
i--;
j--;
}
else if(dp[i-1][j]>dp[i][j-1]){
i--;
}
else{
j--;
}
}


reverse(lcs.begin(), lcs.end());

cout<<dp[n][m]<<'\n';

for(long long t : lcs)
cout<<t<<' ';
cout<<'\n';

}


