#include "hangman_operations.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int chances=0;

/**
 * @brief This is to update the word as per the guess of the user
 * 
 * @param temp_word A word to update the progress and blanks to indicate the status of the letter
 * @param word The word that has to be guessed by the user
 * @param lguess The letter that the user guesses per attempt
 * @return char* Return the updated word
 */

char* update_word(char* temp_word,char* word,char lguess);           
int (*fparr[5])();                                                   // Using array of function pointers


int main()
{
   int n;
   char lguess,word[20];
   char* temp_word;

   fparr[0]=sketcha;
   fparr[1]=sketchb;
   fparr[2]=sketchc;
   fparr[3]=sketchd;
   fparr[4]=sketche;
   srand(time(0));
   n=(rand()%23)+1;
   strcpy(word,retrieve_word(n,word));

   temp_word=malloc((strlen(word)+1)*sizeof(char));                   //Using dynamic memory allocation

   for(int i=0;i<strlen(word);i++)
   {
      temp_word[i]='_';
   }
   temp_word[strlen(word)]='\0';
   
   while(chances<5)
   {  
      printf("%s\n",temp_word);
      printf("Enter a letter to guess the word: ");
      scanf(" %c",&lguess);
      if(isalpha(lguess)==0)
      {
         printf("Enter a valid letter from the alphabet\n");
         continue;
      }
      strcpy(temp_word,update_word(temp_word,word,lguess));
      if(strcmp(temp_word,word)==0)
      {
         printf("Congratulations! You have guessed the word correctly\n");
         free(temp_word);
         return 0;
      }
   }
   printf("You have lost all the chances. The correct word is %s",word);
   free(temp_word);
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
       (fparr[chances])();
       chances++;
       printf("You have more %d chances\n",(5-chances));
    }
    return temp_word;
}
    