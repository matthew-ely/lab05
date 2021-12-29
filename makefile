
compile:
	gcc -Wall -pedantic-errors -o firstline firstline.c
	gcc -Wall -pedantic-errors -o lastline lastline.c
	gcc -Wall -pedantic-errors -o longestline longestline.c
run:
	./firstline test1.txt test2.txt test3.txt test4.txt test5.txt test6.txt test7.txt
	./lastline test1.txt test2.txt test3.txt test4.txt test5.txt test6.txt test7.txt
	./longestline test1.txt test2.txt test3.txt test4.txt test5.txt test6.txt test7.txt
clean:
	rm -f firstline
	rm -f lastline
	rm -f longestline
	rm -f *.o
