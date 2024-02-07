#include "headers.h"
#include "struct.h"
#include "files.h"
void add_car() {
    car tempcar;
    // Open the file in write mode
    fp = fopen(filename, "w");

    // Check if file was opened successfully
    if (fp == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Prompt user to enter car information
    printf("Enter car information:\n");
    printf("Car Name: ");
    scanf("%s", tempcar.carname);
    printf("Model: ");
    scanf("%s", tempcar.model);
    printf("Price: ");
    scanf("%lf", &tempcar.price);

    // Write car information to the file
    fprintf(fp,"------------------------------------------------------------");
    fprintf(fp, "Name: %s\nModel: %s\nPrice: %.2lf\n\n", tempcar.carname, tempcar.model, tempcar.price);

    // Close the file
    fclose(fp);

    printf("Car information has been saved to %s\n", filename);

}

