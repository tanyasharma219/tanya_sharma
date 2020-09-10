#include<iostream.h>
#include<conio.h>
void main(){
	int num,i,rem,flag=0;
	clrser();
	cout<<"enter the number for checking it is prime or not";
	cin>>num;
	for(i=2; i<=num-1; i++){
		rem=num%i;
		if(rem==0)
			flag=1;
	}
	if(flag==0)
		cout<<"number is prime";
	else
		cout<<"number is not prime";
}
