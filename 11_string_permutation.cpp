#include<iostream>
#include<stdio.h>
using namespace std;

void permutate( char* str, int index )
{
    int i = 0;
    if(str[index]=='\0' )
    { // We have a permutation so print it
        cout<<str<<" ";
        return;
    }
    for( i = index;str[i]!='\0'; i++ )
    {
        swap( str[index], str[i] ); // It doesn't matter how you swap.
        permutate( str, index + 1 );
        swap( str[index], str[i] );
    }
}

int main(){
	char str[]="ABC";
	//char u_str[sizeof(str)/sizeof(str[0])];
	permutate(str,0);
	return 0;
}
