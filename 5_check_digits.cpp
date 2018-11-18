#include<iostream>
#include<stdio.h>
using namespace std;
void check(char *str){
	int i=0;
	bool flag=false;
	while(str[i]!='\0' && flag==false )
	{
		if(str[i]>='0' && str[i]<='9')
			flag=true;
		i++;
	}
	if(flag==true)
		cout<<"contains number";
	else
		cout<<"no number";
}

int main(){
	char str[]="hello*";

	check(str);

return 0;
}
