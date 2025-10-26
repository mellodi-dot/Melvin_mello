#include <stdio.h>

int main(void) {
    int units;
    double bill = 0.0;

    printf("Enter water units consumed: ");
    if (scanf("%d", &units) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    if (units <= 0) {
        bill = 0.0;
    } else if (units <= 30) {
        /* 0 - 30 units: 20 KES per unit */
        bill = units * 20.0;
    } else if (units <= 60) {
        /* first 30 at 20, remaining (units-30) at 25 */
        bill = 30 * 20.0 + (units - 30) * 25.0;
    } else {
        /* first 30 at 20, next 30 at 25, remaining (units-60) at 30 */
        bill = 30 * 20.0 + 30 * 25.0 + (units - 60) * 30.0;
    }

    printf("Total water bill: %.2f KES\n", bill);
    return 0;
}