#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
int slen(char *str);
char *ft_strjoin(int size, char **strs, char *sep);

// Helper function to print an array of strings
void print_str_array(char **strs, int size) {
    for (int i = 0; i < size; i++) {
        printf("%s", strs[i]);
        if (i < size - 1)
            printf(" ");
    }
    printf("\n");
}

// Helper function to free memory allocated for an array of strings
void free_str_array(char **strs, int size) {
    for (int i = 0; i < size; i++)
        free(strs[i]);
    free(strs);
}

void test_error_cases() {
    // Test with NULL pointer for strs
    char *result = ft_strjoin(3, NULL, ",");
    if (result == NULL)
        printf("Test passed: ft_strjoin with NULL strs returns NULL as expected.\n");
    else
        printf("Test failed: ft_strjoin with NULL strs should return NULL.\n");
    
    // Test with size = 0
    char *strs1[] = {"Hello", "world"};
    result = ft_strjoin(0, strs1, ",");
    if (result != NULL && result[0] == '\0')
        printf("Test passed: ft_strjoin with size = 0 returns an empty string as expected.\n");
    else
        printf("Test failed: ft_strjoin with size = 0 should return an empty string.\n");
    free(result);

    // Test with NULL pointer for sep
    char *strs2[] = {"Hello", "world"};
    result = ft_strjoin(2, strs2, NULL);
    if (result == NULL)
        printf("Test passed: ft_strjoin with NULL sep returns NULL as expected.\n");
    else
        printf("Test failed: ft_strjoin with NULL sep should return NULL.\n");
    free(result);
}

// Test function to check ft_strjoin implementation
void test_ft_strjoin(int size, char **strs, char *sep) {
    char *result = ft_strjoin(size, strs, sep);
    printf("Input strings: ");
    print_str_array(strs, size);
    printf("Separator: %s\n", sep);
    printf("Result: %s\n", result);
    printf("Result Length: %d\n", slen(result));
    free(result);
}

int main() {
    // Test scenarios
    // char *strs1[] = {"Hello", "world!"};
    // test_ft_strjoin(2, strs1, " ");
    
    // char *strs2[] = {"This", "is", "a", "test"};
    // test_ft_strjoin(4, strs2, "-");

    // char *strs3[] = {"This", "is", "another", "test"};
    // test_ft_strjoin(4, strs3, ", ");
    
    // char *strs4[] = {"Single"};
    // test_ft_strjoin(1, strs4, "separator");

    // char *strs5[] = {"Hello", "", "world!"};
    // test_ft_strjoin(3, strs5, "_");

    // char *strs6[] = {""};
    // test_ft_strjoin(1, strs6, "test");

    test_error_cases();

    return 0;
}