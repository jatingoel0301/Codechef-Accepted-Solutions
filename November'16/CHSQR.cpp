#include <iostream>
using namespace std;
 
int main() {
	int T,k;
  cin>>T;
  while(T--)
  { cin>>k;
    int arr[401][401]={{0}};
    int centre=(k+1)/2;
    int i=centre;
    int j;
    for(j=1;j<=k;j++)
    {  int a=1;
        if(j==(centre+1))
       {i=2;
       }
       if(j==k)
       { i=1;
       }
       while(arr[i][j]!=1)
       { arr[i][j]=a++;
         i++;
         if(i==(k+1))
         {i=1;
         }
       }
    i++;
        
    }
   for(i=1;i<=k;i++)
   { for(j=1;j<=k;j++)
     cout<<arr[i][j]<<" ";
     cout<<"\n";
   }
  }
	return 0;
}
 