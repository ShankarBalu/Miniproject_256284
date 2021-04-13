#include<stdio.h>
#include<stdlib.h>
/*
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
  int n;
  printf("Enter the nth word");
  scanf("%d",&n);
  strcpy(word,retrieve_word(n,word));
  printf("%s",word);
}
*/
int main()
{
   srand(time(0));
   for(int i=0;i<10;i++)
   {
     printf("%d\n",((rand()%23)+1));
   }
   return 0;
}