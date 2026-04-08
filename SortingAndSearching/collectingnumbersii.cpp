#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n,m;
cin>>n>>m;

vector<long long> a(n+1),pos(n+1);

for(int i=1;i<=n;i++){
cin>>a[i];
pos[a[i]]=i;
}

long long rounds=1;

for(int i=2;i<=n;i++){
if(pos[i]<pos[i-1])
rounds++;
}

while(m--){
long long x,y;
cin>>x>>y;

long long v1=a[x];
long long v2=a[y];

set<long long> affected={v1,v1+1,v2,v2+1};

for(int v:affected){
if(v>1 &&v<=n)
if(pos[v]<pos[v-1])
rounds--;
}

swap(a[x],a[y]);
swap(pos[v1],pos[v2]);

for(int v:affected){
if(v>1 &&v<=n)
if(pos[v]<pos[v-1])
rounds++;
}
cout<<rounds<<"\n";
}
return 0;
}
