
#include <iostream>
using namespace std;

int count(int n)
{
	int c=1;
	while(n!=1){
		if(n%2==1)	n=3*n+1;
		
		else		n=n/2;
		c++;
	}
	return c;
}

int main()
{
	int n,m,j,k;
	int max=0,t;
	while(cin>>n>>m){
		max=0;
		j=n;k=m;
		if(j>k) swap(j,k);
		for(int i=j;i<=k;i++){
			t=count(i);
			if(max<t) max=t;
		}
		cout<<n<<" "<<m<<" "<<max<<endl;
	}
}
