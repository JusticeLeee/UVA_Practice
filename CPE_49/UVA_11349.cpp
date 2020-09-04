
#include <iostream>
using namespace std;

int main(){
	int c,n,size,test,m[90000];
	cin>>n;
	//cout<<n<<endl;
	for(int test=1;test<=n;test++){
		while(c=getchar()){
			if(c=='-'||c>='0'&&c<='9'){
			ungetc(c,stdin);
			break;
			}
		}
		cin>>size;
		//cout<<size;
		for(int i=1;i<=size*size;i++){
			cin>>m[i];
			//cout<<m[i]<<" ";
		}
		for(int i=1;i<=size*size;i++){
			if(m[i]!=m[(size*size+1)-i]||m[i]<0){
				//cout<<"i= "<<i<<"and"<<m[i]<<m[(size+1)-i]<<endl;
				cout<<"Test #"<<test<<": Non-symmetric."<<endl;
				break;
			}
			if(i==size*size) 
				cout<<"Test #"<<test<<": Symmetric."<<endl;
		}
		
	}
}
