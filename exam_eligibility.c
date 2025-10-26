/*
 * exam_eligibility.c
 *
 * Simple program to check if a student is eligible for final exams.
 * Criteria:
 *   - attendance >= 75%
 *   - average marks >= 40
 *
 * Compile:
 *   gcc -o exam_eligibility exam_eligibility.c
 * Run:
 *   ./exam_eligibility
 */

#include <stdio.h>

int is_eligible(double attendance_pct, double avg_marks) {
    return (attendance_pct >= 75.0) && (avg_marks >= 40.0);
}

int main(void) {
    double attendance, avg_marks;

    printf("Enter attendance percentage (e.g. 75): ");
    if (scanf("%lf", &attendance) != 1) {
        fprintf(stderr, "Invalid input. Please enter numeric values.\n");
        return 1;
    }

    printf("Enter average marks (0-100): ");
    if (scanf("%lf", &avg_marks) != 1) {
        fprintf(stderr, "Invalid input. Please enter numeric values.\n");
        return 1;
    }

    if (is_eligible(attendance, avg_marks)) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}

/* Example:
   Enter attendance percentage (e.g. 75): 80
   Enter average marks (0-100): 45
   Eligible for final exams.
*/