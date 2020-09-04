
#include <iostream>
using namespace std;
int main(){
	int n,s,d,l;
	cin>>n;
	while(n--){
		l=0;
		cin>>s>>d;
		while(d+l<=s){
			//cout<<"d= "<<d<<" l= "<<l<<endl;
			if(d+l==s) {
				cout<<d<<" "<<l<<endl;
				break;
			}else{
				d++;
				l++;
			}
		}
		if(d+l>s) cout<<"impossible"<<endl;
	}
}
