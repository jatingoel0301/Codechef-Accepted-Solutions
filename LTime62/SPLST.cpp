#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
 {	int flag=0;
    int arr[3];
     int x,y;
     cin>>arr[0]>>arr[1]>>arr[2]>>x>>y;
     int subx[3];
     int suby[3];
     for(int i=0;i<3;i++)
      { subx[i]=x-arr[i];
      // cout<<subx[i]<<" "<<"\n";
      }
      for(int i=0;i<3;i++)
       { suby[i]=y-arr[i];
       // cout<<suby[i]<<" "<<"\n";
       }
     
     for(int i=0;i<3;i++)
      { for(int j=0;j<3;j++)
          {  if(i==j)
                continue;
            for(int k=0;k<3;k++)  
             { if(k==i||k==j)
                continue;
               if(subx[j]<=0)
                break;
               int r1=arr[i]-subx[j];                
               if(r1<0)
                 break;
               if(r1==0)
                { flag=1;
                 break;
                }
               if(suby[k]<=0)
                 break; 
               int r2=r1-suby[k];
               if(r2<0)
                break;
               if(r2==0)
                { flag=1;
                 break;
                }
             }
             if(flag==1)
              break;
              
          }
           if(flag==1)
              break;
          
          
      }
      if(flag==1)
        cout<<"YES\n";
      else
      cout<<"NO\n";
  }
	return 0;
}