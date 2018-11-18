#include<limits.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#define NO_OF_CHARS 256
using namespace std;
// Structure to store count of a character and index of the first
// occurrence in the input string
struct countIndex {
   int count;
   int index;
};
 
/* Returns an array of above structure type. The size of
   array is NO_OF_CHARS */
struct countIndex *getCharCountArray(char *str)
{
   struct countIndex *count =
        (struct countIndex *)calloc(sizeof(countIndex), NO_OF_CHARS);
   int i;
   for (i = 0; *(str+i);  i++)
   {
      (count[*(str+i)].count)++;
 
      // If it's first occurrence, then store the index
      if (count[*(str+i)].count == 1)
         count[*(str+i)].index = i;
   }
   return count;
}
/* The function returns index of the first non-repeating
    character in a string. If all characters are repeating
    then reurns INT_MAX */
int firstNonRepeating(char *str)
{
  struct countIndex *count = getCharCountArray(str);
  int result = INT_MAX, i;
 
  for (i = 0; i < NO_OF_CHARS;  i++)
  {
    // If this character occurs only once and appears
    // before the current result, then update the result
    if (count[i].count == 1 && result > count[i].index)
       result = count[i].index;
  }
 
  free(count); // To avoid memory leak
  return result;
}	


int main(){
	char str[]="Morning";
	int index =  firstNonRepeating(str);
  if (index == INT_MAX)
    cout<<"Either all characters are repeating or string is empty";
  else
   cout<<"First non-repeating character is "<< str[index];
return 0;
}
