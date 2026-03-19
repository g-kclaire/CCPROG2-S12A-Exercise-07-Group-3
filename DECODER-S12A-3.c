/******************************************************************************
 * Topic   : File Processing (Decoder)
 * Name    : Group 3
 * Section : S12A
 ******************************************************************************
 *
 * 1. Encode your name and section above, as well as rename this file in the
 *    following format: DECODER-LastName.c
 *     - Example: DECODER-DelaCruz.c
 *
 * 2. Read and understand the problem specs.
 *
 * 3. Implement your solution in this file. This is the C source file that you
 *    should submit/upload in AnimoSpace. Follow all the instructions in the
 *    accompanying specifications file and the instructions written (as function
 *    comments) in this file.
 *
 *    Compile:
 *      prompt~> gcc -Wall -std=c99 DECODER-LastName.c -o app
 *
 *    Run in Mac/Linux:
 *      prompt~> ./app
 *
 *    Run in Windows:
 *      prompt~> app
 *
 * 4. The program must not output anything in the terminal. It should only
 *    produce the output text file.
 *
 * Prepared by
 * - Email  : kristine.kalaw@dlsu.edu.ph
 * - @author: Kristine Kalaw
 *            Department of Software Technology
 *            College of Computer Studies
 *            De La Salle University
 *
 * Kindly inform me if there are any corrections needed for this template
 ******************************************************************************/

#include "defs.h"

/******************************************************************************
 * [GIVEN / DO NOT MODIFY]  HELPER FUNCTIONS
 ******************************************************************************/

/**
 * Decodes the ciphertext into plaintext. The function does not return anything,
 * but it updates the ciphertext into its plaintext form.
 * @param ciphertext The ciphertext to decode
 * @param shift The number to "shift" per character
 */
void decode(char *ciphertext, int shift)
{
  int i;
  for (i = 0; i < strlen(ciphertext); i++)
    ciphertext[i] -= shift;
}

/******************************************************************************
 * [TODO] FUNCTION IMPLEMENTATIONS
 *
 * The section area below is where you will complete the functions as described
 * in the problem specs.
 *
 * For this exercise, you are NOT ALLOWED to define any other convenience/helper
 * function.
 ******************************************************************************/

/**
 * <Provide complete function documentation>
 */
void readInputFile(String kp, String strArr[], FILE *fPtr)
{ /*
    You may declare and use your own local variables
    Do NOT use printf() nor scanf() in your final solution
    Do NOT modify/change the return type nor parameters
  */
  fPtr = fopen("phrases_1.bin","rb");
  fread(kp,sizeof(String),1,fPtr);
  fread(strArr,sizeof(String),N_PHRASES,fPtr);
}

/**
 * <Provide complete function documentation>
 */
int calculateShift(String kp)
{ /*
    You may declare and use your own local variables
    Do NOT use printf() nor scanf() in your final solution
    Do NOT modify/change the return type nor parameters
  */
  int res1, fres;
  int kplen = strlen(kp);
  
  res1 = (MAX + N_PHRASES);
  fres = res1 % kplen;
  
  
  return fres; // replace with actual return value
}

/**
 * <Provide complete function documentation>
 */
void getLongestPhrase(String result, String strArr[])
{ /*
    You may declare and use your own local variables
    Do NOT use printf() nor scanf() in your final solution
    Do NOT modify/change the return type nor parameters
  */
}

/**
 * <Provide complete function documentation>
 */
void writeOutputFile(String kp, String longestPhrase, int shift, FILE *fPtr)
{ /*
    You may declare and use your own local variables
    Do NOT use printf() nor scanf() in your final solution
    Do NOT modify/change the return type nor parameters
  */
}

/******************************************************************************
 * [TODO] COMPLETE THE MAIN FUNCTION
 *
 * This is the main function. The fuctions you implemented above MUST BE CALLED
 * properly here.
 ******************************************************************************/
int main()
{
  String phrases[N_PHRASES];
  String keyPhrase, longestPhrase;
  int shift;

  FILE *fIn, *fOut;
  readInputFile(keyPhrase,phrases,fIn);
  calculateShift(keyPhrase);

  // You are NOT allowed to declare any other variables in main()

  return 0;
}
