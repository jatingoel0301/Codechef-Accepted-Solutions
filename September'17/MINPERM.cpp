#include <iostream>
using namespace std;
int* minperm(int* ans,int N)
{      if(N==0)
       return ans;
       ans[N-1]=N;
       ans[N]=N-1;
       minperm(ans,N-2);
}

int main() {
    int T;
    cin>>T;
    int N;
    int* ans;
    while(T--)
    { cin>>N;
      int arr[N+1]={0};
      if(N%2==0)
      ans=minperm(arr,N);
      else
     { ans=minperm(arr,N-1);
       ans[N]=ans[N-1];
       ans[N-1]=N;
     }
     for(int i=1;i<=N;i++)
     cout<<ans[i]<<" ";
     cout<<"\n";
    }
    
	
	return 0;
}
