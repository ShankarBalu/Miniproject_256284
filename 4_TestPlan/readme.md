# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |To set a word for guessing randomly but for test purposes, a number was given (the number denotes the nth word in the text file) and checked with three numbers (individually) (the function checked was char* retrieve_word(int n,char* word))| 19,21,10 |"second","fantastic","father"|"second","fantastic","father"|Requirement based |
|  H_02       |--------------------------------------------------------------|  ------------|-------------|----------------|Scenario based    |
|  H_03       |--------------------------------------------------------------|  ------------|-------------|----------------|Boundary based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |To check whether sketch appears after first wrong guess (int sketcha())|  |Sketch should be printed and 1 should be returned|Sketch was printed and 1 was returned|Requirement based |
|  L_02       |To check whether sketch appears after second wrong guess (int sketchb()|  |Sketch should be printed and 2 should be returned|Sketch was printed and 2 was returned|Requirement based |
|  L_03       |To check whether sketch appears after second wrong guess (int sketchc()|  |Sketch should be printed and 3 should be returned|Sketch was printed and 3 was returned|Requirement based |
|  L_04       |To check whether sketch appears after second wrong guess (int sketchd()|  |Sketch should be printed and 4 should be returned|Sketch was printed and 4 was returned|Requirement based |
|  L_05       |To check whether sketch appears after second wrong guess (int sketche()|  |Sketch should be printed and 5 should be returned|Sketch was printed and 5 was returned|Requirement based |

