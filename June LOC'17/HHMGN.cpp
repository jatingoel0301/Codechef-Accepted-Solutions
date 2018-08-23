#include<map>
#include <iostream>
using namespace std;

int main() {
    long long T,N,S,A;
    double R;
    cin>>T;
    while(T--)
    { cin>>N>>S;
      map<long long,long long> mymap;
      for(long long i=0;i<N;i++)
      { cin>>A;
        mymap[A]++;
      }
     map<long long,long long>::iterator it=mymap.begin();
      while(it!=mymap.end())
      {  R=(double)S/N;
         if(it->first==R)
        { cout<<it->first<<"\n";
          break;
         }
         else if(it->first>R)
        { cout<<"-1"<<"\n";
           break;
        }
           else
        { while(it->first<R&&it!=mymap.end())
          { S=S-(it->first*it->second);
            N=N-it->second;
            it++;
          }
        }
      }
      if(it==mymap.end())
      cout<<"-1"<<"\n";
    }
    
	return 0;
}
