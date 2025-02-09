#include "product.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUCTS 100

Product products[MAX_PRODUCTS];
int num_products = 0;

void add_product(int id, const char *name, const char *description, float price, int quantity);
void list_products();
Product* find_product(int id); // Helper function
void update_product(int id, const char *name, const char *description, float price, int quantity);