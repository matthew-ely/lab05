#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * Driver method that takes file names as inputs from the command line arguments
 * and prints the first line of each file.
 */
int main(int argc, char *args[]) {            // number of args, array with file names

    for (int i = 1; i < argc; i++) {          // loop through each file
        FILE *f;                              // create file object
        f = fopen(args[i], "r");              // open file with read only permission

        char buf[1024];                       // set buffer to 1024 characters
        while (fgets(buf, 1024, f) != NULL) { // while there is a next character
            printf("%s",buf);                 // prints characters
            fclose(f);                        // close file when null or newline
        } // while
    } // for

} // main
