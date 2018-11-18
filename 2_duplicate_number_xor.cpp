#include<iostream>
#include<stdio.h>
using namespace std;
//if array contains n numbers ranging from 0 to n-2
void dup_num(int *arr,int size){

        int x1 = arr[0];

        for(int i=1;i<=size-1;i++){

                x1 = x1^arr[i];
        }

        
        for (int i = 1; i <= size-2; i++)
        x1 = x1^i;

       

        cout<<"Duplicate number is "<<x1;
}
int main(){
	
	int arr[]={0,3,1,2,3};
	dup_num(arr,5);
	
	return 0;
}

