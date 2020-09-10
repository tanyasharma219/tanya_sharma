#include <iostream>
using namespace std;
int main(){
	int arr[50], i=0, size=0, search=0;
	cout<<"enter size of an array:";
	cin>>size;
	cout<<"enyter the elements:"<<endl;
	for(int i=0; i<size; ++i){
		cin>>arr[i];
	}
	//number to searched
	cout<<"enter the number which you wnat to search:";
	cin>>search;
	//output
	for(i=0; i<size; i++){
		if(arr[i]==search){
			cout<<"the number "<<arr[i]<<"is found at "<<i+1<<"poistion";
			break;
		}
	}
	//if searched number is not found
	if(i>=size){
		cout<<"number not found";
	}
	return 0;
}
