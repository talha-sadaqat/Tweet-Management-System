# Tweet-Management-System
Engineered a tweet management system that allows users to create new tweets, display tweets, search tweets by keyword, count stop words in tweets, delete a tweet, save tweets to a file, and load tweets from a file.


This code implements a simple command-line interface to manage tweets. The program allows the user to create a new tweet, display all tweets, search for a tweet by keyword, count how many words are stop words, delete a tweet, save tweets to a file, and load tweets from a file.

The code uses a linked list to store tweets. The tweet is represented by the tweet struct and contains the tweet's message and the date it was created. The linked list is implemented using the tweetList struct, which contains a pointer to the head of the list.

The main function displays a menu of options to the user and prompts them to select one. Depending on the user's choice, the corresponding function is called to perform the requested action. For example, if the user selects "Create a new tweet," the program calls createTweet to create a new tweet and addNodeToList to add the tweet to the linked list.

To use the program, the user should compile and run the code in their preferred development environment. They will be prompted to select an option from the menu by entering a number between 1 and 8. The program will execute the corresponding action and return to the menu.

The program assumes that the user will enter valid input, and there is no error handling for invalid input.

Note: The program is written in C and depends on the header file "headerA3.h."



HOW TO RUN AND COMPILE THE PROGRAM?
put all my files in one folder and open the terminal and type in "make" and then type in "./a3"
if you want to remove the ".o" type "make clean"
if non of this work please compile manually and make sure to include all the filenames



SECTION EXPLAINING COMPLETED COMPONENTS

mainA3.c
Main file with the selection option to choose different task

makefile
makefile makes it easir to run codes with lots of source file that are linked 

saveToFile.c
code which I used to save tweets to a file selected by the user

searchTweet.c
I used this to search for keywords that the user wants to find out if it exits in any tweet, furthermore it should print the tweet in which that keyword is found

loadFromFile.c
Used this code to load tweets from a file that user selected and add it to the end of current tweetList

headerA3.h
contains all the function protypes 

displayTweet.c
Used this to dispaly all the tweets in the linked list

deleteTweet.c
this function deletes the nth tweeth which is selected by the user and and rejoins the linked list deleting that tweet and freeing its space

createTweet.c
This code is used to create new tweets allocate memory for them and add them to the end of the linked list

countStopWords.c
This code counts the number of stopwords present in the tweet , and if ni stop word is present it prints zero stop words

addNode.c
This code is used to take the new tweet created and add it to the end of the linked list 
