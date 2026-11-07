#include <stdio.h>
#include <string.h>

int main(void) { // V btw these chars act as strings V
    char decoy[18] = "StringsIsForNoobs";   // never used, is there to mislead
    char buf[32];                           // for the flag input

    fwrite("Password: ", 1, 10, stdout); //"DoYouEven_init" <-- CTF
    scanf("DoYouEven%s" "CTF", buf);        // literal 

    if (strcmp(buf, "__dso_handle") < 0 || strcmp(buf, "__dso_handle") > 0) {
        if (strcmp(buf, "_init") == 0)
            printf("Correct!");
        else
            printf("Try again!");
    } else {
        printf("Try again!");
    }
    return 0;
}
