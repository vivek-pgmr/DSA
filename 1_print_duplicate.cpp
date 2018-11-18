#include<iostream>
#include<stdio.h>
using namespace std;

void print(char *str,int size){

if(size==1){
	cout<<"empty string";
	return;
}
int count[26]={0};

int flag=false;

for(int i=0;i<size-1;i++){

	if(count[str[i]-96]==1){
		cout<<str[i]<<" is duplicate character at"  <<i+1<<" th pos.\n";
		flag=true;
	}
	
	count[str[i]-96]++;
}

if(flag==false){
	cout<<"no duplicate is found";
}

}

int main(){

//char str[]="hello";

//char str[]="";

char str[]="red";
int size=sizeof(str)/sizeof(str[0]);

print(str,size);
return 0;
}
