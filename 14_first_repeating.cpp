#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void findFirstDuplicate(int *arr,int size){

        for(int i=0;i<size;i++){
                if(arr[abs(arr[i])-1]>0){
                        arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
                }
                 else{
                        cout<<abs(arr[i])<<" is duplicate number\n";
			break;
			}
        }

}

int main(){
        int arr[]={10, 5, 3, 4, 3, 5, 6};
        findFirstDuplicate(arr,7);
return 0;
}


