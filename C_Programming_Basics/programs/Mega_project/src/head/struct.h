#define MAX_LICENSE_LENGTH 11
#define MAX_NAME_LENGTH 40
#define MAX_CAR_NAME_LENGTH 40
#define MAX_MODEL_NAME_LENGTH 40

struct customer{
    char name[MAX_NAME_LENGTH];
    char license[MAX_LICENSE_LENGTH];
}*user;

struct car{
    char carname[MAX_CAR_NAME_LENGTH]; 
    char model[MAX_MODEL_NAME_LENGTH];
    double price;
}*cr;
typedef struct customer customer;
typedef struct car car; 
