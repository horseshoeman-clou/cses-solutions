#include<bits/stdc++.h>
using namespace std;

pair<int,int> better(pair<int,int>& a, pair<int,int>& b){

if(a.first != b.first) return a.first < b.first ? a:b;
return a.second>=b.second ? a:b;
}

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
long long x;
cin>>n>>x;

vector<long long> w(n);
for(int i=0;i<n;i++) cin>>w[i];

vector<pair<int,int>> dp(1<<n);

for(pair<int,int>& d : dp){
d.first = INT_MAX;
d.second = -1;
}

dp[0] = {0,0};
pair<int,int> candidate;

for(int mask=0;mask<=(1<<n)-1;mask++){
for(int i=0;i<n;i++){

if(!(mask & (1<<i))){

int target = mask | (1<<i);

pair<int,int> OptionB = {dp[mask].first+1,x-w[i]};

if(w[i]<=dp[mask].second){

pair<int,int> OptionA = {dp[mask].first, dp[mask].second-w[i]};
candidate = better(OptionA, OptionB);
}
else{
candidate = OptionB;
}

dp[target] = better(dp[target], candidate);

}
}

}

cout<<dp[(1<<n)-1].first<<'\n';

}



