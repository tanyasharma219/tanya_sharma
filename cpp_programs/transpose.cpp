#include <iostream>
using namespace std;
int main(){
	int row,col,arr[5][5],transpose[5][5];
	cout<< "enter the number of rows and column for arr:";
	cin>>row>>col;

	cout<<"enter the elements for array:";
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			transpose[j][i]=arr[i][j];
		}
	}
	cout<<"transpose of matrix:"<<endl;
	for(int i=0; i<col;i++){
		for(int j=0; j<row; j++){
			cout<<transpose[i][j]<<" ";
			if(j==row-1)
				cout<<endl;
		}
	}
}
