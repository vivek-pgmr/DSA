#include<iostream>
#include<stdio.h>
using namespace std;
void replace(char *str){

	int space_count;
	int i=0;
	for(;*(str+i)!='\0';i++){
		
		if(*(str+i)==' ')
			space_count++;
	}
	int length=i+1;
	int newLength=length+space_count*2;
	cout<<length<<" "<<newLength<<"\n";
	for(int i=length-1;i>=0;i--){

		if(*(str+i)==' '){
			*(str+newLength-3)='%';
			*(str+newLength-2)='2';
			*(str+newLength-1)='0';
			newLength=newLength-3;
		}
		else{
			*(str+newLength-1)=*(str+i);
			newLength--;
		}
	}
	
	cout<<str;

}


int main(){
	
	char str[]="Hi Vivek, how are you?";
	replace(str);

return 0;
}
