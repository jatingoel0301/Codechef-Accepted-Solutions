#include <iostream>
using namespace std;

int main() {
	long long T,N,sum1,sum2;
	cin>>T;
	while(T--)
	{ sum1=0;
	  sum2=0;
	  cin>>N;
	  long long* arr1 = new long long[N];
	  long long* arr2 = new long long[N];
	  for(long long i=0;i<N;i++)
	  { cin>>arr1[i];
	  }
	  for(long long i=0;i<N;i++)
	  { cin>>arr2[i];
	  }
	  for(long long i=0;i<N;i+=2)
	  { sum1+=arr1[i];
	    sum2+=arr2[i];
	  }
	  for(long long i=1;i<N;i+=2)
	  { sum1+=arr2[i];
	    sum2+=arr1[i];
	  }
	  if(sum1<sum2)
	  cout<<sum1<<"\n";
	  else
	  cout<<sum2<<"\n";
	}
	return 0;
}