/******************************************************************************
 * DO NOT MODIFY THIS FILE.
 *
 * This is the header file for DECODER exercise.
 ******************************************************************************/

#ifndef DEFS_C // Do not remove this line
#define DEFS_C // Do not remove this line

#include <stdio.h>
#include <string.h>

/******************************************************************************
 * [GIVEN / DO NOT MODIFY] CONSTANTS
 ******************************************************************************/

#define MAX 81       // Max number of characters in a string
#define N_PHRASES 50 // Number of phrases in the array

#define INPUT_FILE_1 "phrases_1.bin" // Filename of input binary file
#define INPUT_FILE_2 "phrases_2.bin" // Filename of alternate input binary file
#define OUTPUT_FILE "answer.txt"     // Filename of output text file

/******************************************************************************
 * [GIVEN / DO NOT MODIFY] TYPEDEFS
 ******************************************************************************/

typedef char String[MAX];

/******************************************************************************
 * [GIVEN / DO NOT MODIFY] FUNCTION PROTOTYPES
 *
 * These are the function prototypes for the functions that you need to
 * implement in the file DECODER-LastName.c
 *
 * You are not allowed to modify/change the return type nor parameters.
 ******************************************************************************/

void readInputFile(String kp, String strArr[], FILE *fPtr);
int calculateShift(String kp);
void getLongestPhrase(String result, String strArr[]);
void writeOutputFile(String kp, String longestPhrase, int shift, FILE *fPtr);

#endif // DEFS_C // Do not remove this line