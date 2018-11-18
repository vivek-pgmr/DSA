#include<iostream>
#include<stdio.h>
using namespace std;
void dup_nos(int *arr,int size){
	
	int sum_all = size*(size-1)/2;
	int sum = 0;
	for(int i=0;i<size;i++){
		sum += arr[i];
	}
	cout<<"Duplicate number is "<<size-(sum_all-sum)-1;
}

int main(){
	//array of n nos ranging from 0 to n-2
	int arr[]={0,0,1,2,3};
	dup_nos(arr,5);
return 0;
}
