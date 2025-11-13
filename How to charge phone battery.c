#include <stdio.h>
#include <unistd.h> 

int main() {
    int battery = 0;

    printf("Charging battery simulation\n");
    printf("Battery charging started...\n");

    for (battery = 0; battery <= 100; battery += 10) 
   {
        printf("Battery: %d%%\n", battery); 
        sleep(1);
    }

    printf("Battery fully charged!\n");
    return 0;
}
