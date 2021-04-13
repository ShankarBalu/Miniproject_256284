#include "hangman_operations.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int chances=0;

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
      
   }
}


     