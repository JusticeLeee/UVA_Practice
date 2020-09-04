
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int n;
	int x[1024],count;
	while(cin>>n){
		count=0;
		while(n--)  cin>>x[count++];
		
		int sum[65536]={0};
		sort(x,x+count);
		int head=x[0],tail=x[count-1];
		for(int a=head;a<=tail;a++){
			for(int i=0;i<count;i++){
				sum[a] +=abs(x[i]-a);
			}
		}
		int min=sum[head];
		for(int a=head;a<=tail;a++){
			if(min>sum[a]) min=sum[a];
		}
		int correct[65536]={0},countc=0;
		for(int a=head;a<=tail;a++){
			if(min==sum[a]){
				cout<<a<<" ";
				break;
			}
		}
		int in=0;
		for(int a=head;a<=tail;a++){
			if(min==sum[a]){
				for(int i=0;i<count;i++){
					//cout<<a<<x[i]<<endl;
					if (x[i]==a){
						in++;
					}
				}
				countc++;
			}
		}
		cout<<in<<" ";
		cout<<countc<<endl;
	}
}
