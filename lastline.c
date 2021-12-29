#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * Driver method that takes file names as inputs from the command line arguments
 * and prints the last line of each file.
 */
int main(int argc, char *args[]) {   // number of args, array with file names

    for (int i = 1; i < argc; i++) { // loop through each file
        FILE *f;                     // create file object
        f = fopen(args[i], "r");     // open file with read only permission

        char buf[1024];              // set buffer to 1024 characters

        while(!feof(f)) {            // while not at end of file
            fgets(buf, 1024, f);     // parses until end of file
        } // while
        printf("%s",buf);            // prints the last line of file
        fclose(f);                   // closes file
    } // for

} // main
