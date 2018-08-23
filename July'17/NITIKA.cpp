#include <iostream>
#include<string>
using namespace std;

int main() {
	int T;
	cin>>T;
	int V=T+1;
	while(V--)
{	string str;
    string str1;
	getline(cin,str);
	if(V==T)
	{ continue;
	}
	 int j=0,i;
        for(i=0;str[i]!=0;i++)
       {   
           if(i==0||str[i-1]==' ')
        { str1[j++]=toupper(str[i]);
         
            
        }
         else if(str[i]==' ')
        { cout<<str1[0]<<". ";
          j=0;
          str1.clear();
        }
        else
        { str1[j++]=tolower(str[i]);
            
        }
       
      }
      

      
     for(int k=0;k<j;k++) 
      cout<<str1[k];
      cout<<"\n";
}	return 0;
}
