#include <stdio.h>

int main(void)
{
    const double MAX_GRAY = 255.0;
    int g;
    double gnorm;

    scanf("%d", &g);
    gnorm = g / MAX_GRAY;
    printf("gray_norm = %.4f\n", gnorm);

    return 0;
}
