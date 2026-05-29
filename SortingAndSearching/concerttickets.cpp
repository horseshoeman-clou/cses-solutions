#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n,m;
cin>>n>>m;

multiset<long long > tickets;

for(int i=0;i<n;i++){
long long x;
cin>>x;
tickets.insert(x);
}

for(int i=0;i<m;i++){
long long t;
cin>>t;

auto it=tickets.upper_bound(t);

if(it==tickets.begin()){
cout<<-1<<"\n";
}
else{
--it;
cout<<*it<<"\n";
tickets.erase(it);
}
}
return 0;
}
