#include <iostream>
using namespace std;
int main(){
	int num=0, factorial=1;
	cout<<"enter the number:"<<endl;
	cin>>num;
	if(num==0){
		cout<<"factorial of"<<num<<"="<<"1"<<endl;
		exit(0);
	}
	for(int i=num; i>0; --i){
		factorial=factorial*i;
	}
	cout<<"factorial of"<<num<<"="<<factorial<<endl;
	return 0;
}
