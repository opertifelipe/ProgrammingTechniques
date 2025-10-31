Exercise 5
Skills: IO on files, manipulation of characters. Loops.
Text: A file contains a text with an unknown number of characters. The aim of the program
is to create a second file where the characters of the original file are re-encoded as follows.
• Numeric characters
Numeric characters (‘0’..’9’) should be re-encoded into the numeric character that is k
positions later in the ASCII table, with k starting from 0 and incremented by 1 each time
a new numeric character is re-encoded. (N.B.: it is a modulo 10 operation: after 9, the
count starts again from 0).
For example, if the file starts as follows: “Number 248 is even”:
•
- ‘2’ (k starts from 0) should be re-encoded as ‘2’+0 = ‘2’ (k becomes 1)
- ‘4’ should become ‘4’+1 = ‘5’ (k becomes 2)
- ‘8’ should become ‘8’+2 = ‘0’ (after ‘9’ we start again from ‘0’).
Alphabetic characters:
Substitute lower case characters with upper case ones and vice versa.
The encoding result should be stored in a second file (the names of the input and output
files are acquired from keyboard).
Write two different functions, respectively able to perform the encoding (from original
source file to encoded) and the decoding (reverse operation: from encoding to original).
The prototypes of the two functions should be
int encoding(FILE *fin, FILE *fout);
int decoding(FILE *fin, FILE *fout);
In case of error, the functions should return 0. In case of successful operation, they should
return the number of characters that were printed on the output file.
The main program should:
1. allow the user to decide (with a corresponding input from keyboard) whether to
perform an encoding or a decoding operation;
2. open the input and output files;
3. based on the decision of the user, call either the encoding or the decoding function
on the opened files.



Number 248 is even
Number 531 is odd
nUMBER 250 IS EVEN
nUMBER 876 IS ODD