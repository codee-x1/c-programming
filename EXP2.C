

#include <stdio.h>

int main()
{
    float physics, chemistry, maths;
    float total, average;

    printf("Enter Physics marks (out of 100): ");
    scanf("%f", &physics);

    printf("Enter Chemistry marks (out of 100): ");
    scanf("%f", &chemistry);

    printf("Enter Mathematics marks (out of 100): ");
    scanf("%f", &maths);

    if (physics < 0 || physics > 100 ||
        chemistry < 0 || chemistry > 100 ||
        maths < 0 || maths > 100)
    {
        printf("Error: Marks must be between 0 and 100.\n");
        return 1;
    }

    total = physics + chemistry + maths;
    average = total / 3.0;

    printf("\n--- Student Performance ---\n");
    printf("Total Marks: %.2f / 300\n", total);
    printf("Average Marks: %.2f%%\n", average);

    printf("Eligibility Status: %s\n",
        average >= 50.0 ? "ELIGIBLE for admission" :
                          "NOT ELIGIBLE for admission");

    return 0;
}