#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	int player,certain;
	double p,sum,w_p[1000];
	while(cin>>n){
		while(n--){
			for(int i=1;i<=1000;i++)w_p[i]=1;
			sum=0;
			cin>>player>>p>>certain;
			if(p==0){
				cout<<"0.0000"<<endl;
				continue;
			} 
			for(int i=1;i<=player;i++){
				for(int j=1;j<=i;j++){
					if(j!=i){
						//cout<<w_p[i]<<endl;
						w_p[i]=w_p[i]*(1-p);
						//cout<<w_p[i]<<endl;
					}
					else{
						//cout<<w_p[i]<<endl;
						w_p[i]=w_p[i]*p;
						//cout<<w_p[i]<<endl;
					}
				}
			}
			for(int i=1;i<=player;i++){
				sum+=w_p[i];
			}
			cout<<fixed<<setprecision(4)<<w_p[certain]/sum<<endl;
			
		}
	}
}
