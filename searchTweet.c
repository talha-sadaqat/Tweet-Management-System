#include "headerA3.h"

int searchTweetsByKeyword(tweet * tweetList)
{

 tweet *temp =tweetList;
 char scanKeyWord[141];  // will store the keyword that is scanned
 char keyword[141];

 printf("Enter a keyword to search: ");
 scanf("%s",scanKeyWord);   // scanning the keyword

 strcpy(keyword,scanKeyWord); // copying the scanned keyword to keywords

 while(temp!=NULL)
 {
   char userN[51]; 			// the userid / username of the person who wrote the tweet
   char textN[141];

   strcpy(userN,temp->user);
   if(userN[strlen(userN) - 1] == '\n')    // removing the newline charcter if there is any
{
  userN[strlen(userN)-1]='\0';
}
   strcpy(textN,temp->text);
   if(textN[strlen(textN) - 1] == '\n')
{
  textN[strlen(textN)-1]='\0';
}

    char tweet [141];
    strcpy(tweet,textN);   //copying the tweet into the variable tweet

    for(int i=0;i<strlen(keyword);i++)
    {
        keyword[i]=tolower(keyword[i]);   // making sure that all letters are lower case
    }

    for (int i=0 ; i<strlen(tweet);i++)
    {
        tweet[i]=tolower(tweet[i]);  // making sure that all letters are lower case
    }

    if(strstr(tweet,keyword)) // using strstr which checks if the scanned keywords ocuurs in tweet and it ingores the null charcater
    {
        printf("Match found for ‘%s’: %s wrote:“%s”\n",keyword,userN,tweet);   // prints if match is found
    }

    temp=temp->next;
 }
  return 0;

}
