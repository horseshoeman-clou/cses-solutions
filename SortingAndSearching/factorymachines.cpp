#include<bits/stdc++.h>
using namespace std;

bool works(long long time,vector<long long>&machines, long long target){
long long products=0;

for(long long k: machines){

products+=time/k;

if(products>=target)
return true;
}
return false;
}


int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n,t;
cin>>n>>t;

vector<long long> machines(n);

for(int i=0;i<n;i++) cin>>machines[i];

long long low=1;
long long high=
(*min_element(machines.begin(),machines.end()))*t;


while(low<high){
long long mid=low+(high-low)/2;

if(works(mid,machines,t)){
high=mid;
}
else
low=mid+1;
}

cout<<low<<"\n";
return 0;
}











