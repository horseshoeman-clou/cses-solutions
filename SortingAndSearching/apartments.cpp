#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n,m,k;
cin>>n>>m>>k;
int count=0;

vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];

vector<int> b(m);
for(int i=0;i<m;i++) cin>>b[i];

sort(a.begin(),a.end());
sort(b.begin(),b.end());

int i=0,j=0;
while(i<n && j<m){
if(abs(a[i]-b[j])<=k){
count++;
i++;
j++;
}
else if(a[i]<b[j]-k)
i++;
else
j++;

}

cout<<count<<"\n";

return 0;

}
