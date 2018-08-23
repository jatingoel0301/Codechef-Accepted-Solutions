#include <iostream>
using namespace std;

int main() {
	int T,N,M;
	cin>>T;
	while(T--)
	{  char res[1001][1001]={0};
	   int flag=1;
	   cin>>N>>M;
	   for(int i=1;i<=N;i++)
	   for(int j=1;j<=M;j++)
	   cin>>res[i][j];
	   for(int i=1;i<=N;i++)
	  {
	  for(int j=1;j<=M;j++)
	   { if((res[i][j]=='A')&&((res[i][j-1]=='W')||(res[i][j+1]=='W')))
	     {cout<<"no\n";
	     flag=0;
	     break;
	     }
	     if((res[i][j]=='W')&&((res[i][j-1]=='A')||(res[i][j+1]=='A')||(res[i][j-1]==0)||(res[i][j+1]==0)||(res[i+1][j]=='A')||(res[i+1][j]==0)))
	     {cout<<"no\n";
	     flag=0;
	     break;
	     }
         if((res[i][j]=='B')&&((res[i+1][j]=='A')||(res[i+1][j]=='W')))
	     {cout<<"no\n";
	     flag=0;
	     break;
	     }
	   }
	if(flag==0)
	break;
   }
	if(flag==1)
	cout<<"yes\n";
	}	
	return 0;
}