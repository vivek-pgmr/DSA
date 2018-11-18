//remove duplicates from a string
#include<iostream>
#include<stdio.h>
#define NO_OF_CHARS 256
using namespace std;

void func(char *str){
	int count[256]={0};
	int new_index=0,old_index=0;
	while(*(str+old_index) != '\0'){
		if(count[str[old_index]]==0){
			str[new_index]=str[old_index];
			new_index++;
		}
		count[str[old_index]]++;	
		old_index++;
		cout<<"Old :"<<old_index<<"New : "<<new_index<<"\n";
	}
	str[new_index]='\0';

}

int main(){
	char str[]="bananas";
	func(str);
	cout<<str;
	return 0;
}
