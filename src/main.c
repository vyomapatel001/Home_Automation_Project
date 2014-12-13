#include <stdio.h>
#include "sensors.h"

void control_fan(int temperature);
void control_light(int motion);

int main() {
    int temp = read_temperature();
    int motion = detect_motion();

    if (temp == -1 || motion == -1) {
        printf("Sensor read error\n");
        return 1;
    }

    control_fan(temp);
    control_light(motion);

    return 0;
}
