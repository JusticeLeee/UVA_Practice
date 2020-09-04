

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char s[100][100];
	int len[100];
	string t;
	int n=0,max=0;
	while(fgets(s[n],100,stdin)){
		len[n]=strlen(s[n]);
		n++;
	}
	//assume all line have '\n'
	if(s[n-1][strlen(s[n-1])-1]!='\n') len[n-1]++;
	for(int i=0;i<n;i++){
		if(max<len[i]) max=len[i];
	}
	
	for(int j=0;j<max-1;j++){
		for(int i=n-1;i>=0;i--){
				if(s[i][j]!='\n'&&s[i][j]!='\0')
				t+=s[i][j];
				else if(len[i]<=j+1&&len[i]<len[i-1])
				t+=' ';
		}
		cout<<t<<endl;
		t.erase();
		
	}
	

}


