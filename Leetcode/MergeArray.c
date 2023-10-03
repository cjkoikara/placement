/*
You are given two strings word1 and word2.
Merge the strings by adding letters in alternating order, starting with word1. 
If a string is longer than the other, append the additional letters onto the end of the merged string.
Return the merged string.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * mergeAlternately(char * word1, char * word2){
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int limit = 0;
    int index = 0, i = 0;
    char * result = malloc(sizeof(char)*(len1 + len2 + 1));
    if(len1 >=len2)
    {
        limit = len2;
    }else 
    {
        limit = len1;
    }
    //limit = (len1>=1en2? len1 : len2);
    limit = len1 >= len2  ? len2 : len1;

    for(i=0;i < limit ; i++)
    {
        result[index++] = word1[i];
        result[index++] = word2[i];
    }
    if(i<len1)
    {
        strcat(result, word1 + i);
    } else {
        strcat(result, word2 + i);
    }
    return result;
}
int main()
{
 char* word1 = "test2";
 char* word2 = "christina";
 printf("%s",mergeAlternately(word1, word2));   
}