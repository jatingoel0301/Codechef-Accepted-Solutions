#include <iostream>
#include<algorithm>
using namespace std;
int main() {
 long long T,N,flag;
 cin>>T;
 while(T--)
 { flag=1;
   cin>>N;
   long long* arr=new long long[N];
   cin>>arr[0];
   for(long long i=1;i<N;i++)
   { cin>>arr[i];
   }
   sort(arr,arr+N);
   if((arr[1]-arr[0])!=1)
   cout<<arr[0]<<"\n";
   else if((arr[N-1]-arr[N-2])!=1)
   cout<<arr[N-1]<<"\n";
   else
   for(long long i=2;i<N-1;i++)
   { if(arr[i]==arr[i-1])
     { cout<<arr[i]<<"\n";
       break;
     }
   } 
 }
	return 0;
}