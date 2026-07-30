#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,x;
cin>>n>>x;

vector<int> dp(x+1,0);

vector<int> prices(n),pages(n);
for(int i=0;i<n;i++) cin>>prices[i];
for(int i=0;i<n;i++) cin>>pages[i];

for(int i=0;i<n;i++){
for(int j=x;j>=prices[i];j--){

dp[j]=max(dp[j],pages[i]+dp[j-prices[i]]);
}
}

cout<<dp[x]<<'\n';
}

