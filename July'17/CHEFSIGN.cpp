#include<string>
#include <iostream>
using namespace std;
 
int main() {
    long long T,ans,v;
    cin>>T;
    string str;
    while(T--)
    { cin>>str;
      char last_obj;
     int j=0;
     
     while(str[j]=='='&&str[j]!=0)
     { j++;
     }

     if(str[j]==0)
     { cout<<"1"<<"\n";
       continue;
    }

    else
    { int v=1;
      int count=1;
     last_obj=str[j];
     
      for(long long i=j+1;str[i]!=0;i++)
      {   if(str[i]=='=')
          continue;
          if(str[i]==last_obj)
          { count++;
              
          }
          
          if(str[i]!=last_obj)
          { 
              if(count>v)
           {   v=count;
            }
            count=1;
           last_obj=str[i];
          }
          
      }
      if(count>v)
      v=count;
      cout<<v+1<<"\n";
      
    }
    

    }
	
	return 0;
}