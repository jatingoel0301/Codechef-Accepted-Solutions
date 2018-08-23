#include <iostream>
#include<algorithm>
using namespace std;
int main() 
{   int T;
	cin>>T;
	while(T--)
	{ long long o1,o2,cz=0,co=0,mycount,gc,go,ans=0,N,n,flag=1;
	  cin>>o1>>o2;
	  n=o1*o2;
	  int* arr=new int[n];
	  for(long long i=0;i<n;i++)
	  { cin>>arr[i];
	    if(arr[i]==0)
	    cz++;
	    else
	    co++;
	  }
	  N=((o1/2)+1)*((o2/2)+1);
      if(cz<N)
      { cout<<"1\n";
        continue;
      }
      if(co<N)
      { cout<<"0\n";
        continue;
      }
    for(long long i=0;i<o2;i++)
	{   gc=go=0;
	    for(long long j=0;j<o1;j++)
	{   if((i*j)>=100000)
	    { flag=0;
	      break;
	    }
	    if(j==(o1-1))
	    { mycount=count(arr,arr+i,1)+count(arr+i+(j*o2),arr+n,1);
	    }
	    else
	   { mycount=count(arr+i+(j*o2),arr+i+((j+1)*o2),1);
	   }
	    if(mycount>=((o2/2)+1))
	    { gc++;
	      if(gc==((o1/2)+1))
	      { ans=1;
	        break;
	      }
	    }
	    else
	    { go++;
	      if(go==((o1/2)+1))
	      { break;
	      }
	    }
	}
	if(ans==1)
	{ break;
	}
    if(flag==0)
	{ break;
	}
	}
	cout<<ans<<"\n";
}
	return 0;
} 