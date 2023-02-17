#include "headerA3.h"

int userIdSum(char*username , char*tweet)
{

  int countLength = 0;
  int tweetLength = 0;
  int usernameLength =0;
  int ascii = 0;
  int userIdSum;

  while(tweet[countLength] != '\0')
   {
      if ( tweet[countLength] != '\n')
       {
         tweetLength = tweetLength+1;   // calcuting length of tweets
       }

       countLength = countLength + 1;
    }

    while ( username[usernameLength] != '\n')
    {
      ascii = ascii +(int) username [usernameLength];   // using (int) to convert it into ascii value
      usernameLength =usernameLength+1;
    }

    userIdSum = tweetLength + ascii;  // adding the tweetlength and ascii together to genrate userId

    return userIdSum;


}
