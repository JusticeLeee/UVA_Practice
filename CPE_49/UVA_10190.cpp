
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b,t;
	while(cin>>a>>b){
		if(a<b) swap(a,b);
		if(b==1) {
			cout<<"Boring!"<<endl;
			continue;
		}
		int count=0;
		t=b;
		while(a>t){
			count++;
			t*=b;
			//cout<<t<<endl;
		}
		if(t!=a) {
			cout<<"Boring!"<<endl;
			continue;
		}
		cout<<a;
		while(a!=1){
			a/=b;
			cout<<" "<<a;
		}
		cout<<endl;
	}
}
