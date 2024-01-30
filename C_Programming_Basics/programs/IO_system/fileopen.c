#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "r"); // Open the file for reading

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char sentence[100]; // Assuming maximum sentence length is 100 characters

    // Read sentences from the file using fscanf
    while (fscanf(file, "%[^\n]\n", sentence) == 1) {
        printf("Sentence: %s\n", sentence);
    }

    fclose(file); // Close the file

    return 0;
}

