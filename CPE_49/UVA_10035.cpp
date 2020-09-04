#include <iostream>
using namespace std;
int main()
{
	int a[10],b[10],i,carry,count=0;
	long long int n,m;
	while(cin>>n>>m&&(n!=0&&m!=0)){
		i=0;carry=0;count=0;
		while(n!=0||m!=0){
			carry=n%10+m%10+carry;
			//cout<<carry<<endl;
			n/=10;
			m/=10;
			carry/=10;
			if(carry!=0) count++;
		}
		if(count==0)cout<<"No carry operation."<<endl;
		else if(count==1)cout<<count<<" carry operation."<<endl;
		else cout<<count<<" carry operations."<<endl;
	}


}
