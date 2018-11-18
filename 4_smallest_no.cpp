#include<iostream>
#include<stdio.h>
using namespace std;

void find_min(int *arr,int n){

	int min=arr[0];

	for(int i=1;i<n;i++){
		if(min > arr[i])
			min=arr[i];
		else
			continue;
	}

	cout<<"Smallest no in an array given is "<<min;
}

int main(){
	int arr[]={-1,10,23,11,30,-5};
	find_min(arr,6);
return 0;
}
