#include <iostream>
using namespace std;
// using oddsum-evensum is multiple of 11 check
int main()
{
	string s;
	while(cin>>s){
		int oddSum=0,evenSum=0;
		if(s=="0") break;
		for(int i=0;i<s.length();i++){
			if((i+1)%2==0) oddSum+=(int)s[i]-'0';
			else		   evenSum+=(int)s[i]-'0';
		}
		if((oddSum-evenSum)%11==0) cout<<s<<" is a multiple of 11."<<endl;
		else cout<<s<<" is not a multiple of 11."<<endl;
	}
}
