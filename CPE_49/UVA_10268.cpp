
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int x,c,a[1024],count,answer,p;
	while(cin>>x){
		count=0;answer=0;
		cin.ignore();
		while((c=getchar())!='\n'){
			if(c>='0'||c<='9'||c=='-'){
				ungetc(c,stdin);
				cin>>a[count++];
			}
		}
		count--;
		for(int i=0;i<=count;i++){
			p=count-i;
			answer+=a[i]*p*pow(x,p-1);
		}
		cout<<answer<<endl;
		/*for(int i=0;i<count;i++){
			cout<<a[i]<<endl;
		}*/
		
	}

}
