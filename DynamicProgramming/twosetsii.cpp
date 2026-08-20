#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long MOD = 1e9+7;

int n;
cin>>n;

int total_sum=0;

for(int i=1;i<=n;i++)
total_sum+=i;

if(total_sum%2!=0){
cout<<0<<'\n';
return 0;
}

vector<vector<long long>> dp(n+1, vector<long long>((total_sum/2)+1));
dp[0][0]=1;

for(int i=1;i<=n;i++){
for(int s=1;s<=total_sum/2;s++){

if(s-i >=0)
dp[i][s] = (dp[i-1][s]+dp[i-1][s-i])%MOD;
else
dp[i][s] = (dp[i-1][s])%MOD;
}
}

cout<<dp[n][total_sum/2]%MOD<<'\n';

}
