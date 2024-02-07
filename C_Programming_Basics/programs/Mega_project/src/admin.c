#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_PASSWORD_LENGTH 20
#define PASSWORD_FILE "admin_password.txt"

// Function to initialize the admin mode
void init_admin() {
    system("clear");
    printf("ENTERING ADMIN MODE...\n");
    char passwd[MAX_PASSWORD_LENGTH];
    
    // Check if password file exists
    FILE *file = fopen(PASSWORD_FILE, "r");
    if (file != NULL) {
        fscanf(file, "%s", passwd);
        fclose(file);
    } else {
        // Default password if file does not exist
        strcpy(passwd, "0000");
    }

    printf("Default password is %s if it is not changed.\n", passwd);

    int choice;
    printf("Press 1 to change the password, otherwise exit: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter new password: ");
        scanf("%s", passwd);
        printf("Password changed successfully!\n");
        
        // Store the password in the file
        file = fopen(PASSWORD_FILE, "w");
        if (file != NULL) {
            fprintf(file, "%s", passwd);
            fclose(file);
        } else {
            printf("Error: Unable to save password.\n");
        }
    } else {
        printf("Exiting...\n");
        return;
    }
}

