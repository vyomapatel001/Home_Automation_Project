#include <stdio.h>

void control_fan(int temperature) {
    if (temperature > 18)
        printf("Fan ON (Temp: %d°C)\n", temperature);
    else
        printf("Fan OFF (Temp: %d°C)\n", temperature);
}

void control_light(int motion) {
    if (motion)
        printf("Light ON (Motion detected)\n");
    else
        printf("Light OFF (No motion)\n");
}
