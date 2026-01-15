#include<bits/stdc++.h>
using namespace std;

void hanoi(int n, int src, int aux, int dest)
{
if(n==0) return ;

hanoi(n-1,src,dest,aux);

cout<<src<<" "<<dest<<"\n";

hanoi(n-1,aux,src,dest);
}

int main(){

ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;

int moves=(1<<n)-1;
cout<<moves<<"\n";

hanoi(n,1,2,3);

return 0;
}
