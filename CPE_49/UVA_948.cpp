
#include <iostream>
using namespace std;

int main(){
	unsigned long long int n,x,f[40]={0,1},count=1,flag,i,j;
	cin>>n;
	for(int i=2;i<=40;i++) f[i]=f[i-1]+f[i-2];
	//cout<<count<<endl;
	while(n--){
		cin>>x;
		cout<<x<<" = ";
		count=40;
		while(f[count]>x){
			count--;
			flag=count;
		}
		for(int i=flag;i>1;i--){
			if(x>=f[i]) {
				cout<<"1";
				x-=f[i];
			}
			else cout<<"0";
		}
		cout<<" (fib)"<<endl;
	}
}
