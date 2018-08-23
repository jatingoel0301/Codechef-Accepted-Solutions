#include<map>
#include<string>
#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    string str;
    long long V=T+1;
    while(V--)
   { map<char,int> A;
     getline(cin,str);
     if(V==T)
     continue;
  	long long j=0;
    while(str[j])
  {	A[str[j++]]++;
  }
	map<char,int>::iterator it;
   /* for(it=A.begin();it!=A.end();it++)
	  cout<<it->first<<" "<<it->second<<"\n";*/
	  int x,y;
	  for(int i=65;i<=90;i++)
	  {   x=(i/10)+48;
	      y=(i%10)+48;
	      if((x!=y&&A.find(char(x))!=A.end()&&A.find(char(y))!=A.end())||(x==y&&A.find(char(x))!=A.end()&&A[char(x)]>=2))
	     {  cout<<(char)i;
          }
	  }
          cout<<"\n";	
	  }
	return 0;
}
