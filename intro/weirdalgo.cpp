#include<bits/stdc++.h>

int main()

{
long long int n{};
std::cin>>n;
std::cout<<n<<"\t";

while(n!=1)
{
if(n%2==0)
{
n/=2;
}

else 
{
n= (n*3)+1;
}

std::cout<<n<<"\t";
}


return 0;
}
