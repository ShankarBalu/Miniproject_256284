/**
 * @file hangman_operations.c
 * @author Shankar Balu 
 * @brief  Function definitions for sketching operations
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <hangman_operations.h>
#include<stdio.h>
#include<string.h>

int sketcha()
{
    printf("_______________\n");
    printf(" |          |  \n");
    printf(" |             \n");
    printf(" |             \n");
    printf(" |             \n");
    printf(" |             \n");
    printf("_|_____________\n");
    return 1;
}

int sketchb()
{
    printf("_______________\n");
    printf(" |         |   \n");
    printf(" |         0   \n");
    printf(" |             \n");
    printf(" |             \n");
    printf(" |             \n");
    printf("_|_____________\n");
    return 2;
}

int sketchc()
{
    printf("_______________\n");
    printf(" |         |   \n");
    printf(" |         0   \n");
    printf(" |         |   \n");
    printf(" |         |   \n");
    printf(" |             \n");
    printf("_|_____________\n");
    return 3;
}

int sketchd()
{
    printf("_______________\n");
    printf(" |         |   \n");
    printf(" |         0   \n");
    printf(" |        /|\\ \n");
    printf(" |         |   \n");
    printf(" |             \n");
    printf("_|_____________\n");
    return 4;
}

int sketche()
{
    printf("_______________\n");
    printf(" |         |   \n");
    printf(" |         0   \n");
    printf(" |        /|\\ \n");
    printf(" |         |   \n");
    printf(" |        / \\ \n");
    printf("_|_____________\n");
    return 5;
}

char* retrieve_word(int n,char* word)
{
    FILE *fptr;
    fptr=fopen("./words.txt","r");
    for(int i=0;i<n;i++)
    {   
            fgets(word,20,fptr);
    }
    word[strlen(word)-1]='\0';
    return word;
}