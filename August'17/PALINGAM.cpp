#include<string>
#include <iostream>
using namespace std;
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{  string s,t;
	   int arrs[26]={0};
	   int arrt[26]={0};
	   int arrsc[26]={0};
	   cin>>s>>t;
	   for(int i=0;i<s.length();i++)
	   { arrs[s[i]-97]++;
	     arrsc[s[i]-97]++;
	   }
	    for(int i=0;i<t.length();i++)
	   {  arrt[t[i]-97]++;
	   }
	   for(int i=0;i<t.length();i++)
	   { arrsc[t[i]-97]=-1;
	   }
	   int flag=0;
	   for(int i=0;i<26;i++)
	  { if(arrsc[i]>=2)
	    { cout<<"A\n"; 
	      flag=1;
	      break;
	    }
	    if(arrsc[i]==1)
	    {
	        flag=2;
	    }
	  }
	  if(flag==1)
	  continue;
	  else if(flag==0)
	  { cout<<"B\n"; 
	      continue;
	    }
	    else
	    {  for(int i=0;i<26;i++)
	  {    if(arrt[i]>0&&arrs[i]==0)
	    {   cout<<"B\n"; 
	        flag=3;
	        break;
	    }
	  }
	    if(flag==2)
	  cout<<"A\n";
	}
  }
	   
	return 0;
}