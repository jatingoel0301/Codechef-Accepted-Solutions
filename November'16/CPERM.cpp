#include <iostream>
using namespace std;
const long long M=1000000007;
long long pow(long long N)
{ if(N==0)
  return 1;
  if(N%2!=0)
  return (2*pow(N/2)*pow(N/2))%M;
  return (pow(N/2)*pow(N/2))%M;
}
int main()
{int T;
long long N;
cin>>T;
while(T--)
{ cin>>N;
  if(N==1)
  cout<<"0"<<"\n";
  else
  cout<<(pow(N-1)-2)<<"\n";
}
}  