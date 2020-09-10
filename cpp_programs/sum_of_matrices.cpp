#include <iostream>
using namespace std;
int main(){
	int m, n,p ,q,i,j,arr1[5][5],arr2[5][5],arr3[5][5];
	cout<< "enter the number of rows and column for arr1:";
	cin>>m>>n;
	cout<< "enter the number of rows and column for arr2:";
	cin>>p>>q;
	if((m!=p)&&(n!=q)){
		cout<<"matrices cannot be added";
		exit(0);
	}
	cout<<"enter the elements for arr1:";
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			cin>>arr1[i][j];
		}
	}
	cout<<"enter the elements for arr1:";
	for(i=0; i<p; i++){
		for(j=0; j<q; j++){
			cin>>arr2[i][j];
		}
	}
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			arr3[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	cout<<"sum of matrices\n";
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			cout<<arr3[i][j]<<" ";
		}
		cout<<"\n";
	}
}
