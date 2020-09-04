
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(char a,char b){
	if(a>b) return true;
	else return false;
}
int main(){
	string s;
	char total[1024];
	int countfort;
	int index,a=0;
	while(getline(cin,s)){
		if(a++) cout<<endl;
		countfort=0;
		sort(s.begin(),s.end(),cmp);
		//cout<<s<<endl;
		s[s.length()]='\0';
		for(int i=0;i<s.length();i++){
			if(s[i]!=s[i+1]) total[countfort++]=s[i];
		}
		int num[countfort+1]={0};
		int index;
		//for(int i=0;i<countfort;i++) cout<<total[i]<<endl;
		for(int i=0;i<countfort;i++){
			index=s.find(total[i]);
			while(index!=-1){
				s.erase(index,1);
				num[i]++;
				index=s.find(total[i]);
			}
		}
		for(int i=0;i<countfort;i++){
			for(int j=0;j<countfort-1;j++){
				if(num[j]>num[j+1]){
					swap(num[j],num[j+1]);
					swap(total[j],total[j+1]);
				}
			}
		}
		for(int i=0;i<countfort;i++) {
			printf("%d ",total[i]);
			cout<<num[i]<<endl;
		}
	}

}

