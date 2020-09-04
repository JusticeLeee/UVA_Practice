
#include <iostream>
using namespace std;

int main(){
	int cost[36]={0},n=0,count=0,number=0,temp=0;
	int i,j,r;
	cin>>n;
	for(r=1;r<=n;r++){
		cout<<"Case "<<r<<":"<<endl;
		for(int i=0;i<36;i++) cin>>cost[i];
		cin>>count;
		for(int i=1;i<=count;i++){
			int sum[40]={0},k;
			cin>>number;
			for(int j=2;j<=36;j++){
				temp=number;
				//cout<<"temp"<<temp<<endl;
				while(temp!=0){
					k=temp%j;
					sum[j]+=cost[k];
					temp=temp/j;
				}
			}
			int min=sum[2];
			for(int j=2;j<=36;j++){
				if(min>sum[j]) min=sum[j];
				//cout<<"j="<<j<<" "<<sum[j]<<endl;
			}
			cout<<"Cheapest base(s) for number "<<number<<":";
			for(int j=2;j<=36;j++){
				if(sum[j]==min) cout<<" "<<j;
			}
			cout<<endl;
			if(i==count&&r!=n) cout<<endl;
		}
	}
}

