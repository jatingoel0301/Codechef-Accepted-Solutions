#include <iostream>
using namespace std;

int main() {
	long long T;
	cin>>T;
	while(T--)
	{ long long N,M;
	  cin>>N>>M;
	  long long MinSal[N+1];
	  long long OffSal[M+1];
	  long long MaxJob[M+1];
	  char Qual[N+1][M+1];
	  for(long long i=1;i<=N;i++)
	   cin>>MinSal[i];

	   for(long long i=1;i<=M;i++)
	   cin>>OffSal[i]>>MaxJob[i];
	    for(long long i=1;i<=N;i++)
	   cin>>Qual[i];
	   long long sum=0;
	   long long GotJob=0;
	   long long NoComp=M;
	   long long best_off;
	   long long mark;
	   int flag[M+1]={0};
	   for(long long i=1;i<=N;i++)
	  { best_off=0;
	    mark=-1;
	     for(long long j=1;j<=M;j++)
	   { if(Qual[i][j-1]=='1')
	     {  
	         if(OffSal[j]>MinSal[i]&&MaxJob[j]>0&&OffSal[j]>best_off)
	        {   best_off=OffSal[j];
	            mark=j;
	        }
	       } 
	   }
	   if(best_off!=0)
	   { sum+=best_off;
	     MaxJob[mark]--;
	     GotJob++;
	     if(flag[mark]==0)
	     { flag[mark]=1;
	       NoComp--;
	     }
	  }
   }
   cout<<GotJob<<" "<<sum<<" "<<NoComp<<"\n";
	   
	   
	}
	return 0;
}
