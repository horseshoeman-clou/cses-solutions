#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n,x;
cin>>n>>x;

vector<pair<long long,int>> values(n);
for(int i=0;i<n;i++){
cin>>values[i].first;
values[i].second=i+1;
}

sort(values.begin(),values.end());

for(int i=0;i<n;i++){

long long target=x-values[i].first;

int l=i+1;
int r=n-1;

while(l<r){
long long sum=values[l].first+values[r].first;

if(sum==target){
cout<<values[i].second<<" "<<values[l].second<<" "<<values[r].second<<"\n";

return 0;
}

if(sum<target)
l++;
else
r--;

}
}

cout<<"IMPOSSIBLE\n";
return 0;
}



