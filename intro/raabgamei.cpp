#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;

while(t--){

int n,a,b;

cin>>n>>a>>b;

if(a+b>n || a>n/2 || b>n/2)
{
cout<<"NO\n";
continue;
}

cout<<"YES\n";

vector<int> A,B;

int high=n, low=1;

for(int i=0;i<a;i++){
A.push_back(high);
B.push_back(low);

high--;
low++;
}

for(int i=0;i<b;i++){
A.push_back(low);
B.push_back(high);

high--;
low++;
}

while((int)A.size() <n){
A.push_back(low);
B.push_back(low);
low++;
}

for(int x:A) cout<<x<<" ";

cout<<"\n";

for(int x:B) cout<<x<<" ";

cout<<"\n";

}

return 0;
}

