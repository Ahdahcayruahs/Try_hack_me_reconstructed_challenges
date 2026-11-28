#include <stdio.h>

int main(void)
{
    char fname[50] = "";
    char lname[50] = "";
    int age = 0;
    float weight = 0.0f;
    float height = 0.0f;

    printf("Enter your first name: ");
    if (scanf(" %49[^\n]", fname) != 1) return 1;

    printf("Enter your last name: ");
    if (scanf(" %49[^\n]", lname) != 1) return 1;

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        printf("Invalid age.\n");
        return 1;
    }

    printf("Enter your weight (kg): ");
    if (scanf("%f", &weight) != 1) {
        printf("Invalid weight.\n");
        return 1;
    }

    printf("Enter your height (cm): ");
    if (scanf("%f", &height) != 1) {
        printf("Invalid height.\n");
        return 1;
    }

    printf("\nJust to confirm, your details are as follows:\n");
    printf("%s %s, age %d, %.2f kg, %.2f cm\n", fname, lname, age, weight, height);

    return 0;
}
