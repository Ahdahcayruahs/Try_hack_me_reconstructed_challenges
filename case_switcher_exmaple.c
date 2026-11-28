#include <stdio.h>

int main()
{
    int MyInteger = 0;
    char Valueof[] = "default";
    
    printf("ENTER INTEGER: ");
    scanf("%d", &MyInteger);
    
    printf("INTEGER IS NOW: ");
    printf("%d\n", MyInteger); // Changed %c to %d and removed &
    
    switch(MyInteger){
        case 1:
            printf("%d", MyInteger);
            break;
        case 2:
            printf("%d", MyInteger); // Removed &
            break;
        case 3:
            printf("%d", MyInteger); // Removed &
            break;
        case 4:
            printf("%d", MyInteger); // Removed &
            break;
        case 5:
            printf("%d", MyInteger); // Removed &
            break;
        default:
            printf("%s", Valueof); // Changed %c to %s and removed &
            break;
    }
    
    return 0;
}
