
#include <iostream>
using namespace std;
int main(){
	int n,days,count,h[1024];
	cin>>n;
	while(n--){
		cin>>days;
		cin>>count;
		for(int i=0;i<count;i++){
			cin>>h[i];
		}
		int t[days+1]={0};
		int r;
		for(int i=0;i<count;i++){
			int j=1,temp;
			temp=h[i];
			while(h[i]<=days){
				r=h[i]%7;
				//cout<<h[i]<<","<<r<<endl;
				if(r!=0&&r!=6) t[h[i]]=1;
				h[i]=temp*++j;
			}	
		}
		int answer=0;
		for(int i=1;i<=days;i++){
			if(t[i]==1) {
				answer++;
				//cout<<"i= "<<i<<endl;
			}
			
		}
		cout<<answer<<endl;
		
	}
}
