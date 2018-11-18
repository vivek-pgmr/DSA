#include<iostream>
#include<stdio.h>
using namespace std;

void mis_num(int *arr,int size){

	int x1 = arr[0];

	for(int i=1;i<=size-2;i++){
		
		x1 = x1^arr[i];
	}

	int x2 = 1;
	for (int i = 2; i <= size; i++)
        x2 = x2^i; 

	int miss=x1^x2;

	cout<<"Missing number is "<<miss;
}

int main(){
	int arr[]={1,2,3,4,6};
	mis_num(arr,6);
return 0;
}
