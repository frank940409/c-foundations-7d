#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n = 2;                 // number of names to read
    size_t maxlen = 50;        // max length per name (including '\0')

    // Allocate an array of n char* pointers
    char **Name = malloc(n * sizeof *Name);
    if (!Name) {
        fprintf(stderr, "Memory allocation failed!\n");
        return 1;
    }

    // Allocate a buffer for each name
    for (int i = 0; i < n; i++) {
        Name[i] = malloc(maxlen);
        if (!Name[i]) {
            fprintf(stderr, "Memory allocation failed!\n");
            return 1;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("Enter the student name #%d: ", i + 1);
        if (fgets(Name[i], (int)maxlen, stdin) == NULL) {
            fprintf(stderr, "Input error.\n");
            return 1;
        }
        // Strip the trailing newline if present
        size_t len = strlen(Name[i]);
        if (len > 0 && Name[i][len - 1] == '\n') {
            Name[i][len - 1] = '\0';
        }
    }

    // Echo back the inputs
    for (int i = 0; i < n; i++) {
        printf("Name #%d: %s\n", i + 1, Name[i]);
    }

    // Free all allocations
    for (int i = 0; i < n; i++) {
        free(Name[i]);
    }
    free(Name);

    return 0;
}