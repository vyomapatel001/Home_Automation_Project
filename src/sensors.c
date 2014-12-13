#include <stdio.h>
#include <stdlib.h>
#include "sensors.h"

int read_temperature() {
    FILE *file = fopen("data/temperature.txt", "r");
    if (!file) return -1;
    int temp;
    fscanf(file, "%d", &temp);
    fclose(file);
    return temp;
}

int detect_motion() {
    FILE *file = fopen("data/motion.txt", "r");
    if (!file) return -1;
    int motion;
    fscanf(file, "%d", &motion);
    fclose(file);
    return motion;
}
