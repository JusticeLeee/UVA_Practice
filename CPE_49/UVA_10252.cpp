
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	string a,b,s;
	int len=0,index=0;
	while(getline(cin,a)&&getline(cin,b)){
		len=0;
		for(int i=0;i<b.length();i++){
			if(b[i]!=' '){
				index=a.find(b[i]);
				if(index>=0){
					s+=b[i];
					len++;
					a.erase(index,1);
				}
			}
		}
		sort(s.begin(),s.begin()+len);
		cout<<s<<endl;
		s.erase();
	}
}
