#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;

for( int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
int x=abs(i-0);
int y=abs(j-0);

if(x<y) swap(x,y);

int ans;

if(x== 0 && y==0) ans=0;
else if (x==0 && y==1) ans=3;
else if (x==0 && y==2) ans=2;
else if (x==1 && y==0) ans=3;
else if(x==1 && y==1) ans=2;
else if(x==2 && y==0) ans=2;
else if(x==2 && y==2) ans=4;

else
{
int d=max((x+1)/2,(x+y+2)/3);

if(d%2!=((x+y)%2)) d++;

ans=d;
}
cout<<ans;
if(j+1<n) cout<<" ";
}
cout<<"\n";
}
return 0;
}
