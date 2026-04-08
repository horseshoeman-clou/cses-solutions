#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

int q;
cin>>q;

while(q--){

long long k;
cin>>k;

long long len=1;
long long cnt=9;

while(k>len*cnt){
k-=len*cnt;
len++;
cnt*=10;
}

long long start=1;
for(int i=1;i<len;i++)
start*=10;

long long index=(k-1)/len;

long long number=start+index;

int digit_index=(k-1)%len;

string s=to_string(number);

cout<<s[digit_index]<<"\n";
}
return 0;
}
