#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void findDuplicate(int *arr,int size){

	for(int i=0;i<size;i++){
                if(arr[abs(arr[i])-1]>0){
                        arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
                }
		 else
                        cout<<abs(arr[i])<<" is duplicate number\n";

	}

}

int main(){
	int arr[]={4,2,3,3,4,5};
	findDuplicate(arr,6);
return 0;
}
