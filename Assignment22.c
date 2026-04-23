#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    char str1[100], str2[100];
    int choice;

    while (1) {
        printf("\n--- String Operations Menu ---");
        printf("\n1. Length of String");
        printf("\n2. Copy String");
        printf("\n3. Concatenate Strings");
        printf("\n4. Compare Strings");
        printf("\n5. Exit");
        printf("\nSelect an option: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            printf("Enter string: ");
            scanf("%s",str1);
            int length = strlen(str1);
            printf("Length: %d\n",length);
            break;

            case 2:
            printf("Enter source string: ");
            scanf("%s",str1);
            strcpy(str2, str1);
            printf("Copied string: %s\n",str2);
            break;

            case 3:
            printf("Enter first string: ");
            scanf("%s",str1);
            printf("Enter second string: ");
            scanf("%s",str2);
            strcat(str1, str2);
            printf("Concatenated string:%s\n", str1);
            break;

            case 4:
            
            printf("Enter first string: ");
            scanf("%s",str1);
            printf("Enter second string: ");
            scanf("%s", str2);
            if (strcmp(str1, str2)== 0)
                printf("Strings are equal.\n");
            else
                printf("Strings are not equal.\n");
            break;

        case 5:
            exit(0);

        
        default:
            printf("Invalid choice.\n");

        }
    }
    return 0;
}
