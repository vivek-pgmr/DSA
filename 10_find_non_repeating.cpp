#include<iostream>
#include<stdio.h>
using namespace std;
//Using XOR
void findElement(int *arr1,int s1){
        int i=1,mis=arr1[0];
        while(i<s1){
               
		mis=mis^arr1[i];
		i++;
        	
	}
	

	cout<<"Non repeated element is "<<mis;

}

int main(){

        int arr1[]={1,1,2,3,3,4,4};
        findElement(arr1,7);

	return 0;
}


