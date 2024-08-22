#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CODE_LENGTH 50000  

int main() {
    char program[MAX_CODE_LENGTH];
    program[0] = '\0';      
    printf("Enter your C program code (enter 'END' on a new line to finish):\n");
    
    char buffer[1000];
    size_t total_length = 0;
    
    while (1) {
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            printf("Error reading input.\n");
            return 1;
        }
        
        if (strcmp(buffer, "END\n") == 0) {
            break;
        }
        
        size_t buffer_length = strlen(buffer);
        
        if (total_length + buffer_length >= MAX_CODE_LENGTH - 1) {
            printf("Input exceeds maximum allowed length. Aborting.\n");
            return 1;
        }
        
        strcat(program, buffer);
        total_length += buffer_length;
    }
    
    FILE *fp = fopen("temp.c", "w");
    if (fp == NULL) {
        perror("Error creating temporary file");
        return 1;
    }
    
    fprintf(fp, "%s", program);
    fclose(fp);
    int result = system("gcc -fsyntax-only -Wall -Werror temp.c > output.txt 2>&1");
    
    if (result == 0) {
        printf("Syntax check passed!\n");
    } else {
        printf("Syntax check failed.\n");
        FILE *output_file = fopen("output.txt", "r");
        if (output_file) {
            char output_line[1000];
            while (fgets(output_line, sizeof(output_line), output_file)) {
                printf("%s", output_line);
            }
            fclose(output_file);
        }
    }
    
   
    remove("temp.c");
    remove("output.txt");
    
    return 0;
}

