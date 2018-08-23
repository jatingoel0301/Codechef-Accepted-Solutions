#include <iostream>
using namespace std;

int main() {
	int T,N,arr[500][500];
	long long count,index;
	cin>>T;
	while(T--)
	{ cin>>N;
	  count=0;
	  index=-1;
	   for(int i=0;i<N;i++)
	   for(int j=0;j<N;j++)
	   { cin>>arr[i][j];
	     if(arr[i][j]==1)
	     { count++;
	     }
	   }
	   if(count==0)
	   { cout<<"0"<<"\n";
	   }
	   else if(count==(N*N))
	   { cout<<N-1<<"\n";
	   }
	   else
	   { while(count>0)
	     { index++;
	       if(index==0)
	       count=count-N;
	       else
	       count=count-(2*(N-index));
	     }
	     cout<<index<<"\n";
	   }
    }
	return 0;
}