
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,r=0,c,s[1000],total,count,d[10000];
	while(cin>>n){
		//cout<<n<<endl;
		r++;count=0;total=0;
		while(n--){
			cin>>s[count];
			//cout<<s[count];
			count++;
		}
		/*while(c=getchar()){
			if(c=='='||c>='0'&&c<='9'){
				ungetc(c,stdin);
				cin>>s[count];
				//cout<<s[count];
				count++;
			}else if(c=='\n') break;
		}*/
		for(int i=0;i<count;i++){
			for(int j=i;j<count;j++){
				d[total++]=s[i]+s[j];
			}
		}
		sort(d,d+total);
		for(int i=0;i<total;i++){
			if(d[i]==d[i+1]){
				cout<<"Case #"<<r<<": It is not a B2-Sequence.\n"<<endl; 
				break;
			}else if(i==total-1){
				cout<<"Case #"<<r<<": It is a B2-Sequence.\n"<<endl;
			}
		}
	}
}
