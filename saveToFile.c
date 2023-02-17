#include "headerA3.h"

void saveTweetsToFile(tweet * tweetList)
{

   FILE *fptr;
   char file [20];
   tweet *temp = tweetList;

   printf("Enter a filename where you would like to store your tweets:");   // enter filename
   scanf("%s",file);  // scanning the complete file
   fptr = fopen(file,"w");   // openning the file pointer

   if (fptr == NULL)
   {
       printf("File not found\n");  // if the file doesnt exist then print error message
       return;
   }

   while(temp != NULL)
   {
     char userN[51]; 			// assing the user name and tweet text tp these variables
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

       fprintf(fptr,"%d,%s,%s\n",temp->id,userN,textN);   // printing the tweet details
       temp=temp->next;
   }
   printf("Output successful!\n");
   fclose(fptr);

}
