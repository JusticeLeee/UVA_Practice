#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string s,out; // Note '\' is char '\\' 
	const char keyboard[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	const int kblength = strlen(keyboard);
	while(getline(cin,s)){
		for(int i=0;i<s.length();i++){
			if(s[i]==' ') cout<<' ';
			else{
				s[i]=tolower(s[i]);
				for(int j=0;j<kblength;j++){
					if(keyboard[j]==s[i]){
						cout<<keyboard[j-2];
					}
				}
			}
		}
		
		cout<<endl;
	}
}
