#include "hangman_operations.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int chances=0;

char* update_word(char* temp_word,char* word,char lguess);

int main()
{
   int n;
   char lguess,word[20],temp_word[20];

   int (*fparr[5])();
   fparr[0]=sketcha;
   fparr[1]=sketchb;
   fparr[2]=sketchc;
   fparr[3]=sketchd;
   fparr[4]=sketche;

   srand(time(0));
   n=(rand()%23)+1;
   strcpy(word,retrieve_word(n,word));

   for(int i=0;i<strlen(word);i++)
   {
      temp_word[i]='_';
   }
   
   while(chances<5)
   {
      printf("Enter a letter to guess the word\n");
      scanf("%c",&lguess);
      if(isalpha(lguess)==0)
      {
         continue;
      }
      strcpy(temp_word,update_word(temp_word,word,lguess));
      if(strcmp(temp_word,word)==0)
      {
         printf("You have guessed the word correctly\n");
         return 0;
      }
   }
   printf("You have lost all the chances. The correct word is %s",word);
   return 0;
}

char* update_word(char* temp_word,char* word,char lguess)
{   
    int count=0;
    for(int i=0;i<strlen(word);i++)
    {
       if(word[i]==lguess)
       {
          temp_word[i]=lguess;
          count++;
       }
    }
    printf("The current progress in the word: %s\n",temp_word);
    if(count==0)
    {
       chances--;
       (fparr[chances])();
       printf("You are left with %d chances\n",chances);
    }
    return temp_word;
}
     