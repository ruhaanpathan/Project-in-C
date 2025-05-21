#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 10


typedef struct {
    int id;
    char name[20];
    int qty;
    float price;
} Product;


void addProduct(Product *p) {
    printf("Enter Product ID: ");
    scanf("%d", &p->id);
    printf("Enter Product Name: ");
    scanf("%s", p->name);
    printf("Enter Quantity: ");
    scanf("%d", &p->qty);
    printf("Enter Price: ");
    scanf("%f", &p->price);
}


void updateProduct(Product *p, int id) {
    if (p->id == id) {
        printf("Enter New Quantity: ");
        scanf("%d", &p->qty);
    }
}


void displayInventory(Product *p, int n) {
    float totalValue = 0;
    printf("\nID\tName\t\tQty\tPrice\n");
    printf("-----------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%-10s\t%d\t%.2f\n", p[i].id, p[i].name, p[i].qty, p[i].price);
        totalValue += p[i].qty * p[i].price;
    }
    printf("Total Inventory Value: %.2f\n\n", totalValue);
}


void searchProduct(Product *p, int n, int id) {
    for (int i = 0; i < n; i++) {
        if (p[i].id == id) {
            printf("Product Found: %s, Qty: %d, Price: %.2f\n", p[i].name, p[i].qty, p[i].price);
            return;
        }
    }
    printf("Product with ID %d not found.\n", id);
}


int main() {
    Product inventory[MAX_PRODUCTS];
    int n = 0, choice, id;

    do {
        printf("\nMenu:\n");
        printf("1. Add Product\n");
        printf("2. Update Product Quantity\n");
        printf("3. Display Inventory\n");
        printf("4. Search Product by ID\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (n < MAX_PRODUCTS) {
                    addProduct(&inventory[n++]);
                } else {
                    printf("Inventory is full.\n");
                }
                break;
            case 2:
                printf("Enter Product ID to Update: ");
                scanf("%d", &id);
                for (int i = 0; i < n; i++) {
                    updateProduct(&inventory[i], id);
                }
                break;
            case 3:
                displayInventory(inventory, n);
                break;
            case 4:
                printf("Enter Product ID to Search: ");
                scanf("%d", &id);
                searchProduct(inventory, n, id);
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 0);

    return 0;
}
/*
PS C:\Users\Ruhaan Pathan\Ruhaan\Python\Practice\.vscode> gcc icp3.c
PS C:\Users\Ruhaan Pathan\Ruhaan\Python\Practice\.vscode> .\a.exe   

Menu:
1. Add Product
2. Update Product Quantity
3. Display Inventory
4. Search Product by ID
0. Exit
Enter your choice: 1
Enter Product ID: 1
Enter Product Name: iphone
Enter Quantity: 5
Enter Price: 100

Menu:
1. Add Product
2. Update Product Quantity
3. Display Inventory
4. Search Product by ID
0. Exit
Enter your choice: 3

ID      Name            Qty     Price
-----------------------------------
1       iphone          5       100.00
Total Inventory Value: 500.00


Menu:
1. Add Product
2. Update Product Quantity
3. Display Inventory
4. Search Product by ID
0. Exit
Enter your choice: 2
Enter Product ID to Update: 1
Enter New Quantity: 10

Menu:
1. Add Product
2. Update Product Quantity
3. Display Inventory
4. Search Product by ID
0. Exit
Enter your choice: 3

ID      Name            Qty     Price
-----------------------------------
1       iphone          10      100.00
Total Inventory Value: 1000.00


Menu:
1. Add Product
2. Update Product Quantity
3. Display Inventory
4. Search Product by ID
0. Exit
Enter your choice: 0
Exiting program.*/