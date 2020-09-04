
//'kuti' (10000000), 'lakh' (100000), 'hajar' (1000), 'shata' (100)
#include <iostream>
#include <iomanip>
using namespace std;
void kuti(unsigned long long int n){
	if(n>=10000000){
		kuti(n/10000000);
		cout<<" kuti";
		n%=10000000;
	}
	if(n>=100000){
		kuti(n/100000);
		cout<<" lakh";
		n%=100000;
	}
	if(n>=1000){
		kuti(n/1000);
		cout<<" hajar";
		n%=1000;
	}
	if(n>=100){
		kuti(n/100);
		cout<<" shata";
		n%=100;
	}
	if(n) cout<<" "<<n;
}

int main()
{
	unsigned long long int n;
	int time=1;
	while(cin>>n){
		cout<<setw(4)<<time<<".";
		if(n==0){
			cout<<" 0"<<endl;
			time++;
		}else{
			kuti(n);
			cout<<endl;
			time++;
		}
	
	}
	

}


