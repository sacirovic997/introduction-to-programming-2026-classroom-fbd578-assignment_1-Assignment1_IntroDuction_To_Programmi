#include <stdio.h>

int main(void)
{
    int score = -1;

    printf("Enter exam score (0-100): ");
    scanf("%d", &score);

    if (score < 0 || score > 100)
    {
        printf("Invalid score\n");
        return 1;
    }

    if (score == 100)
        printf("Perfect score!\n");

    if (score >= 90)
        printf("Grade: A\n");
    else if (score >= 80)
        printf("Grade: B\n");
    else if (score >= 70)
        printf("Grade: C\n");
    else if (score >= 60)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");

    return 0;
}
