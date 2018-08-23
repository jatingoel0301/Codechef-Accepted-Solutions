#include<math.h>
#include <iostream>
using namespace std;
char kth(long long, long long);
char kthaux(long long);
char kthaux(long long k)
{ double x = log2(k);
  long long n = floor(x);
  if(x==n)
 { return 'a';
 }
  else
  { long long testaux = pow(2,n);
    return kth(k-testaux,n);
  }
}
char kth(long long diff,long long n)
{ long long test=pow(2,n-1);
  if(diff==test)
  return 'c';
  else if(diff>test)
  return kth(diff-test,n-1);
  else 
  return kthaux(diff);
}
  
  int main() {
	int T;
	cin>>T;
	long long* arr = new long long[T];
	for(int i=0;i<T;i++)
	cin>>arr[i];
	for(int i=0;i<T;i++)
	cout<<kthaux(arr[i])<<"\n";
	return 0;
}
