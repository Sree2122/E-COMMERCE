#ifndef PRODUCT_H
#define PRODUCT_H

#define MAX_NAME_LENGTH 50
#define MAX_DESCRIPTION_LENGTH 200

typedef struct {
    int id;
    char name[MAX_NAME_LENGTH];
    char description[MAX_DESCRIPTION_LENGTH];
    float price;
    int quantity;
} Product;

#endif