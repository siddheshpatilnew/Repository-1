#include <stdio.h>

int main() {
    FILE *source, *destination;
    char ch;

    // Opening the source file in read mode
    source = fopen("C:\\Users\\username\\Downloads\\source.txt", "r");
    
    if (source == NULL) {
        printf("Error: source file not found \n");
        return 1;
    }

    // Opening the destination file in write mode
    destination = fopen("C:\\Users\\username\\Downloads\\destination.txt", "w");

    // Reading character by character and writing to destination
    ch = fgetc(source);
    while (ch != EOF) {
        fputc(ch, destination);
        ch = fgetc(source);
    }

    // Closing both files
    fclose(source);
    fclose(destination);

    printf("File copied successfully. \n");

    return 0;
}

