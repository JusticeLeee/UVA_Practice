
#include <iostream>
using namespace std;

int f(int n){
	int sum=0;
	while(n!=0){
		sum+=n%10;
		n/=10;
	}
	
	if(sum<10)return sum;
	else if(sum>=10){
		return f(sum);
	}
}

int main()
{
	unsigned long long int n;
	while(cin>>n){
		if(n==0) return 1;
		else{
			cout<<f(n)<<endl;
		}
	}

}
