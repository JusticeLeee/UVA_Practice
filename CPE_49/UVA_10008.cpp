
#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char a,A; a='a';A='A';
	//printf("%d,%d",a,A);
	int n;
	char s[1024];
	char english[26];
	int count[26]={0};
	cin>>n;
	for(int i=0;i<26;i++){
		english[i]='A'+i;
		//cout<<english[i];
	}
	fgets(s,1024,stdin);
	
	while(n--){
		fgets(s,1024,stdin);
		for(int i=0;i<strlen(s);i++){
			for(int j=0;j<26;j++){
				if(s[i]==english[j]||s[i]==english[j]+32){
					count[j]++;
				}
			}
		}
	}
	int tmp;char tmp_c;
	for(int i=0;i<26;i++){
		for(int j=0;j<25;j++){
			if(count[j]<count[j+1]){
				tmp=count[j];
				count[j]=count[j+1];
				count[j+1]=tmp;
				tmp_c=english[j];
				english[j]=english[j+1];
				english[j+1]=tmp_c;
			}
		}
	}
	for(int i=0;i<26;i++){
		if(count[i]!=0)
		printf("%c %d\n",english[i],count[i]);
	}

}
