
#include <iostream>
using namespace std;

int check(char sq[101][101],int c_m,int c_n,int r){
	char c=sq[c_m][c_n];
	//cout<<"c="<<c<<endl;
	//cout<<c_m-r<<c_m+r<<c_n-r<<c_n+r<<endl;
	if(c_m-r<0||c_n-r<0) return 0;
	for(int i=c_m-r;i<=c_m+r;i++){
		for(int j=c_n-r;j<=c_n+r;j++){
			if(sq[i][j]!=c) {
				//cout<<"i="<<i<<"j="<<j<<endl;
				return 0;
			}
		}
	}
	return 1;
}

int main(){
	int t;
	cin>>t;
	int m,n,q,r;
	char sq[101][101]={'\0'};
	while(t--){
		cin>>m>>n>>q;
		cout<<m<<" "<<n<<" "<<q<<endl;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>sq[i][j];
			}
		}
		
		
		int c_m,c_n;
		while(q--){
			cin>>c_m>>c_n;
			int r=1;
			if(check(sq,c_m,c_n,r)==0) {
				cout<<"1"<<endl;
				continue;
			}
			while(check(sq,c_m,c_n,r)!=0){
				r++;
			}
			cout<<2*r-1<<endl;
		}
		
	
	}
}
