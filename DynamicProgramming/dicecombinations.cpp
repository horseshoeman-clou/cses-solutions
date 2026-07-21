#include<bits/stdc++.h>
using namespace std;

long long MOD=1e9+7;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;

vector<long long> dp(n+1);
dp[0] = 1;

for(int i=1;i<=n;i++){
for(int k=1;k<=6 && i-k >=0;k++){
dp[i]=(dp[i]+dp[i-k])%MOD;
}
}

cout<<dp[n]<<'\n';

}


