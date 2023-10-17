#ifndef STRING_UTILS_H
#define STRING_UTILS_H

// Function to concatenate two strings and return a new string
char* concatenate_strings(const char* str1, const char* str2);

// Function to convert a string to uppercase
char* to_uppercase(const char* str);

// Function to convert a string to lowercase
char* to_lowercase(const char* str);

// Function to remove leading and trailing whitespace from a string
char* trim_whitespace(const char* str);

// Function to find a substring within a string
int find_substring(const char* str, const char* substr);

// Function to replace all occurrences of a substring with another string
char* replace_substring(const char* str, const char* old_sub, const char* new_sub);

#endif
