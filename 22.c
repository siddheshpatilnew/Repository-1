#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];
    int choice = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while(choice != 5)
    {
        printf("\n--- MENU ---\n");
        printf("1. Length of strings\n");
        printf("2. Copy string\n");
        printf("3. Concatenate strings\n");
        printf("4. Compare strings\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Length of first string = %lu\n", strlen(str1));
                printf("Length of second string = %lu\n", strlen(str2));
                break;

            case 2:
                strcpy(temp, str1);
                printf("Copied string: %s\n", temp);
                break;

            case 3:
                strcpy(temp, str1);
                strcat(temp, str2);
                printf("Concatenated string: %s\n", temp);
                break;

            case 4:
                if(strcmp(str1, str2) == 0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are not equal\n");
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}