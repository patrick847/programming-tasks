#include <stdio.h>
#include <string.h>

#define MAX 3

typedef struct {
    int id;
    char name[20];
} Record;

// Function to sort records by ID
void sortRecords(Record arr[], int n) {
    int i, j;
    Record temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].id > arr[j + 1].id) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    Record records[MAX] = {
        {3, "Alice"},
        {1, "Bob"},
        {2, "Charlie"}
    };

    printf("Records before sorting:\n");
    for (int i = 0; i < MAX; i++) {
        printf("ID: %d, Name: %s\n", records[i].id, records[i].name);
    }

    sortRecords(records, MAX);

    printf("\nRecords after sorting by ID:\n");
    for (int i = 0; i < MAX; i++) {
        printf("ID: %d, Name: %s\n", records[i].id, records[i].name);
    }

    return 0;
}
