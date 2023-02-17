A3: mainA3.o userId.o saveToFile.o searchTweet.o displayTweets.o deleteTweet.o createTweet.o countStopWords.o addNode.o saveToFile.o loadFromFile.o
	gcc -Wall -std=c99 mainA3.o userId.o saveToFile.o searchTweet.o displayTweets.o deleteTweet.o createTweet.o countStopWords.o loadFromFile.o addNode.o -o a3
addNode.o: addNode.c headerA3.h
	gcc -Wall -std=c99 -c addNode.c
countStopWords.o: countStopWords.c headerA3.h
	gcc -Wall -std=c99 -c countStopWords.c
createTweet.o: createTweet.c headerA3.h
	gcc -Wall -std=c99 -c createTweet.c
deleteTweet.o: deleteTweet.c headerA3.h
	gcc -Wall -std=c99 -c deleteTweet.c
displayTweets.o: displayTweets.c headerA3.h
	gcc -Wall -std=c99 -c displayTweets.c
searchTweet.o: searchTweet.c headerA3.h
	gcc -Wall -std=c99 -c searchTweet.c
userId.o: userId.c headerA3.h
	gcc -Wall -std=c99 -c userId.c
loadFromFile.o:loadFromFile.c headerA3.h
	gcc -Wall -std=c99 -c loadFromFile.c
saveToFile.o: saveToFile.c headerA3.h
	gcc -Wall -std=c99 -c saveToFile.c
mainA3.o: mainA3.c headerA3.h
	gcc -Wall -std=c99 -c mainA3.c
clean:
	rm *.o
