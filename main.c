#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void GetPassword(int PASSWORD_LENGTH)
{
    char password[PASSWORD_LENGTH + 1];
    const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+{}[];:<>,.?/|\\";
    const size_t charset_size = sizeof(charset) - 1; // Exclude null terminator
    srand(time(NULL)); // Seed the random number generator with current time

    // Generate random password
    for (int index = 0; index < PASSWORD_LENGTH; index++) {
        password[index] = charset[rand() % charset_size];
    }
    password[PASSWORD_LENGTH] = '\0'; // Add null terminator

    printf("\nYour new password is: %s\n\n", password);
}
int main() {
    int length;
    printf("\n \t \t \t SIMPLE PASSWORD GENERATOR \n");
    printf("\nEnter the length of the password : ");
    scanf("%d", &length);
    GetPassword(length);
    return 0;
}