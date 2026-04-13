#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long t;
cin>>t;

for(long long i=0;i<t;i++){
long long x,y;
cin>>x>>y;

long long mx=max(x,y);
long long base=(mx-1)*(mx-1);
if(mx%2==0){
if (y==mx)
cout << base+x << endl;

else
cout << base+2*mx-y << endl;


}
else
{
if (x==mx)
cout << base + y<<endl;
else
cout << base+2*mx - x  << endl;
}
  }
  return (0);
}
