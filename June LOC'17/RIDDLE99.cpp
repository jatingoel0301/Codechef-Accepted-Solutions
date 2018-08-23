#include <iostream>
using namespace std;
 
int main() {
	long long T,count,A1,B1,x,y;
	cin>>T;
	long long* A = new long long[T];
	long long* B = new long long[T];
	long long* M = new long long[T];
	for(long long i=0;i<T;i++)
	{ cin>>A[i]>>B[i]>>M[i];
	}
	for(long long i=0;i<T;i++)
	 { 
	   x=A[i]%M[i];
	   if(x==0)
	 {  A1=A[i];
	 } 
	   else
	   { A1=A[i]+M[i]-x;
	     if(A1>B[i])
	     { cout<<"0\n";
	       continue;
	     }
	   }
	   count=1;
	   y=B[i]%M[i];
	   B1=B[i]-y;
	   count+=(B1-A1)/M[i];
	   cout<<count<<"\n";
	 }
	return 0;
}