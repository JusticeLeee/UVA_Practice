
#include <iostream>
using namespace std;

int main(){
	string c[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int n,m,d,t;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&m,&d);
		switch(m){
			case 1:t=6; break;
			case 2:t=2; break;
			case 3:t=2; break;
			case 4:t=5; break;
			case 5:t=0; break;
			case 6:t=3; break;
			case 7:t=5; break;
			case 8:t=1; break;
			case 9:t=4; break;
			case 10:t=6; break;
			case 11:t=2; break;
			case 12:t=4; break;
		}
		d--;
		t+=d%7;
		t%=7;
		cout<<c[t]<<endl;
	}

}
