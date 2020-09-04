#include <iostream>
using namespace std;

int main()
{
	int n=1;
	char c;
	while(scanf("%c",&c)!=EOF){
		if(c!='"') cout<<c;
		else{
			if(n%2==1)	cout<<"``";
			else if(n%2==0)cout<<"''";
			n++;
		}
	}
}
