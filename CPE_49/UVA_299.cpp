
#include <iostream>
using namespace std;

int main(){
	int n,t,count;
	cin>>n;
	while(n--){
		count=0;
		cin>>t;
		int array[t];
		for(int i=0;i<t;i++){
			cin>>array[i];
		}
		for(int i=0;i<t;i++){
			for(int j=0;j<t-1;j++){
				if(array[j]>array[j+1]){
					swap(array[j],array[j+1]);
					count++;	
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",count);
	}
}
