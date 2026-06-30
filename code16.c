//program to list the books in library using structure and to store the data in file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "library.txt"

struct Book {
    int id;
    char title[100];
    char author[100];
    char publication[100];
    int numberOfbooks;
    float price;
};

void addBook(void);
void listBooks(void);
void clearInputBuffer(void);
void removeNewline(char str[]);
int readBook(FILE *file, struct Book *book);
int readPrefixedLine(FILE *file, const char *prefix, char value[], size_t size);

int main(void) {
    int choice;

    while (1) {
        printf("\n---- Library Management System ----\n");
        printf("1. Add Book\n");
        printf("2. List Books\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid choice. Please enter a number.\n");
            clearInputBuffer();
            continue;
        }

        clearInputBuffer();

        switch (choice) {
            case 1:
                addBook();
                break;

            case 2:
                listBooks();
                break;

            case 3:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

void addBook(void) {
    struct Book book;
    FILE *file;

    file = fopen(FILE_NAME, "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("\nEnter book ID: ");
    scanf("%d", &book.id);
    clearInputBuffer();

    printf("Enter book title: ");
    fgets(book.title, sizeof(book.title), stdin);
    removeNewline(book.title);

    printf("Enter author name: ");
    fgets(book.author, sizeof(book.author), stdin);
    removeNewline(book.author);

    printf("Enter publication: ");
    fgets(book.publication, sizeof(book.publication), stdin);
    removeNewline(book.publication);

    printf("Enter number of books: ");
    scanf("%d", &book.numberOfbooks);
    clearInputBuffer();

    printf("Enter book price: ");
    scanf("%f", &book.price);
    clearInputBuffer();

    fprintf(file, "ID: %d\n", book.id);
    fprintf(file, "Title: %s\n", book.title);
    fprintf(file, "Author: %s\n", book.author);
    fprintf(file, "Publication: %s\n", book.publication);
    fprintf(file, "Number of Books: %d\n", book.numberOfbooks);
    fprintf(file, "Price: %.2f\n", book.price);
    fprintf(file, "---\n");

    fclose(file);

    printf("Book added successfully.\n");
}

void listBooks(void) {
    struct Book book;
    FILE *file;
    int count = 0;

    file = fopen(FILE_NAME, "r");
    if (file == NULL) {
        fprintf(stderr, "\nNo book records found.\n");
        return;
    }

    fprintf(stdout, "\n---- Books in Library ----\n");

    while (readBook(file, &book)) {
        fprintf(stdout, "\nBook %d\n", ++count);
        fprintf(stdout, "ID              : %d\n", book.id);
        fprintf(stdout, "Title           : %s\n", book.title);
        fprintf(stdout, "Author          : %s\n", book.author);
        fprintf(stdout, "Publication     : %s\n", book.publication);
        fprintf(stdout, "Number of Books : %d\n", book.numberOfbooks);
        fprintf(stdout, "Price           : %.2f\n", book.price);
    }

    if (count == 0) {
        fprintf(stdout, "No books available.\n");
    }

    fclose(file);
}

void clearInputBuffer(void) {
    int ch;

    while ((ch = getchar()) != '\n' && ch != EOF) {
    }
}

void removeNewline(char str[]) {
    str[strcspn(str, "\n")] = '\0';
}

int readBook(FILE *file, struct Book *book) {
    char line[150];

    while (fgets(line, sizeof(line), file) != NULL) {
        if (strncmp(line, "ID: ", 4) == 0) {
            if (sscanf(line, "ID: %d", &book->id) != 1) {
                return 0;
            }
            break;
        }
    }

    if (feof(file)) {
        return 0;
    }

    if (!readPrefixedLine(file, "Title: ", book->title, sizeof(book->title))) {
        return 0;
    }

    if (!readPrefixedLine(file, "Author: ", book->author, sizeof(book->author))) {
        return 0;
    }

    if (!readPrefixedLine(file, "Publication: ", book->publication, sizeof(book->publication))) {
        return 0;
    }

    if (fgets(line, sizeof(line), file) == NULL ||
        sscanf(line, "Number of Books: %d", &book->numberOfbooks) != 1) {
        return 0;
    }

    if (fgets(line, sizeof(line), file) == NULL ||
        sscanf(line, "Price: %f", &book->price) != 1) {
        return 0;
    }

    fgets(line, sizeof(line), file);

    return 1;
}

int readPrefixedLine(FILE *file, const char *prefix, char value[], size_t size) {
    char line[150];
    size_t prefixLength = strlen(prefix);

    if (fgets(line, sizeof(line), file) == NULL) {
        return 0;
    }

    if (strncmp(line, prefix, prefixLength) != 0) {
        return 0;
    }

    strncpy(value, line + prefixLength, size - 1);
    value[size - 1] = '\0';

    removeNewline(value);

    return 1;
}
}
