#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;

int INF=INT_MAX;
int count=0;

vector<long long> dp(n+1,INF);
dp[0]=0;

for(int i=1;i<=n;i++){
int num=i;
while(num>0){
int d=num%10;
dp[i]=min(dp[i],dp[i-d]+1);
num=num/10;
}
}

cout<<dp[n]<<'\n';

}

