#include <iostream>
using namespace std;
void fib(int num){
	int a=0, b=1, sum=0;
	for(int i=3; i<=num; i++){
		cout<<sum<<" ";
		a=b;
		b=sum;
		sum=a+b;
	}
}
int main(){
	int num;
	cout<<"enter the num  till which series be printed"<<endl;
	cin>>num;
	fib(num);
	return 0;
}
