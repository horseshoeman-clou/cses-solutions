#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,a,b;
cin>>n>>a>>b;

vector<long long> x(n);
for(int i=0;i<n;i++) cin>>x[i];

vector<long long> prefix(n+1,0);

for(int i=0;i<n;i++)
prefix[i+1]=prefix[i]+x[i];

multiset<long long> window;

long long answer=LLONG_MIN;

for(int r=a;r<=n;r++){
window.insert(prefix[r-a]);

if(r-b-1>=0){
window.erase(window.find(prefix[r-b-1]));
}

answer=max(answer,prefix[r]-*window.begin());
}


cout<<answer<<'\n';
}
