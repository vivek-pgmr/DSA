#include<iostream>
#include<stdio.h>
using namespace std;
//for sorted arrays
void findIntersection(int *arr1,int *arr2,int s1,int s2){
	int i=0,j=0;
	while(i<s1 && j<s2){
		if(arr1[i]<arr2[j])
			i++;
		else if(arr1[i]>arr2[j])
			j++;
		else{
		cout<<arr1[i]<<" ";
			i++;j++;
		}
			
	}

}

int main(){

        int arr1[]={1,2,3,7,10};
        int arr2[]={2,6,7,9,11,13};

        findIntersection(arr1,arr2,5,6);


}

