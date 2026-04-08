#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n;
cin>>n;

multiset<long long>towers;

for(int i=0;i<n;i++){
int x;
cin>>x;

auto it=towers.upper_bound(x);

if(it!=towers.end()){
towers.erase(it);
}

towers.insert(x);
}
 cout<<towers.size()<<"\n";
return 0;
}
