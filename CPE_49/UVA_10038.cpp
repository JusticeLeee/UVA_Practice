
#include <iostream>
#include <cmath>
using namespace std;


int main(){
	int c,bound,flag[3000],k,input;
	int n[3000];
	while(cin>>c){
		input=0;
		bound=c-1;
		for(int i=0;i<c;i++){
				cin>>n[i];
				flag[i]=0;
		}
		for(int i=0;i<c-1;i++){
			k=abs(n[i]-n[i+1]);
			flag[k]=1;
		}
		for(int i=1;i<=bound;i++){
			if(flag[i]==0){
				cout<<"Not jolly"<<endl;
				input=1;
				break;
			}
		}
		if(input==0) cout<<"Jolly"<<endl;
	}
}
