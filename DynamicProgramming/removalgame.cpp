#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;

long long total_sum=0;

vector<long long> arr(n+1);
for(int i=1;i<=n;i++){
cin>>arr[i];
total_sum+=arr[i];
}

vector<vector<long long>> dp(n+1, vector<long long>(n+1));

for(int i=1;i<=n;i++)
dp[i][i] = arr[i];

for(int len=2;len<=n;len++){
for(int l=1;l+len-1<=n;l++){

int r=l+len-1;

dp[l][r] = max(arr[l]-dp[l+1][r], arr[r]-dp[l][r-1]);

}
}

long long score1=(total_sum+dp[1][n])/2;

cout<<score1<<'\n';

}

