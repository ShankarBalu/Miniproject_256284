#include "unity.h"
#include "hangman_operations.h"
#include<string.h>

/* Modify these two lines according to the project */
#define PROJECT_NAME  "Hangman"


/* Prototypes for all the test functions */
void test_sketcha(void);
void test_sketchb(void);
void test_sketchc(void);
void test_sketchd(void);
void test_sketche(void);
void test_retrieve_word(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_sketcha);
  RUN_TEST(test_sketchb);
  RUN_TEST(test_sketchc);
  RUN_TEST(test_sketchd);
  RUN_TEST(test_sketche);
  RUN_TEST(test_retrieve_word);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_sketcha(void) {
  TEST_ASSERT_EQUAL(1, sketcha());
}
void test_sketchb(void) {
  TEST_ASSERT_EQUAL(2, sketchb());
}
void test_sketchc(void) {
  TEST_ASSERT_EQUAL(3, sketchc());
}

void test_sketchd(void) {
  TEST_ASSERT_EQUAL(4, sketchd());
}

void test_sketche(void) {
  TEST_ASSERT_EQUAL(5, sketche());
}

void test_retrieve_word(void){
  char word[20];
  TEST_ASSERT_EQUAL(0,strcmp("second",retrieve_word(19,word)));
  TEST_ASSERT_EQUAL(0,strcmp("father",retrieve_word(10,word)));
  TEST_ASSERT_EQUAL(0,strcmp("fantastic",retrieve_word(21,word)));
}
