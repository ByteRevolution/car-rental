#include<stdio.h>
int main()
{
    printf("\n********************************************\n");

    FILE *file = fopen("file.txt", "a"); // Open the file for reading

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char sentence[100]; // Assuming maximum sentence length is 100 characters

    fprintf(file,"this is the new content \n");
    return 0;
}


