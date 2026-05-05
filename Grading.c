#include <stdio.h>

int main() {
    int choice, marks;
    
    printf("====================================\n");
    printf("       GRADE CALCULATION SYSTEM\n");
    printf("       Developed by ABDUL AZIM\n");
    printf("====================================\n");
    printf("Select Exam Type:\n");
    printf("1. SSC/HSC\n");
    printf("2. University\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("\nEnter your marks (0-100): ");
        scanf("%d", &marks);
        
        printf("\n---------- RESULT ----------\n");
        
        if (marks >= 80 && marks <= 100) {
            printf("Letter Grade: A+\n");
            printf("Grade Points: 5.00\n");
        }
        else if (marks >= 70 && marks <= 79) {
            printf("Letter Grade: A\n");
            printf("Grade Points: 4.00\n");
        }
        else if (marks >= 60 && marks <= 69) {
            printf("Letter Grade: A-\n");
            printf("Grade Points: 3.50\n");
        }
        else if (marks >= 50 && marks <= 59) {
            printf("Letter Grade: B\n");
            printf("Grade Points: 3.00\n");
        }
        else if (marks >= 40 && marks <= 49) {
            printf("Letter Grade: C\n");
            printf("Grade Points: 2.00\n");
        }
        else if (marks >= 33 && marks <= 39) {
            printf("Letter Grade: D\n");
            printf("Grade Points: 1.00\n");
        }
        else if (marks >= 0 && marks <= 32) {
            printf("Letter Grade: F\n");
            printf("Grade Points: 0.00\n");
        }
        else {
            printf("Invalid marks! Please enter marks between 0 and 100.\n");
        }
    }
    else if (choice == 2) {
        printf("\nEnter your marks (0-100): ");
        scanf("%d", &marks);
        
        printf("\n---------- RESULT ----------\n");
        
        if (marks >= 80 && marks <= 100) {
            printf("Letter Grade: A+\n");
            printf("Grade Points: 4.00\n");
        }
        else if (marks >= 75 && marks <= 79) {
            printf("Letter Grade: A\n");
            printf("Grade Points: 3.75\n");
        }
        else if (marks >= 70 && marks <= 74) {
            printf("Letter Grade: A-\n");
            printf("Grade Points: 3.50\n");
        }
        else if (marks >= 65 && marks <= 69) {
            printf("Letter Grade: B+\n");
            printf("Grade Points: 3.25\n");
        }
        else if (marks >= 60 && marks <= 64) {
            printf("Letter Grade: B\n");
            printf("Grade Points: 3.00\n");
        }
        else if (marks >= 55 && marks <= 59) {
            printf("Letter Grade: B-\n");
            printf("Grade Points: 2.75\n");
        }
        else if (marks >= 50 && marks <= 54) {
            printf("Letter Grade: C+\n");
            printf("Grade Points: 2.50\n");
        }
        else if (marks >= 45 && marks <= 49) {
            printf("Letter Grade: C\n");
            printf("Grade Points: 2.25\n");
        }
        else if (marks >= 40 && marks <= 44) {
            printf("Letter Grade: D\n");
            printf("Grade Points: 2.00\n");
        }
        else if (marks >= 0 && marks <= 39) {
            printf("Letter Grade: F\n");
            printf("Grade Points: 0.00\n");
        }
        else {
            printf("Invalid marks! Please enter marks between 0 and 100.\n");
        }
    }
    else {
        printf("Invalid choice! Please select 1 or 2.\n");
    }
    
    printf("\n============================\n");
    return 0;
}