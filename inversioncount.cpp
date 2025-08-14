#include<iostream>
using namespace std;
int countInversion(int arr[],int n){
	int count = 0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(i<j && arr[i]>arr[j]){
				count ++;
			}
		}
	}
	return count;
	
}
int main(){
	int arr[] = { 1,3,5,2,6,8,5,7,9};
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = countInversion(arr,n);
	cout<<result<<endl;
	return 0;
}
