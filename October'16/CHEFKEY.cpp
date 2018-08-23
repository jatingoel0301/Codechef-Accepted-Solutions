#include<iostream>
using namespace std;
int main()
{ 
  int T;
  cin>>T;
  int n[100],m[100],c[100];
  for(int z=0;z<T;z++)
  cin>>n[z]>>m[z]>>c[z];
  
  for(int i=0;i<T;i++)
  {   int a;
      int b;
      if(n[i]<m[i])
      { a=n[i];
        b=m[i];
      }
      else
      { a=m[i];
        b=n[i];
      }
  int ctr=0;
  for(int l=1;l<=a;l++)
  { if((c[i]%l)!=0)
  continue;
  if((c[i]/l)<=b)
  ctr++;
 } 
  cout<<ctr<<"\n";
 }
}
