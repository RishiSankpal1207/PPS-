#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() { 
    int choice = 0, cmp; 
    char str1[100], str2[100], ch, result[200];
    char* ptr;

    while(choice != 10) {
        printf("\n*******String Operations Menu****\n");
        printf("1. Find length (strlen)\n");
        printf("2. Copy string (strcpy)\n");
        printf("3. Concatenate strings (strcat)\n");
        printf("4. Compare strings (strcmp)\n");
        printf("5. Find character (strchr)\n");
        printf("6. Find substring (strstr)\n");
        printf("7. Tokenize string (strtok)\n");
        printf("8. Convert to uppercase\n");
        printf("9. Convert to lowercase\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input type!\n");
            break;
        }
        getchar(); 

        switch(choice) {
            case 1:
                printf("Enter string: ");
                fgets(str1, 100, stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Length = %lu\n", strlen(str1)); 
                break;
                
            case 2:
                printf("Enter source string: ");
                fgets(str1, 100, stdin);
                str1[strcspn(str1, "\n")] = '\0';
                strcpy(str2, str1);
                printf("Copied string: %s\n", str2);
                break;
                
            case 3:
                printf("Enter first string: "); 
                fgets(str1, 100, stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter second string: ");
                fgets(str2, 100, stdin);
                str2[strcspn(str2, "\n")] = '\0';
                
                result[0] = '\0'; 
                strcat(result, str1);
                strcat(result, str2); 
                printf("Concatenated string: %s\n", result);
                break;
                
            case 4:
                printf("Enter first string: ");
                fgets(str1, 100, stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter second string: ");
                fgets(str2, 100, stdin);
                str2[strcspn(str2, "\n")] = '\0';
                
                cmp = strcmp(str1, str2);
                if(cmp == 0) {
                    printf("Strings are equal.\n");
                } else if(cmp < 0) {
                    printf("First string is smaller than second.\n");
                } else {
                    printf("First string is greater than second.\n");
                }
                break;
                
            case 5:
                printf("Enter string: ");
                fgets(str1, 100, stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter character to find: ");
                scanf(" %c", &ch); 
                getchar(); 
                
                ptr = strchr(str1, ch);
                if(ptr != NULL) {
                    printf("Character found at position %ld\n", ptr - str1);
                } else {
                    printf("Character not found.\n");
                }
                break;
                
            case 6: 
                printf("Enter string: ");
                fgets(str1, 100, stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter substring to search: ");
                fgets(str2, 100, stdin);
                str2[strcspn(str2, "\n")] = '\0';
                
                ptr = strstr(str1, str2);
                if(ptr != NULL) {
                    printf("Substring found at position %ld\n", ptr - str1);
                } else {
                    printf("Substring not found.\n");
                }
                break;
                
            case 7: 
                printf("Enter String: ");
                fgets(str1, 100, stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Tokens are: \n");
                
                ptr = strtok(str1, " ");
                while(ptr != NULL) {
                    printf("%s\n", ptr);
                    ptr = strtok(NULL, " ");
                }
                break;
                
            case 8: 
                printf("Enter String: ");
                fgets(str1, 100, stdin);
                str1[strcspn(str1, "\n")] = '\0';
                
               
                for(int i = 0; str1[i] != '\0'; i++) {
                    str1[i] = toupper((unsigned char)str1[i]);
                }
                printf("Uppercase: %s\n", str1);
                break;
                
            case 9: 
                printf("Enter String: ");
                fgets(str1, 100, stdin);
                str1[strcspn(str1, "\n")] = '\0';
                
                
                for(int i = 0; str1[i] != '\0'; i++) {
                    str1[i] = tolower((unsigned char)str1[i]);
                }
                printf("Lowercase: %s\n", str1); 
                break;
                
            case 10: 
                printf("Exiting..\n");
                break;
                
            default:
                printf("Invalid Choice\n");
        }
    }
    return 0;
}
	
	

	
