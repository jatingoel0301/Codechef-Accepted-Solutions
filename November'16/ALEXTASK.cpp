#include<iostream>
using namespace std;
long long gcd(long long a, long long b)
{
    if (a == 0)
	return b;
    return gcd(b%a, a);
}
int main()
{  long long T;
   cin>>T;
   while(T--)
 { long long n;
   cin>>n;
   long long *arr=new long long[n];
   for(long long i=0;i<n;i++)
   cin>>arr[i];
   long long b=((arr[0]*arr[1])/(gcd(arr[0],arr[1])));
   for(long long j=0;j<n;j++)
  { for(long long k=j+1;k<n;k++)
      { long long a=(arr[j]*arr[k])/(gcd(arr[j],arr[k]));
          if(a<b)
          b=a;
        
      }
  }    
  delete arr;
  cout<<b<<"\n";
  }
}