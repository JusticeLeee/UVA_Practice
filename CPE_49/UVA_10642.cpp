
#include <iostream>
using namespace std;

int main(){
	int n,step;
	int x1,y1,x2,y2;
	cin>>n;
	for(int r=1;r<=n;r++){
		cin>>x1>>y1>>x2>>y2;
		step=0;
		if(x1==0&&y1==0){
			x1=0;
			y1=1;
			step++;
		}
		int temp,flag;
		while(x1!=x2||y1!=y2||flag==0){
			//cout<<"x1= "<<x1<<" y1= "<<y1<<endl;
			flag=0;
			temp=y1+x1;
			while(y1!=0&&y1>0){
			//cout<<"x1= "<<x1<<" y1= "<<y1<<endl;
				if(x1==x2&&y1==y2) {
					flag=1;
					break;
				}
				x1++;
				y1--;
				step++;
			}
			if(x1==x2&&y1==y2){
				flag=1;
				break;
			}
			y1=temp+1;
			x1=0;
			step++;
		}
		cout<<"Case "<<r<<": "<<step<<endl;
	}
}
