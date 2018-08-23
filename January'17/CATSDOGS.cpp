#include <iostream>
using namespace std;
 
int main() {
	long long T,c,d,l;
	cin>>T;
	while(T--)
	{ cin>>c>>d>>l;
	  if(l==0&&(d!=0||c!=0))
	  cout<<"no\n";
	  else
	 { long long n=(4*(c+d))-l;
	  if((n%4==0&&n>=0&&n<=(8*d))&&l>=4*d)
	 cout<<"yes\n";
	 else
	 cout<<"no\n";
	}  
}
	return 0;
}