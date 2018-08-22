#include<iostream>
using namespace std;
	int fabonacci(int n){ // here n is number of terms
	if(n==1)
	return 0;
	if(n==2)
	return 1;
	else
	return(fabonacci(n-1)+fabonacci(n-2));
	}
int main(){
	int num;//no of terms
	cin>>num;
	int i;
	for(i=1;i<num;i++){
		cout<<fabonacci(i);
	}
}
