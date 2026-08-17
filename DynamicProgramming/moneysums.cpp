#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;
int max_sum = 0;


vector<int> coins(n);
for(int i=0;i<n;i++){
cin>>coins[i];
max_sum+=coins[i];
}

vector<bool> dp(max_sum, 0);
dp[0]=true;

for(int x : coins){
for(int s=max_sum-x; s>=0;s--){

if(dp[s]){
dp[s+x] = true;
}
}
}

vector<int> sum;

for(int s=1;s<=max_sum;s++){
if(dp[s]){
sum.push_back(s);
}
}

cout<<sum.size()<<'\n';

for(int s : sum)
cout<<s<<' ';
cout<<'\n';

}
