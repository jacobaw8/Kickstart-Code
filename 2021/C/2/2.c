#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int cases;
    scanf("%d", &cases);

    for (int i = 0; i < cases; i++) {
        int final = 0;
        int totalTries = 1;
        int value;
        int counter = 0;
        scanf("%d", &value);

        while (totalTries <= value) {
            counter = 0;
            for (int j = 1; counter <= value; j++) {

                counter += totalTries + j - 1;
                if (counter == value) {
                    final++;
                }

            }
            totalTries++;

        }

        printf("Case #%d: %d\n", i+1,final);
    }

    return 0;
}