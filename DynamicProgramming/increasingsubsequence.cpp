#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;

vector<long long> x(n+1);
for(int i=1;i<=n;i++) cin>>x[i];

vector<long long> tails;

for(int i=1;i<=n;i++){

auto pos = lower_bound(tails.begin(), tails.end(), x[i]);

if(pos == tails.end()){
tails.push_back(x[i]);
}
else{
*pos = x[i];
}

}

cout<<tails.size()<<'\n';

}
