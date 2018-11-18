#include<iostream>
#include<stdio.h>
using namespace std;
void findIntersection(int *arr1,int *arr2,int size){

	int arr3[size];
	int count=0;
	
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(arr1[i]==arr2[j]){
				arr3[count++]=arr1[i];
			}
	}}
	cout<<"Duplicates present in these 2 arrays: ";

	for(int k=0;k<count;k++){
		cout<<arr3[k]<<" ";
	}
	

}
int main(){

	int arr1[]={1,5,9,7,6};
	int arr2[]={2,6,7,11,3};

	findIntersection(arr1,arr2,5);


}


