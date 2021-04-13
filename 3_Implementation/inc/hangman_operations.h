/** 
* @file hangman_operations.h
* Contains the operations used in hangman game
*
*/
#ifndef __HANGMAN_OPERATIONS_H__
#define __HANGMAN_OPERATIONS_H__

/**
 * @brief This is a function which prints the sketch for the first wrong guess when called
 * 
 * @return An integer value to use for testing the function
 */
int sketcha();

/**
 * @brief This is a function which prints the sketch for the second wrong guess when called
 * 
 * @return An integer value to use for testing the function
 */
int sketchb();

/**
 * @brief This is a function which prints the sketch for the third wrong guess when called
 * 
 * @return An integer value to be used for testing the function
 */
int sketchc();


/**
 * @brief This is a function which prints the sketch for the fourth wrong guess when called
 * 
 * @return An integer value to be used for testing the function
 */
int sketchd();

/**
 * @brief This is a function which prints the sketch for the fifth wrong guess when called
 * 
 * @return An integer value to be used for testing the function
 */
int sketche();

/**
 * @brief This is a function to retrieve a word from the variable.
 * 
 * @param n (nth word to be retrieved from the file)
 * @param word (the pointer to the string in which the word is to be stored)
 * @return char* 
 */
char* retrieve_word(int n,char* word);

#endif  /* #define __SKETCHING_OPERATIONS_H__ */