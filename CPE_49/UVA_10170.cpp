
#include <iostream>
using namespace std;

int main(){
	unsigned long long int init,day,sum;
	while(cin>>init>>day){
		sum=init;
		while(sum<day){
			init++;
			sum+=init;
		}
		cout<<init<<endl;
			
		//cout<<init<<endl;
	}
}
