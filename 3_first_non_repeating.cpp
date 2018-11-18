#include<iostream>
#include<stdio.h>
using namespace std;

void print(char *str,int size){

if(size==1){
        cout<<"empty string";
        return;
}
int count[26]={0};


for(int i=0;i<size-1;i++){

        count[str[i]-96]++;
}

for(int i=0;i<size-1;i++){
	if(count[str[i]-96]==1){
		cout<<str[i]<<" is first non repeating character";
		break;	
}}

}

int main(){

char str[]="morning";
int size=sizeof(str)/sizeof(str[0]);

print(str,size);
return 0;
}
                                                                                                                             1,1           All

