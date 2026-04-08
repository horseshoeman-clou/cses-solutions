#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n;
cin>>n;

vector<long long> pos(n+1);

for(int i=1;i<=n;i++){
int x;
cin>>x;
pos[x]=i;
}

int round=1;

for(int i=2;i<=n;i++){
if(pos[i]<pos[i-1])
round++;
}

cout<<round<<"\n";

return 0;
}
