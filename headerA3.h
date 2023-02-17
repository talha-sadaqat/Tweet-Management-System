#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ctype.h"

typedef struct microtweet{
    int id; 				//unique integer value
    char user[51]; 			// the userid / username of the person who wrote the tweet
    char text[141]; 		// the text of the tweet

    struct microtweet *next;  //dynamic connection to the next tweet
}tweet;   // using typedef


// menu functions
tweet * createTweet( tweet * tweetList);

void displayTweets(tweet * tweetList);

int searchTweetsByKeyword(tweet * tweetList);

void countStopWords(tweet * tweetList);

void deleteTweet(tweet ** tweetList);

void saveTweetsToFile(tweet * tweetList);

void loadTweetsFromFile(tweet ** tweetList);

// linked list function - required after you create a tweet or load tweets from a file
void addNodeToList(tweet**tweetList,tweet * node);

int userIdSum(char*username , char*tweet);
