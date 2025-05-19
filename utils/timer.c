#include <stdio.h>
#include <time.h>

clock_t start;

void start_timer() {
    start = clock();
}

void end_timer() {
    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("⏱ Time taken: %.6f seconds\n", time_spent);
}
