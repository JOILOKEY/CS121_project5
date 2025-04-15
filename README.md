**(lab) file IO**

Create a file input object to read from a file.

Try to open the file named data.csv.

If the file doesn't open (maybe it doesn't exist or there's a typo), print an error message like "File could not be opened."

Stop the program if this happens.

Create a loop that goes through the file one line at a time.

For each line in the file:

Store the entire line as a single string.

Create a string stream (a tool to help break the line into smaller parts).

Split the line using the comma , as the separator (this is the CSV format).

Get the first number (before the first comma), and store it as a string.

Convert that string into an integer.

Get the second number (between the first and second commas), and store it as a string.

Convert that string into an integer.

Get the third value (the word after the second comma), and store it as a string.

Trim any extra spaces in front of the word.

Add the two numbers together to find out how many times to repeat the word.

Use a loop to print the word that many times, with a space after each one.

After printing the word multiple times, print a new line to move to the next row.

After reading all lines, close the file.

End the program.
