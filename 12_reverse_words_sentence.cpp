#include<iostream>
#include<stdio.h>
using namespace std;

void reverse(char *begin, char *end)
{
  char temp;
  while (begin < end)
  {
    temp = *begin;
    *begin++ = *end;
    *end-- = temp;
  }
}
void func(char *str){
	char *temp = str;
	char *word_begin = str;
	while(*temp){
		temp++;
		if(*temp=='\0'){
			reverse(word_begin,temp-1);
		}
		else if(*temp==' '){
			reverse(word_begin,temp-1);
			word_begin = temp+1;
		}
	}	
	reverse(str,temp-1);
}
 
int main(){
	
	char str[]="I love Python";
	char *temp=str;
	func(str);
	cout<<str;

return 0;
}
