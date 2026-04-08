#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n;
cin>>n;

vector<pair<long long,long long>>movies(n);
for(int i=0;i<n;i++) cin>>movies[i].first>>movies[i].second;

sort(movies.begin(),movies.end(),
[](auto &a,auto &b){
return a.second<b.second;
});

long long end_time=0;
int count=0;

for(auto &m: movies){
if(m.first>=end_time){
count++;
end_time=m.second;
}
}
cout<<count<<"\n";
return 0;
}
