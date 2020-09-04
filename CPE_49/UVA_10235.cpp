
#include <iostream>
#include <cmath>
using namespace std;

int prime(int n){
	for(int i=2;i<=n/2;i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int n,t;
	int d[10]={0};
	while(cin>>n){
		if(prime(n)==0){
			cout<<n<<" is not prime."<<endl;
		}else{
			t=n;
			int count=0;
			while(t!=0){
				d[count++]=t%10;
				t/=10;
			}
			int p=0,k,c_k=-1;
			for(int i=count-1;i>=0;i--){
				k=1;c_k++;
				for(int j=0;j<c_k;j++) k*=10;
				t+= d[i]*k;
			}
			if(prime(t)==0||t<10||t==n) cout<<n<<" is prime."<<endl;
			else cout<<n<<" is emirp."<<endl;
		}
	
	}
}
