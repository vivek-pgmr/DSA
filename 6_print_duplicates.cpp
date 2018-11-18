#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#define NO_OF_CHARS 256
using namespace std;

void print_dup(char *str){

	int count[NO_OF_CHARS]={0};

	for(int i=0;str[i]!='\0';i++){
		count[str[i]]++;
	}
	char ch;
	for(int i=0;i<NO_OF_CHARS;i++){
		if(count[i]>1){
			ch=i;
			cout<<ch<<" :  "<<count[i]<<"\n";	
		}
	}

}

int main(){
	char str[]="Programming";
	print_dup(str);
	
return 0;
}
