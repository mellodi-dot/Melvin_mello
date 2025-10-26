#include <stdio.h>

int main(void) {
    double balance;
    double amount;

    printf("Enter initial account balance: ");
    if (scanf("%lf", &balance) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    while (balance > 0.0) {
        printf("Enter amount to withdraw: ");
        if (scanf("%lf", &amount) != 1) {
            fprintf(stderr, "Invalid input.\n");
            return 1;
        }

        if (amount <= 0.0) {
            printf("Withdrawal amount must be positive. Try again.\n");
            continue;
        }

        balance -= amount;
        printf("Balance after withdrawal: %.2f\n", balance);
    }

    printf("Account balance is %.2f. No further withdrawals allowed.\n", balance);
    return 0;
}