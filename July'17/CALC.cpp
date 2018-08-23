#include <iostream>
using namespace std;

int main() {
	long long T,N,B,copy,count,y;
	cin>>T;
	while(T--)
	{ cin>>N>>B;
	  if(B>=N)
	  { cout<<"0"<<"\n";
	    continue;
      }
	  y=0;
	  copy=N/B;
	  if(copy==1)
	  count=copy;
	  else if(copy%2==0)
	  count=copy/2;
	  else
	  { count=copy/2;
	    y=count+1;
	  }
	  if(y==0)
	  cout<<count*(N-(count*B))<<"\n";
	  else
	  cout<<max(count*(N-(count*B)),y*(N-(y*B)))<<"\n";
	}
	return 0;
}
