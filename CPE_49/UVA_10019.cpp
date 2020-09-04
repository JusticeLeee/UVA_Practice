#include <iostream>
using namespace std;

int main(){
	int h,m,n,sum1,sum2;
	cin>>n;
	while(n--){
		sum1=0;sum2=0;
		cin>>m;
		h=m;
		while(m!=0){
			if(m%2==1)
				sum1++;
			m/=2;
		}
		int d1,d2,d3,d4;
		d1=h/1000;
		d2=(h-d1*1000)/100;
		d3=(h-d1*1000-d2*100)/10;
		d4=h%10;
		while(d1!=0){
			if(d1%2==1)
				sum2++;
			d1/=2;
		}
		while(d2!=0){
			if(d2%2==1)
				sum2++;
			d2/=2;
		}
		while(d3!=0){
			if(d3%2==1)
				sum2++;
			d3/=2;
		}while(d4!=0){
			if(d4%2==1)
				sum2++;
			d4/=2;
		}
		cout<<sum1<<" "<<sum2<<endl;
	}

}
