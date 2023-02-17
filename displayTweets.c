#include "headerA3.h"

void displayTweets(tweet * tweetList)
{

   tweet *temp = tweetList;
   while ( temp != NULL)
    {
      char userN[51]; 			// the userid / username of the person who wrote the tweet
      char textN[141];

      strcpy(userN,temp->user);
      if(userN[strlen(userN) - 1] == '\n')   // using strcpy to remove the newline so that the printed fornat is correct
   {
     userN[strlen(userN)-1]='\0';
   }
      strcpy(textN,temp->text);
      if(textN[strlen(textN) - 1] == '\n')
   {
     textN[strlen(textN)-1]='\0';
   }

        printf("%d: ",  temp->id);  //printing the tweet and all the details
        printf("Created by ");
        printf("%s: ",userN);
        printf("%s\n",textN);
        temp = temp->next;   // moving to the next tweet
    }



}
