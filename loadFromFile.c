#include "headerA3.h"


void loadTweetsFromFile(tweet **tweetList)
{
  FILE*fptr;    // file pointer
  tweet *temp = NULL;   // tmepory tweet
  char line [142];
  char*word;    // word pointer to character for strtok
  char file [20];

  printf("Enter a filename to load from : ");
  scanf("%s",file);   // scanning filename

  fptr =fopen(file,"r");    // openning file for read mode
  if (fptr == NULL)
   {
       printf("File not found\n");    // error checking if file not found
       return;
   }

   while ( fgets(line,141,fptr)!=NULL)    // usinf fegts to check when the NULL pointer has been reached
   {
       temp=(tweet*)malloc(sizeof(tweet));   // dynamically allocating memeory

       if (line[strlen (line) - 1] == '\n' || line[strlen (line) - 1] == ',')
       {
          line[strlen (line) - 1] = '\0';   // replacing any end charcters that are newline or comma with null characyer
        }

      if (line[strlen (line) - 2] == ',')
       {
         line[strlen (line) - 2] = '\0';   // checking to see if doubel comma has been adedd at the end
        }

        word = strtok(line,",");
        temp->id = atoi(word);  // using atoi to convet char into integer

        word = strtok(NULL,",");
        strcpy(temp->user,word);   // usong strtok to continue and tokensie words or snetcnes between commas

        word = strtok(NULL,"\n");
        strcpy(temp->text,word);

        addNodeToList(tweetList,temp);   // adding the tweets to the e nd of linked list
   }

   printf("Tweets imported\n");

   fclose(fptr);   // closing the file

}
