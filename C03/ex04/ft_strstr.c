#include <stdlib.h>

char *ft_strstr(char *str, char *to_find) {
    int i = 0;
    int j = 0;
    if (to_find[i] == '\0')
        return &str[i]
        
    while (str[i] != '\0') {
        j = 0;

       	while (to_find[j] != '\0' && str[i + j] == to_find[j]) {
            j++;
        }

       	if (to_find[j] == '\0') {
            return &str[i];
 		}

        i++;    
	}


    return NULL; 
}
/*
int main() {
    const char *haystack = "Hello, world!";
    const char *needle = "amine";

    char *result = ft_strstr(haystack, needle);

    if (result != NULL) {
        printf("'%s' found in '%s' at position %ld\n", needle, haystack, result - haystack);
    } else {
        printf("'%s' not found in '%s'\n", needle, haystack);
    }

    return 0;
}
*/
