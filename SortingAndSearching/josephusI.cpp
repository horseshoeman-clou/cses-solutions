#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n;
cin>>n;

queue<long long> q;
for(int i=1;i<=n;i++)
q.push(i);

while(!q.empty()){
long long x=q.front();q.pop();
q.push(x);

long long y=q.front(); q.pop();
cout<<y<<" ";
}
}
