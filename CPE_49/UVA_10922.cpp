
#include <iostream>
using namespace std;

int nine(string s,int degree){
	int sum=0;
	for(int i=0;i<s.length();i++){
		sum += s[i]-'0';
	}
	//cout<<"sum= "<<sum<<endl;
	if(sum%9!=0) return 0;
	if(sum==9){
		return degree;
	}
	else {
		string s1;
		int count=0;
		while(sum!=0){
			s1 += ('0'+sum%10);
			//cout<<s1<<endl;
			sum/=10;
		}
		degree++;
		return nine(s1,degree);
	}
	
}
int main(){
	string s;
	int t;
	while(cin>>s){
	if(s=="0") break;
	//	cout<<s<<endl;
		t=nine(s,1);
		//cout<<t<<endl;
		if(t==0){
			cout<<s<<" is not a multiple of 9."<<endl;
		}else{
			cout<<s<<" is a multiple of 9 and has 9-degree "<<t<<"."<<endl;
		}
	}
}
