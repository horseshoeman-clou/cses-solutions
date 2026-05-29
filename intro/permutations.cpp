#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long int n,i;
cin>>n;

if(n<4&&n!=1){
cout<<"NO SOLUTION";
exit(0);
}

for(i=1;i<n+1;i++)
{
if(i%2==0)
{
cout<<i<<" ";
}
}

for(i=1;i<n+1;i++)
{
if(i%2==1)
cout<<i<<" ";

}

return 0;
}
