#include<iostream>
#include<stdio.h>
using namespace std;
void func(char *b_str, char *str,int size){
	int b=0,s=0;
	char temp[size];
	while(str[s]!='\0' && str[b]!='\0'){
		if(b_str[b] != str[s])
		{	cout<<"\n1st if"<<b<<" "<<s;
			b++;
		}
		if(b_str[b]==str[s]){
			temp[s] = str[s];
			cout<< "\n2nd if"<<b<<" "<<s;
			b++;
			s++;
			
		}
	
	}
	temp[size-1]='\0';
	cout<<"\n"<<temp[0]<<"\n";
	
	cout<<"\n"<<temp[1]<<"\n";
	
	cout<<"\n"<<temp[2]<<"\n";
	int i=0;
	bool flag=true;
	while(*(str+i)!='\0'){
		if(temp[i]!=str[i]){
			flag=false;
			break;	
		}
		i++;
	}

	if(flag==true)
		cout<<"Contains another string";
	else
		cout<< "Does not";
	
}
int main(){
	int b,s;
	cout << "Enter big and small string size";
	cin >> b>>s;
	char b_str[b],str[s];
	cout << "\nEnter big string : ";
	cin >> b_str;
	cout <<"Enter small string : ";
	cin >> str;
	func(b_str,str,s);
	return 0;
	
}
