#include <stdio.h>
#include <stdbool.h>

int main() {
    for(int i = 5; i < 50; i++)
    {
        if(i % 2 == 1){
        printf("%d, ", i);
    }
    }
    return 0;

}
