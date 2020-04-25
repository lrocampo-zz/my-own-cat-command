/**
 * \file            mi_cat.c
 * \brief           This program does the same thing as the cat command in any Unix-like operating system
 * \author          Lautaro R. Ocampo
 * \date            Dec 5, 2019
 * \details         Use makefile for compiling and linking
 *                  execution: ./mi_cat diodos.txt
 */

#include <stdio.h>

/**
 * \fn      int main()
 * \brief   main function
 * \author  Lautaro R. Ocampo
 * \date    Dec 5, 2019
 * \return  0 if everything goes well and -1 if something goes wrong
 */

int main(int argc, char** argv) {

    FILE *fp; 
    char aux;
    int status = 0;
    // Lets check if main arguments are ok
    if(argc == 2) {
        fp = fopen(argv[1], "r"); 
        if (fp != NULL) {
            // Reads characters one by one and then print them in STDOUT
            while (feof(fp) == 0) {
                aux = fgetc(fp);
                if(aux != EOF) {
                    fprintf(stdout, "%c", aux);
                }    
            }
            fclose(fp);
        }
        // Errors!
        else { 
            printf("Something went wrong while opening your file\n");
            status = -1;
        }
    }
    else {
        printf("Invalid arguments\n");
        status = -1;
    }

    return status;
}
