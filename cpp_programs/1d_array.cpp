#include <iostream>;
using namespace std;
int main(){
	int roll[50];
	int n;
	cout<<"how many roll numbers :";
	cin>>n;
	cout<<"enter roll numbers:"<<endl;
	for(int i=0; i<n; i++){
		cin>>roll[i];
	}
	cout<<"output"<<endl;
	for(int i=0; i<n; i++){
		cout<<roll[i]<<" ";
	}
	return 0;
}
