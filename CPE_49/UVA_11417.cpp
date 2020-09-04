
#include <iostream>
using namespace std;

int gcd(int a ,int b){
	int t;
	if(a<b) swap(a,b);
	while(b!=0){
		t=b;
		b=a%b;
		a=t;
	}
	return a;
}

int main(){
	int n,g;
	while(cin>>n){
	g=0;
		if(n==0) break;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				g+=gcd(i,j);
			}
		}
	cout<<g<<endl;
	}
}
