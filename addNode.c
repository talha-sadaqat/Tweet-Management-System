#include "headerA3.h"
void addNodeToList(tweet**tweetList,tweet * node)
{

    if (*tweetList == NULL)
    {

        *tweetList = node;  // adding the tweet to the list at the beginning if no other tweet is added
    }

    else
    {
     tweet * newTemp;  // temproary tweet
     newTemp = *tweetList;
     while (newTemp->next != NULL)
       {
          newTemp = newTemp->next; // Keep moving to the next node until we reach the end
       }

        newTemp -> next = node;  // making sure that the new tweet is at the end of the list
    }
}
