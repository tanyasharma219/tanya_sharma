#include <iostream>
using namespace std;
int main(){
	int m, n,p ,q,i,j,arr1[5][5],arr2[5][5],mult[5][5];
	cout<< "enter the number of rows and column for arr1:";
	cin>>m>>n;
	cout<< "enter the number of rows and column for arr2:";
	cin>>p>>q;
	if(n!=p){
		cout<<"matrices cannot be multiplied";
		exit(0);
	}
	cout<<"enter the elements for arr1:";
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			cin>>arr1[i][j];
		}
	}
	cout<<"enter the elements for arr2:";
	for(i=0; i<p; i++){
		for(j=0; j<q; j++){
			cin>>arr2[i][j];
		}
	}
	//intializing elements of matrix mult to 0
	
	for(i=0; i<m; i++){
		for(j=0; j<q; j++){
			mult[i][j]=0;
		}
	}
	//muktiplying the matrices
	for(i=0; i<m; i++){
		for(j=0; j<q; j++){
			for(int k=0; k<n; k++){
				mult[i][j]+=arr1[i][k]*arr2[k][j];
			}
		}
	}
	cout<<"output of matrix:\n";
	for(i=0; i<m; i++){
		for(j=0; j<q; j++){
			cout<<mult[i][j]<<" ";
			if(j==q-1)
				cout<<endl;
			}
		}
		return 0;
	}
