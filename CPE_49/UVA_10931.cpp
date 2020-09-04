
#include <iostream>
using namespace std;

int main(){
	int n,m,a[10000],count,sum;
	while(cin>>n){
		count=0;m=n;sum=0;
		if(n==0)break;
		cout<<"The parity of ";
		while(n!=0){
			a[count++]=n%2;
			n/=2;
		}
		for(int i=count-1;i>=0;i--){
			cout<<a[i];
		}
		cout<<" is ";
		while(m!=0){
			if(m%2==1)
				sum++;
			m/=2;
		}
		cout<<sum<<" (mod 2)."<<endl;
	}
}
