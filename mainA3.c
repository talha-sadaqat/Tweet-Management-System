#include "headerA3.h"

int main(int argc, char * argv[])
{

    int selection;
tweet *node = NULL;      // assiginign tweet to NULL for node and tweetList
tweet *tweetList =NULL;

    while (selection != 8)
    {

    printf("1. Create a new tweet \n");

    printf("2. Display tweets\n");

    printf("3. Search a tweet (by keyword)\n");       // MENU options

    printf("4. Find how many words are “stop words”\n");

    printf("5. Delete the nth tweet\n");

    printf("6. Save tweets to a file\n");

    printf("7. Load tweets from a file\n");

    printf("8. Exit\n");

     printf("Choose a menu option: ");

    scanf("%d", &selection);
    getchar();
    fflush(stdin);    // using this to remove the newline charcater as it causes issues while scanning

    if (selection == 1)
    {
        node =createTweet(tweetList);     // this return the current tweet and tweetList is the head
        addNodeToList(&tweetList,node);    // Using this fucntion to link the nodes

    }

    else if (selection ==2)
    {
       displayTweets(tweetList);   // fucntion used to display the tweet
    }

    else if (selection ==3)
    {
      searchTweetsByKeyword(tweetList);    // fucntion used to search tweet by keyword
    }

    else if(selection ==4)
    {
      countStopWords(tweetList);    // counting stop words
    }

    else if (selection ==5)
    {
      deleteTweet(&tweetList);  // entering into fucntion delete tweet
    }

    else if (selection ==6)
    {
      saveTweetsToFile(tweetList);   // fucntion to save tweets into file
    }

    else if (selection ==7)
    {
      loadTweetsFromFile(&tweetList);   // function to load tweets from file
    }



   else if (selection == 8)
   {
      printf("Exited\n");    // if 8 is slected it will exit the program
   }

   else
   {
     printf("You have selected an invalid option Please select a number between 1 to 8 \n");  // error message for entering wrong number
   }

  }


 return 0;
}
