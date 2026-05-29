#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
long long int n;
cin>>n;
vector<long long> arr(n);

for(int i=0;i<n;i++)
{
cin>>arr[i];
}

long long int count=0;
for(long long int i=0;i+1<n;i++)
{
if(arr[i]>arr[i+1])
{
long long int op=arr[i]-arr[i+1];
count=count+op;
arr[i+1]=arr[i+1]+op;
}
}


cout<<count;

return 0;
}


