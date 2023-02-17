#include "headerA3.h"

tweet * createTweet(tweet *tweetList)
{
    tweet * temp;
    temp = (tweet*)malloc(sizeof(tweet)); // Dynamically allocating memory for new tweet
    tweet*temp2;
    temp2=(tweet*)malloc(sizeof(tweet));


    printf("Enter your username: ");
    fgets(temp->user, sizeof(temp->user), stdin);   // enter the username using fgets



    printf("Enter the user's tweet: ");
        fgets(temp->text, sizeof(temp->text), stdin);    // enter the tweet using fgets

        while(strlen(temp->text) <0 || strlen(temp->text)>141 )
        {
           printf("Enter a tweet that is less then 141 characters\n");  // checking for edge cases
           fgets(temp->text, sizeof(temp->text), stdin);
        }


    int userIdTotal = 0;
    userIdTotal = userIdSum(temp->user, temp->text);           // this fucntion is sued to calcute the IDnumber
    temp->id = userIdTotal;   // assinging uniquw ID to temp->id

  if (tweetList !=NULL)
  {
     temp2 =tweetList;    // using this fucntion to check if same unique id has been genrated
     while(temp2!=NULL)
     {
       if(temp2->id == temp->id)   // going through the whole linked list to check for same ID
       {
         temp->id =userIdTotal +rand()%999+1;
       }
       temp2=temp2 ->next;     // moving ot next tweet
     }
  }
    printf("Your computer-generated userid is : %d.\n\n", temp->id);   // printing the ID

    temp -> next = NULL;   // assigning the next to a null as we must store tweet at the end




    return temp;
}
