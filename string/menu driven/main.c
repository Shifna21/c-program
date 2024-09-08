#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
struct Book {
    int bookID;
    char title[100];
    char author[50];
    float price;
};
void addBook(struct Book books[], int *count);
void displayBooks(const struct Book books[], int count);
void updateBookPrice(struct Book books[], int count);
void displayBookByID(const struct Book books[], int count);
void findBookWithHighestPrice(const struct Book books[], int count);

int main() {
    struct Book books[MAX_BOOKS];
    int count = 0;
    int choice;

    do {
        printf("\nLibrary Management System\n");
        printf("1. Add a New Book\n");
        printf("2. Display All Books\n");
        printf("3. Update Book Price\n");
        printf("4. Display Book by ID\n");
        printf("5. Find Book with Highest Price\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addBook(books, &count);
                break;
            case 2:
                displayBooks(books, count);
                break;
            case 3:
                updateBookPrice(books, count);
                break;
            case 4:
                displayBookByID(books, count);
                break;
            case 5:
                findBookWithHighestPrice(books, count);
                break;
            case 6:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}

void addBook(struct Book books[], int *count) {
    if (*count >= MAX_BOOKS) {
        printf("Cannot add more books. Maximum limit reached.\n");
        return;
    }

    struct Book newBook;
    printf("Enter Book ID: ");
    scanf("%d", &newBook.bookID);
    for (int i = 0; i < *count; i++) {
        if (books[i].bookID == newBook.bookID) {
            printf("Book ID already exists. Please enter a unique Book ID.\n");
            return;
        }
    }

    printf("Enter Book Title: ");
    getchar(); 
    fgets(newBook.title, sizeof(newBook.title), stdin);
    newBook.title[strcspn(newBook.title, "\n")] = 0; 

    printf("Enter Book Author: ");
    fgets(newBook.author, sizeof(newBook.author), stdin);
    newBook.author[strcspn(newBook.author, "\n")] = 0; 

    printf("Enter Book Price: ");
    scanf("%f", &newBook.price);

    books[*count] = newBook;
    (*count)++;
    printf("Book added successfully.\n");
}

void displayBooks(const struct Book books[], int count) {
    if (count == 0) {
        printf("No books available.\n");
        return;
    }

    printf("\nBook List:\n");
    for (int i = 0; i < count; i++) {
        printf("Book ID: %d\n", books[i].bookID);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
        printf("----------------------\n");
    }
}
void updateBookPrice(struct Book books[], int count) {
    if (count == 0) {
        printf("No books available.\n");
        return;
    }

    int bookID;
    printf("Enter Book ID to update price: ");
    scanf("%d", &bookID);

    for (int i = 0; i < count; i++) {
        if (books[i].bookID == bookID) {
            printf("Current Price: %.2f\n", books[i].price);
            printf("Enter New Price: ");
            scanf("%f", &books[i].price);
            printf("Price updated successfully.\n");
            return;
        }
    }

    printf("Book ID not found.\n");
}
void displayBookByID(const struct Book books[], int count) {
    if (count == 0) {
        printf("No books available.\n");
        return;
    }

    int bookID;
    printf("Enter Book ID to display: ");
    scanf("%d", &bookID);

    for (int i = 0; i < count; i++) {
        if (books[i].bookID == bookID) {
            printf("Book ID: %d\n", books[i].bookID);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Price: %.2f\n", books[i].price);
            return;
        }
    }

    printf("Book ID not found.\n");
}
void findBookWithHighestPrice(const struct Book books[], int count) {
    if (count == 0) {
        printf("No books available.\n");
        return;
    }

    int highestIndex = 0;
    for (int i = 1; i < count; i++) {
        if (books[i].price > books[highestIndex].price) {
            highestIndex = i;
        }
    }

    printf("Book with the Highest Price:\n");
    printf("Book ID: %d\n", books[highestIndex].bookID);
    printf("Title: %s\n", books[highestIndex].title);
    printf("Author: %s\n", books[highestIndex].author);
    printf("Price: %.2f\n", books[highestIndex].price);
}
