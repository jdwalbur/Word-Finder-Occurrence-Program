inputfile = open('inputfile.txt', 'r')
outputfile = open('outputfile.txt', 'w')

#Use the first line to get the phrase we are looking to find
firstLine = inputfile.readline()

#Copy first line to output file
outputfile.write(firstLine)

#Remove beginning portion
lookingFor = firstLine.replace('Looking for: ', '')
lookingFor = lookingFor.strip()

lines = inputfile.readlines()
wordCount = 0;
for line in lines:
	#loop through every word in the line
	for word in line.split():
		#if the word matches the word we are looking for add 1 to the count
		if(word == lookingFor):
			wordCount = wordCount + 1

#print the number of times the phrase occurs to the outputfile
outputfile.write("Number of occurrences found: " + str(wordCount) + "\n")

#loop through each line in lines again
for line in lines:
	outputfile.write(line.replace(lookingFor, '**'+lookingFor+'**'))

#close both files
inputfile.close()
outputfile.close()