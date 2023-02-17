#include "headerA3.h"

void countStopWords(tweet * tweetList)
{
tweet *temp = tweetList;
int numStopWords =0;
int numTweets =0;
char stopWords[25][5]={"a","an","and","are","as","at","be","by","for","from","has","he","in","is","it","its","of","on","that","the","to","was","were","will","with"};
char *word;
char textN[141];
int i;

 while(temp!=NULL)
   {

     strcpy(textN,temp->text);
     if(textN[strlen(textN) - 1] == '\n')
    {                                               // removing the newline charcter from the scanned text if there is any
      textN[strlen(textN)-1]='\0';
     }

     char *text1 =(char*) malloc(sizeof(char)*(strlen(textN)+1));   // creating a temporary varibale to store all the characters so that strtok doesnt modify the original tweet
     for(int i =0; i<strlen(textN);i++)
     {
        text1[i]= textN[i];
     }

      word = strtok(text1," ,:;?!");  // using strtok to tokenise any word and note that word ends with space colon semi colon etc
      while(word!=NULL)
       {
           for(i=0; i<25; i++)
           {
             if(strcmp(word,stopWords[i])==0)   // loop to compare every single word with the stop words provided
               {
                 numStopWords = numStopWords+1;   // couting the stop word if found any
                }

            }

          word=strtok(NULL," ,:;?!\n\t");  // using strtok to move to the next word
        }

        numTweets = numTweets+1;    // counting thr number of tweets
        temp = temp ->next;    // moving to the next tweet

    }
    printf("Across %d tweets, %d stop words were found.\n",numTweets,numStopWords);   // printing the result
}
