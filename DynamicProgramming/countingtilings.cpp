#include<bits/stdc++.h>
using namespace std;

int n,m;
const long long MOD = 1e9+7;
vector<vector<long long>> dp;

void fillColumn(int j, int row, int incomingMask, int outgoingMask, long long ways){

if(row == n){

dp[j+1][outgoingMask] = (dp[j+1][outgoingMask]+ways) % MOD;
return;
}

if(incomingMask & (1<<row)){

fillColumn(j, row+1, incomingMask, outgoingMask, ways);
return;
}

fillColumn(j, row+1, incomingMask, outgoingMask | (1<<row), ways);

if(row+1 < n && !(incomingMask & (1<<(row+1)))){

fillColumn(j, row+2, incomingMask, outgoingMask, ways);
}
}

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

cin>>n>>m;
dp.assign(m+1, vector<long long> (1<<n, 0));
dp[0][0] = 1;

for(int j=0;j<m;j++){
for(int mask = 0;mask < (1<<n); mask++){

if(dp[j][mask] == 0) continue;
fillColumn(j, 0, mask, 0, dp[j][mask]);
}
}

cout<<dp[m][0]<<'\n';

}
