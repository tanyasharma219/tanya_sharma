#include <iostream>
using namespace std;
int main(){
	int num,r,sum=0,temp;
	cout<<"enter the number:";
	cin>>num;
	temp=num;
	while(num>0){
		r=num%10;
		sum=(sum*10)+r;
		num=num/10;
}
	if(temp==sum)
	cout<<"number is palindrome";
	else
	cout<<"number is not palindrome";
	return 0;
}
