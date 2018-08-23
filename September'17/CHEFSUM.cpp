#include <iostream>
#include<limits.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    long long N;
    while(T--)
    { cin>>N;
      long long arr[N+1];
      long long min=INT_MAX;
      long long index=-1;
      for(int i=1;i<=N;i++)
      {  cin>>arr[i];
         if(arr[i]<min)
          { min=arr[i];
            index=i;
          }
      }
      cout<<index<<"\n";
    }

	
	return 0;
}
