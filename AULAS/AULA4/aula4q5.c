#include <stdio.h>

int main(){

    int numbers[] = {3, 7, 15, 9, 22, 10};
    int nsize = sizeof(numbers) / sizeof(numbers[0]);
    int search = 9;
    int found = 0;

    for (int i = 0; i < nsize && numbers[i] <= search; i++){
        if (numbers[i] == search) {
            printf("number %d found in position %d", search, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("number not found");
    }

    return 0;

}