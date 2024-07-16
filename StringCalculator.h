// Function: check_empty
// Checks if 'ch' is an empty string.
// Returns 1 if 'ch' is empty, otherwise returns 0.
int check_empty(const char* ch) {
    int strlength = strlen(ch);

    if (strlength == 0) {
        return 1;  // Empty string
    }
    return 0;  // Not empty
}
