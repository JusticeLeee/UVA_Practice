
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double x[4];
	double y[4];
	double sum_x=0,sum_y=0;
	int a,b;
	while(cin>>x[0]>>y[0]){
		for(int i=1;i<4;i++)cin>>x[i]>>y[i];
		for(int i=0;i<4;i++){
			for(int j=i+1;j<4;j++){
				if(x[i]==x[j]&&y[i]==y[j]){
					a=i;b=j;
				}
			}
		}
		sum_x=0;sum_y=0;
		for(int i=0;i<4;i++){
			if(i!=a&&i!=b){
				sum_x+=x[i];
			}
		}
		for(int i=0;i<4;i++){
			if(i!=a&&i!=b){
				sum_y+=y[i];
			}
		}
		cout<<fixed<<setprecision(3)
		<<sum_x-x[a]<<" "<<sum_y-y[a]<<endl;
	}
}
