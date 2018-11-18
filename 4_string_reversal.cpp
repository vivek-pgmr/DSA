#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
void reverse(char *str,int size){

	int n=floor(size/2);

	for(int i=0;i<n;i++){
		swap(str[i],str[size-i-1]);
	}

	for(int i=0;i<size;i++)
		cout<<str[i];
}

int main(){

	char str[]="amit";
	int size = sizeof(str)/sizeof(str[0]);
	reverse(str,size);
return 0;
}
