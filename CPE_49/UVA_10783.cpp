
#include <iostream>
using namespace std;
int main(){
	int n,range_1,range_2,oddsum;
	cin>>n;
	for(int j=1;j<=n;j++){
		oddsum=0;
		cin>>range_1>>range_2;
		for(int i=range_1;i<=range_2;i++){
			if(i%2==1) oddsum+=i;
		}
		cout<<"Case "<<j<<": "<<oddsum<<endl;
	}
	
}
