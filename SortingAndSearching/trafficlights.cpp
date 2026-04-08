#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long x,n;
cin>>x>>n;

set<int> pos;
multiset<int> lenghts;

pos.insert(0);
pos.insert(x);

lenghts.insert(x);

for(int i=0;i<n;i++){
int p;
cin>>p;

auto it=pos.upper_bound(p);
int right=*it;
int left=*prev(it);

lenghts.erase(lenghts.find(right-left));

lenghts.insert(p-left);
lenghts.insert(right-p);

pos.insert(p);
cout<<*lenghts.rbegin()<<" ";
}
return 0;
}
