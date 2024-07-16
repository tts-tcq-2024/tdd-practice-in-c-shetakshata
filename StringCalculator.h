int add(const char* input){
    if((input== NULL || input[0]=='\0')){
return 0;
    }
return -1;
}
// Function to convert string to integer and calculate sum if less than 1000
int LessThanThousand(const char *num) {
    int input = atoi(num); // Convert string to integer
    if (input < 1000) {
        return input;
    }
    return 0;
}
