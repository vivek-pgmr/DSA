#include<iostream>
#include<stdio.h>
using namespace std;
void findNo(int * arr,int size,int no){
	int beg=0,end=size-1,mid=(beg+end)/2;
	int flag=false;
	while( beg<=end){
		
		if(arr[mid] == no){
			flag=true;
			cout<<"successfully found";
		}
		else if(arr[mid] > no){
			end=mid-1;
			  mid = (beg + end)/2;

		}
		else if(arr[mid] < no){
			beg=mid+1;
			  mid = (beg + end)/2;

		}

	}
	if(flag==false){
		cout<<"not found";
	}

}
int main(){
	int arr[]={2,4,5,6,8};
	findNo(arr,5,7);
return 0;
}
