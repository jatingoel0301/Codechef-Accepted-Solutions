#include <cmath>
#include <iostream>
using namespace std;

int main() 
{
	long long T,N,D;
	cin>>T;
	while(T--)
	{ cin>>N>>D;
	  long long arr[N];
	  long long sum[D]={0};
	  long long num[D]={0};
	  long long sumA=0;
	  for(long long k=0;k<N;k++)
	{  cin>>arr[k];
	   sum[k%D]+=arr[k];
	   sumA+=arr[k];
	   num[k%D]++;
	}
	double Av=(double)sumA/N;
	if(floor(Av)!=Av)
	{ cout<<"-1\n";
	  continue;
    }
    int flag=0;
    for(int i=0;i<D;i++)
    {   if(Av!=(double)sum[i]/num[i])
      { cout<<"-1\n";
        flag=1;
        break;
      }
    }
    if(flag==1)
   { continue;
    }
    long long op=0;
    for(int i=0;i<D;i++)
    {   int j=i;
        while(j+D<N)
       { arr[j+D]+=arr[j]-Av;
         op+=abs(arr[j]-Av);
          j=j+D;
       }
    }
    cout<<op<<"\n";
	  }
	return 0;
}