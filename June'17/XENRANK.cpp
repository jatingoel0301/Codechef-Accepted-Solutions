#include <iostream>
using namespace std;

int main() {
	long long T,U,V,N,ANS;
	cin>>T;
	while(T--)
	{ cin>>U>>V;
	  N=U+V;
	  ANS=(N*(N+1)/2)+U+1;
	  cout<<ANS<<"\n";
	}
	return 0;
}
