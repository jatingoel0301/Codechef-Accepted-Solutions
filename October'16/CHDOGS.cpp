#include<iostream>
using namespace std;
#include<iomanip>
int main()
{ 
  int T;
  cin>>T;
  double s[100],v[100];
  for(int z=0;z<T;z++)
  { cin>>s[z]>>v[z];
  }
  for(int i=0;i<T;i++)
  { double a= (2*s[i])/(3*v[i]);
   cout.precision(6);
   cout<<fixed<<a<<"\n";
  }
}
