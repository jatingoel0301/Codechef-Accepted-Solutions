#include <iostream>
#include<algorithm>
#include<map>
using namespace std;
 
int main() {
	long long N,L,R,ans;
	cin>>N>>L>>R;
	long long* arr=new long long[N];
	for(long long i=0;i<N;i++)
	{ cin>>arr[i];
	}
	sort(arr,arr+N);
   
    multimap<long long,long long> M;
	long long sum=arr[N-2]+arr[N-1]-1;
	if(sum<L)
	{cout<<"0";
	}
	else if(sum==L)
	{ cout<<"1";
	}
	else
    { for(long long i=1;i<=N-1;i++)
      {   M.insert(pair<long long,long long>(arr[i]-arr[i-1]+1, arr[i]+arr[i-1]-1));
      }
   
     if((M.begin()->first)>R)
        { cout<<"0";
        }
      else if((M.begin()->first)==R)
        {cout<<"1";
        }
        else
       { long long mark=L;
         int flag=1;
         ans=0;

         for(multimap<long long,long long>::iterator i = M.begin(); i != M.end(); i++)
        { if(((i->first)<L&&(i->second)<L)||((i->first)>R&&(i->second)>R))
            { continue;
            }
         if((i->first)<=mark&&(i->second)>=mark&&flag==1)
         { flag=0;
           if((i->second)>=R)
                { ans=R-mark+1;
                  cout<<ans;
                  return 0;
                }
                ans=(i->second)-mark+1;
                mark=(i->second);
          }
         if((i->first)<=mark&&(i->second)>=mark&&flag==0)  
          {   if((i->second)>=R)
                { ans=ans+R-mark;
                  cout<<ans;
                  return 0;
                }
                ans=ans+(i->second)-mark;
                mark=(i->second);
          }
          if((i->first)>mark&&(i->second)>mark)  
          {  flag=0;
              if((i->second)>=R)
                { ans=ans+R-(i->first)+1;
                  cout<<ans;
                  return 0;
                }
                ans=ans+(i->second)-(i->first)+1;
                mark=(i->second);
          }
        }
      	cout<<ans;
       }
     }
	return 0;
}