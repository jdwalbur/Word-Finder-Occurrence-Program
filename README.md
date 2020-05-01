# Word-Finder-Occurrence-Program
This program uses a both C++ and Python to highlight and count the number of occurrences a phase has in a text file

Instructions for running the program:
1) Download WordFinder.py and main.cpp. These are required.
2) Place the two files into a foulder that you know the location of. Desktop is recommened.
3) Compile the main.cpp file from the foulder you placed it in.
4) Run the compiled file.

Instructions for using the program:
You will be prompted to enter s or f depending on if you want to check a string or a text file. Next you will be asked to enter the phrase that you want to look for. Then you will be asked to enter your string or the name of the text file you want to read from. Once everything has been entered correctly the WordFinder.py will be ran and output.txt will be updated in the foulder.

About main.cpp:
This file handles all of the user input. It lets the user enter either a string or the name of the text file they wish to use. The phrase that the use wishes to find. It then copys over the string or the contents of the text file into inputfile.txt. The first line of this file contains the word/phrase that the user is trying to find. This line is how the python file knows what word to find.

About WordFinder.py:
This file counts the number of occurrences of the word/phrase in inputfile.txt and marks each occurrence with **phrase**. It uses the information processed and writes it all to the outputfile.txt

Both the inputfile.txt and outputfile.txt can be found in the foulder that contains WordFinder.py and main.cpp after the program has been ran.

userfile.txt can be used as a test file and is not necessary. 

Demonstration Video: https://youtu.be/4sfGxa59HI4
