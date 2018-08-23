#include <iostream>
using namespace std;

int main() {
    int T;
    long long N;
    cin>>T;
    while(T--)
    { cin>>N;
      int* arr=new int[N];
      long long sum=0;
     int flag=0; 
      for(int i=0;i<N;i++)
     { cin>>arr[i];
       if(arr[i]==1&&flag==0)
      { continue;
        }
        else
       { flag=1; 
          if(arr[i]==0)
          sum+=1100;
          else
          sum+=100;
       }
     }
       cout<<sum<<"\n";
     }  
	return 0;
}