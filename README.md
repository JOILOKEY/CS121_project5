**(lab) file IO**

Start by creating a file input stream so the program can read from a file.

Try to open the file called data.csv.

print an error message like:
**"File could not be opened."**

End the program at this point so nothing breaks.

Loop through the file one line at a time using a while loop.

For each line:

Read the whole line into a string.

Create a stringstream object to help split the line up.

Use getline with a comma as the separator to break the line into 3 parts:

First part → store it as a string, then convert it to an integer.

Second part → store it as a string, then convert it to an integer.

Third part → this is a word or short phrase, store it as a string.

Remove any extra spaces at the front of the word, if needed.

Add the two numbers together to get how many times to repeat the word.

Use a for loop to print the word that many times, with a space in between.

After printing the word, move to the next line.

Keep repeating this process for every line in the file.

When the file is finished, close it and end the program.
