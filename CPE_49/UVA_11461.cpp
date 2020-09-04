
#include <iostream>
using namespace std;
int main(){
	int a,b,count,base;
	while(cin>>a>>b){
		if(a==0&&b==0) break;
		count=0;base=1;
		while(base*base<a) base++;
		while(base*base<=b){
			count++;
			base++;
		}
		cout<<count<<endl;
		
		
	}
}
