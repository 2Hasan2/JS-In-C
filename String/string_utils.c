#include "string_utils.h"
#include <string.h>
#include <stdlib.h>

char* concatenate_strings(const char* str1, const char* str2) {
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    char* result = (char*)malloc(len1 + len2 + 1);
    if (result == NULL) {
        return NULL;
    }

    strcpy(result, str1);
    strcat(result, str2);
    return result;
}

char* to_uppercase(const char* str) {
    char* result = (char*)malloc(strlen(str) + 1);
    if (result == NULL) {
        return NULL;
    }

    for (size_t i = 0; str[i] != '\0'; i++) {
        result[i] = (char)toupper(str[i]);
    }
    result[strlen(str)] = '\0';
    return result;
}

char* to_lowercase(const char* str) {
    char* result = (char*)malloc(strlen(str) + 1);
    if (result == NULL) {
        return NULL;
    }

    for (size_t i = 0; str[i] != '\0'; i++) {
        result[i] = (char)tolower(str[i]);
    }
    result[strlen(str)] = '\0';
    return result;
}

char* trim_whitespace(const char* str) {
    // Implementation of trimming leading and trailing whitespace
    // ...

    // You can implement this logic as needed

    return NULL; // Placeholder
}

int find_substring(const char* str, const char* substr) {
    const char* found = strstr(str, substr);
    if (found != NULL) {
        return (int)(found - str);
    } else {
        return -1;
    }
}

char* replace_substring(const char* str, const char* old_sub, const char* new_sub) {
    // Implementation of substring replacement
    // ...

    // You can implement this logic as needed

    return NULL; // Placeholder
}
