#include <stdio.h>
#include "volume.h"

int main(void){
    printf("ola unifei\n");

    float volume = volume_cuboid(3.0, 4.0, 5.0);
    printf("Volume of cuboid: %.2f\n", volume);

    volume = volume_cylinder(3.0, 5.0);
    printf("Volume of cylinder: %.2f\n", volume);

    volume = volume_sphere(3.0);
    printf("Volume of sphere: %.2f\n", volume);

    return 0;

}