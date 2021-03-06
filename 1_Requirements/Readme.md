# Requirements
## Introduction
 Hangman is a word guessing game played by two players. One player thinks of a word and the other player tries to guess it by suggesting letters within a certain number of guesses. The name is given because of the way in which the game progress is shown. The game process is shown by a sketch of a man being hanged.

## Research
### How the game is played? 
(https://www.wikihow.com/Play-Hangman)
1. A word is chosen for the player to guess.
2. The number of words is symbollically conveyed to the user by drawing blank lines in each word.
3. The player is asked for a letter. If the letter is present in the word it is written in the respective positions above the blank lines. If the letter is not present, then the sketch of a man hanging is started.
4. The process continues till all the letters of the word has been guessed or till the sketch is completed.
5. The user wins if the word is completed before the complete sketch is drawn.
### Sketch of hangman (for 5 chances)
(https://en.wikipedia.org/wiki/Hangman_(game)#:~:text=Hangman%20is%20a%20paper%20and,a%20certain%20number%20of%20guesses.)
![Guess 1](https://github.com/ShankarBalu/Stepin_256284/blob/main/Hangman-0.png) ![Guess 2](https://github.com/ShankarBalu/Stepin_256284/blob/main/Hangman-1.png) ![Guess 3](https://github.com/ShankarBalu/Stepin_256284/blob/main/Hangman-2.png) 
![Guess 2](https://github.com/ShankarBalu/Stepin_256284/blob/main/Hangman-3.png)  ![Guess 2](https://github.com/ShankarBalu/Stepin_256284/blob/main/Hangman-4.png) 
## Cost and Features
1. The sketch of the hangman is shown after every wrong guess.
2. The user gets a random word to guess from a given set of words.
3. The incomplete word is shown with blanks in the incomplete parts of the word.
4. The user gets five chances to guess the word.
## Defining Our System
A set of words is present in a text file. When the user plays the game, a random word is retrieved from the file as the word to be guessed by the user. When the user gives a letter of the alphabet to guess,
* The word is displayed with the letter placed in it in the respective positions if the letter is present in the word.
* If the letter is not present in the word, then the sketch of the hangman (the state of the sketch is shown as per the chances) is shown.

The user wins when he guesses the word correctly within 5 chances. The user loses the game when the sketch of the hangman is complete(after exhausting the chances).
## SWOT ANALYSIS
![SWOT-Sample](https://github.com/ShankarBalu/Stepin_256284/blob/main/Swot%20Analysis.png)

# 4W&#39;s and 1&#39;H

## Who:

This game can be played across all age groups. Kids will have a special liking towards this game.

## What:

Hangman is a word guessing game in which the user is given a limited number of choices to guess and the progress is symbolically shown with the sketch of a man being hanged.

## When:

This game can be played when a person is stressed as a stress buster or for fun. This game can also be viewed as a fun way to improve vocabulary.

## Where:

This game can be played across all platforms and can even be used as an educational tool for improving vocabulary.

## How:

Some words are stored in a text file. When the user wants to play, a word is chosen from the set of words and the user has to guess the word by telling a letter from the alphabet each time. The user is given five chances to guess the word correctly.

# Detail requirements
## High Level Requirements:
ID   | Description                                    | Status
-----|------------------------------------------------|---------
HR01 | To be able to set a word for guessing| Implemented
HR02 | Correct progress of the game with the sketch appearing appropriately| Implemented
HR03 | Game must end appropriately and the result should be displayed| Implemented


##  Low level Requirements:
ID  | Description                   | HLR ID | Status 
 ----|-------------------------------|--------|---------------------------
 LR01| To be able to retrieve a word from the text file|HR01| Implemented
 LR02| To be able to display the incomplete word with blank spaces after every guess|HR02| Implemented
 LR03| To be able to display the appropriate sketch after every wrong guess|HR02| Implemented
 LR04| To check whether a letter from alphabet is given from user|HR02| Implemented
 LR05| To indicate that the user has won if the word is guessed within 5 incorrect guesses|HR03| Implemented
 LR06| To indicate that the user has lost if the word is not guesses within 5 incorrect guesses|HR03| Implemented