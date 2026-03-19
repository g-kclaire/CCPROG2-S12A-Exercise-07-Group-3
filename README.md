# Decoder: A Coding Exercise on Files

> *If you don't have a built-in markdown viewer, you can copy the content of this file and paste it into <https://markdownlivepreview.org/> to view it formatted.*

The goal of this exercise is to:

- Design and implement algorithms on an array of structures
- Observe proper code documentation
- Review and strengthen previously learned concepts

## Folder Content

- [`DECODER-LastName.c`](`DECODER-LastName.c`): The skeleton code containing some initial code that you need to complete
- [`defs.h`](defs.h): Contains the constants, typedefs, and function prototypes for the functions you need to implement
- [`phrases_1.bin`](phrases_1.bin): The binary file that will serve as input for this coding exercise
- [`phrases_2.bin`](phrases_2.bin): For an extra challenge AND bonus points, use this as input instead of [`phrases_1.bin`](phrases_1.bin)

## Restrictions

While you are in the PROG series, you are **NOT ALLOWED** to do the following:

- Declare and use global variables (i.e., variables declared outside any function)
- Use `exit`, `goto` (i.e., to jump from code segments to code segments), `break` (except in `switch` statements), or `continue` statements
- Use `return` statements to prematurely terminate a loop, function, or program
- Use `return` statements in `void` functions
- Call the `main()` function to repeat the process instead of using loops

In addition to the general restrictions above:

- You are **NOT ALLOWED** to include other library/header other than those already in the template
- You are **NOT ALLOWED** to use any other string function except for `strlen`, `strcpy`, `strcat`, `strcmp`

## Activity Instructions

1. Read and understand the materials provided to you. Instructions for the functions you need to implement are in the [Problem Statement](#problem-statement).
2. Implement your solution. Ensure that your final solution is able to compile with the following command:

    ```shell
    gcc -Wall -std=c99 <filename.c> -o <output>
    ```

3. The program must not output anything in the terminal. It should only produce the output text file.
4. Bonus points are awarded for proper and complete function documentation. This means it has a function description, a list of parameters with description, and if it returns something, a description of the return value.
   - You may refer to this [link for more information](https://www.doxygen.nl/manual/docblocks.html#cppblock)

## Problem Statement

For this exercise, you are provided a binary file (choose only 1 between `phrases_1.bin` or `phrases_2.bin`) that contains 1 key phrase and another set of 50 phrases.

- All 51 phrases are encoded with a simple ASCII shift cipher. This means that each character is shifted forward by a certain value.
  - For example, if the shift is 2, then `'A'` -> `'C'`, `'B'` -> `'D'`, ...,  `'Z'` -> `'\'` (`'Z'` has ASCII code 90, `'\'` has ASCII code 92). If the original text (aka plaintext) is `Hello!`. When encoded, the resulting ciphertext is `Jgnnq#`.
- The `decode()` function is already provided for you. This function will handle decoding the ciphertext `Jgnnq#` back to its plaintext form of `Hello!`.

Your task is to:

1. Read the key phrase and array of phrases from the input binary file
2. Determine the shift value given the key phrase
3. Determine the longest phrase from the set of 50 phrases
4. Output the decoded key phrase and the longest phrase to a text file

To achieve the tasks above, implement the function prototypes described in the next sections.

### `void readInputFile(String kp, String strArr[], FILE *fPtr);`

This function reads the input binary file and stores the key phrase in `kp` and the array of phrases in `strArr`. Note that the key phrase is separate from the set of 50 phrases. Depending on which input binary file you prefer, refer to [`phrases_1.bin` Input Format](#phrases_1bin-input-format) or [`phrases_2.bin` Input Format](#phrases_2bin-input-format) to understand how they are formatted.

### `int calculateShift(String kp);`

This function calculates the shift value. This shift value is used when it is time to decode the phrases. The formula for the shift value is:
> The remainder when the sum of the maximum number of characters in a string (including the null byte) and maximum number of phrases (not counting the key phrase) is divided by the length of the key phrase (`kp`)

### `void getLongestPhrase(String result, String strArr[]);`

Given an array of phrases, this function determines which of them is the longest phrase. The longest phrase is stored in `result`.

### `void writeOutputFile(String kp, String longestPhrase, int shift, FILE *fPtr);`

This function outputs the decoded key phrase and the longest phrase to a text file with the filename `answer.txt`. Refer to [`answer.txt` Output Format](#answertxt-output-format) to see the format of the expected output file. The `decode()` function is already provided for you.

### `int main();`

Complete the `main()` function by properly calling the functions you've implemented above. You are NOT allowed to declare any other variables in main(). The program must not output anything in the terminal. It should only produce the output text file.

## I/O Format

### `phrases_1.bin` Input Format

```text
<key phrase>
<array of phrases>
```

### `phrases_2.bin` Input Format

```text
<int value of padding1>
<int value of padding2>
<int value of padding3>
<a padding of size: padding1 bytes>
<key phrase>
<a padding of size: padding2 bytes>
<array of phrases>
<a padding of size: padding3 bytes>
```

### `answer.txt` Output Format

```text
Shift: <computed shift value><newline>
Key Phrase: <decoded key phrase><newline>
Longest Phrase: <decoded longest phrase><newline>
```
