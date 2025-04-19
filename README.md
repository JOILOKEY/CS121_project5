**(lab) file IO**

Start the program.

Try to open the file called data.csv.

If the file can’t be opened (like if the file isn’t found), print an error message:
"Error opening file!"

Don't continue the program if the file can't be opened.

Use a loop to read the file one line at a time.

For each line in the file:

Store the full line as a string (each line looks like 1, 2, this).

Create a stringstream to help break the line into parts using the comma as the separator.

First, extract the first number (before the first comma), store it as a string, and convert it into an integer (num1).

Next, extract the second number (between the commas), and convert it to another integer (num2).

Then, extract the last part (the word after the second comma) and store it as a string (word).

Add the two numbers together to get the total number of times the word should be printed (sum = num1 + num2).

Use a loop to print the word sum times, with a space after each one.

After printing the word multiple times, print a new line to move to the next row.

After the file is fully read and processed, close the file.

End the program.
