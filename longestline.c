#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * Driver method that takes file names as inputs from the command line arguments
 * and prints the length of the longest line from each file.
 */
int main(int argc, char *args[]) {         // number of args, array with file names

    for (int i = 1; i < argc; i++) {       // loop through each file
        FILE *f;                           // create file object
        f = fopen(args[i], "r");           // open file with read only permission

        int longest = 0;                   // int value storing length of longest line
        int current = 0;                   // int value storing length of current line
        while (!feof(f)) {                 // while not at end of file
            fseek(f, 0, SEEK_CUR);         // steps through file character by character

            if ((char)fgetc(f) != '\n') {  // increments current if newline character not reached
                current++;
            } else {
                if (current > longest) {   // if newline reached, evaluates if current value
                    longest = current;     // is greater than the longest value
                } // if
                current = 0;               // current value reset to 0
            } // if
        } // while
        if (current > longest) {           // at end of file, evaluates if current value
            longest = current - 1;         // is greater than the longet value
        } // if
        printf("%d \n", longest);          // prints the length of the longest line
    } // for

} // main
