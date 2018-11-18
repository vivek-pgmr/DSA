#include<iostream>
#include<stdio.h>
#include<stdlib.h>
void mis_num(int* arr,int size){
	//int size_arr=sizeof(arr)/sizeof(arr[0]);
	int sum_all=size*(size+1)/2;
	int sum_arr=0;
	for(int i=0;i<=size-2;i++){
		sum_arr+=arr[i];
	}
	std::cout<<"Missing Number is:"<<sum_all-sum_arr;
}
int main(){
	int arr[]={1,2,3,4,6};
	mis_num(arr,6);

return 0;

}
