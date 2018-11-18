#include<iostream>
#include<stdio.h>
using namespace std;
void print(char *str1,char * str2,int size1,int size2){

	int count[26]={0};
	if(size1!=size2)
		return;
	for(int i=0;i<size1-1;i++)
		count[str1[i]-96]++;	
	for(int i=0;i<size2-1;i++)
                count[str2[i]-96]--;
	int flag=false;
	for(int i=0; i<26;i++){
		if(count[i]!=0){
			flag=true;
			cout<<"not an anagram";
			break;
		}
	}
	if(flag==false){
		cout<<str1<<" and "<<str2<< "are anagrams of each other";
	}

}
int main(){

	char str1[]="mary";
	char str2[]="army";
	//char str2[]="hello";
	int s1 = sizeof(str1)/sizeof(str1[0]);

	int s2 = sizeof(str2)/sizeof(str2[0]);

	print(str1,str2,s1,s2);

return 0;
}

