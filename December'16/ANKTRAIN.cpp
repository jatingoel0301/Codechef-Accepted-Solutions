#include <iostream>
using namespace std;
const char* str[]={"","LB","MB","UB"};
int main() {
int T,i=-1,arr[100],c;
  cin>>T;
  while(T--)
  { cin>>arr[++i];
    c=arr[i]%8;
    switch(c)
   { case 0: cout<<arr[i]-1<<"SL"<<"\n";
            break;
    case 1: 
    case 2:
    case 3: cout<<arr[i]+3<<str[c]<<"\n";
            break;
    case 4:
    case 5:
    case 6: cout<<arr[i]-3<<str[c-3]<<"\n";
            break;
    case 7: cout<<arr[i]+1<<"SU"<<"\n";
            break;
   }
  }
	return 0;
}