#include<stdio.h>
#include"headers.h"
int main() {
    struct Car cars[MAX_CARS];
    struct Customer customers[MAX_CUSTOMERS];
    int numCars = 0;
    int numCustomers = 0;
    int choice;

    initializeCars(cars, &numCars);
    initializeCustomers(customers, &numCustomers);

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayCars(cars, numCars);
                break;
            case 2:
                rentCar(cars, numCars);
                break;
            case 3:
                returnCar(cars, numCars);
                break;
            case 4:
                addCar(cars, &numCars);
                break;
            case 5:
                updateCar(cars, numCars);
                break;
            case 6:
                removeCar(cars, &numCars);
                break;
            case 7:
                addCustomer(customers, &numCustomers);
                break;
            case 8:
                updateCustomer(customers, numCustomers);
                break;
            case 9:
                removeCustomer(customers, &numCustomers);
                break;
            case 10:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 10);

    return 0;
}

