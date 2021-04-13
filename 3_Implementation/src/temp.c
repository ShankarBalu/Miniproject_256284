#include<stdio.h>
#include<string.h>
char* retrieve_word(int n,char* word)
{
    FILE *fptr;
    fptr=fopen("words.txt","r");
    for(int i=0;i<n;i++)
    {
        fgets(word,20,fptr);
    }
    return word;
}
int main()
{
  char word[20];
  strcpy(word,retrieve_word(4,word));
  printf("%s",word);
}