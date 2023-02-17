#include "headerA3.h"

void deleteTweet(tweet ** tweetList)
{
    tweet*temp =*tweetList;
    int numTweets = 0;
    int selectedTweet;
    tweet *tempRemove1 = *tweetList;


    while(temp!=NULL)
    {
        numTweets=numTweets+1;
        temp = temp->next;

    }

    if(numTweets == 0)
    {
        printf("No tweet exists\n");
        return ;    // checking to see if no tweets exist
    }
    else
    {
       printf("Currently there are %d tweets.\n",numTweets);
    }
    printf("\n");
    printf("Which tweet do you wish to delete - enter value between 1 and %d: ",numTweets);
    scanf("%d",&selectedTweet);    // asking the user whihc tweet to delete

    if(selectedTweet==1)
    {
      *tweetList=tempRemove1->next;
      free(tempRemove1);      // checking to see if the tweet is the first tweet and if it is then delet it
      numTweets = numTweets -1;
      printf("Tweet %d deleted.There are now %d tweets left\n",selectedTweet,numTweets);
    }
    else
    {
        int i=0;
        selectedTweet = selectedTweet-2;
        for(i=0;i<selectedTweet;i++)
        {
            tempRemove1 = tempRemove1->next;   // code to make sure that linked list points to the tweet behind the tweet which we want to delete
        }
        tweet * tempRemove2 = tempRemove1->next;
        tempRemove1->next = tempRemove2->next;

        free(tempRemove2);  // freeing the tweet that has been removed

       selectedTweet = selectedTweet +2;
       numTweets = numTweets-1;
       printf("Tweet %d deleted. There are now %d tweets left\n",selectedTweet,numTweets);
    }

}
