#include <stdio.h>
using namespace std;
int main() {
    int n, i, max;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    scanf("%d", &max);

    for (i = 1; i < n; i++) {
        int num;
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }

    printf("The biggest number is: %d\n", max);
    return 0;
}

