Task condition:
"The user enters a floating-point number. Count the number and output the integer and fractional parts separately. 
Provide for the possibility of having leading zeros in the fractional part.
Bonus: provide for the processing of input restrictions 
(for example, if a number is read as a string, then terminate the program when the specified length is exceeded).
Input example: 10.05
Output example: 10 | 05"

The program is written in the Dev-C++ application in the C programming language.
After entering the variable and reading it, we check it for the following conditions: 
as long as the character-by-character reading is not equal to the end of the line/file, the switch operator is called. 
If the constant expression is equal to any digit in the range from 0 to 9, it is displayed on the screen. 
Spaces and "minutes" characters are ignored. 
The "." sign is replaced by "|". Otherwise, the program informs us about the error.