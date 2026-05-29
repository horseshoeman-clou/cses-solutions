#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>>t;

while(t--){

int n,x,y;
cin>>n>>x>>y;

if(x+y>n || (n-x-y)%2!=0){
cout<<"NO\n";
continue;
}

cout<<"YES\n";

vector<int> p,q;
int cur=1;

for(int i=0;i<x;i++){
p.push_back(cur+1);
q.push_back(cur);
cur+=2;
}

for(int i=0;i<y;i++){
p.push_back(cur);
q.push_back(cur+1);
cur+=2;
}

while((int)p.size()<n){
p.push_back(cur);
q.push_back(cur);
cur++;
}

for(int v:p)cout<<v<<" ";
cout<<"\n";
for(int v:q)cout<<v<<" ";
cout<<"\n";
}
}
