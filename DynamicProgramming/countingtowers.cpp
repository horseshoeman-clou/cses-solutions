#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long MOD=1e9+7;
long long MAX=1e6+5;

vector<long long> solid(MAX),broken(MAX);
solid[1]=broken[1]=1;

for(int i=2;i<MAX;i++){

solid[i]=(solid[i-1]*2+broken[i-1])%MOD;
broken[i]=(solid[i-1]+4*broken[i-1])%MOD;
}

int t;
cin>>t;

while(t--){

int n;
cin>>n;
cout<<(solid[n]+broken[n])%MOD<<'\n';
}

}

