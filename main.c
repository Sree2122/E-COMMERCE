#include <stdio.h>
#include "product.h"

int main() {
    int choice;

    // Load data (if implemented)

    do {
        printf("\nE-commerce Product Management System\n");
        printf("1. Add Product\n");
        printf("2. List Products\n");
        printf("3. Find Product\n");
        printf("4. Update Product\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int id, quantity;
                char name[MAX_NAME_LENGTH], description[MAX_DESCRIPTION_LENGTH];
                float price;
                printf("Enter product ID: ");
                scanf("%d", &id);
                printf("Enter product name: ");
                scanf(" %[^\n]s", name);
                printf("Enter product description: ");
                scanf(" %[^\n]s", description);
                printf("Enter price: ");
                scanf("%f", &price);
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                add_product(id, name, description, price, quantity);
                break;
            }
            case 2:
                list_products();
                break;
            case 3: {
                int id;
                printf("Enter product ID to find: ");
                scanf("%d", &id);
                find_product(id);
                break;
            }
            case 4: {
                int id, quantity;
                char name[MAX_NAME_LENGTH], description[MAX_DESCRIPTION_LENGTH];
                float price;
                printf("Enter product ID to update: ");
                scanf("%d", &id);
                printf("Enter new product name (or press Enter to keep current): ");
                scanf(" %[^\n]s", name);
                printf("Enter new product description (or press Enter to keep current): ");
                scanf(" %[^\n]s", description);
                printf("Enter new price (or -1 to keep current): ");
                scanf("%f", &price);
                printf("Enter new quantity (or -1 to keep current): ");
                scanf("%d", &quantity);
                update_product(id, name, description, price, quantity);
                break;
            }
            case 0:
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice!= 0);

    // Save data (if implemented)
    return 0;
}