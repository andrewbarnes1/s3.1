#include <mbed.h>

int main() {
    AnalogIn  left(A0);
    AnalogIn right(A1);

    // Prints out the voltage from the potentiometers every second.
    while(1) {
        // Output is scaled between 0 - 1 (1 = 3.3v)
        printf(" Left dial %f \n",  (left.read() * 3.3) );
        printf("Right dial %f \n", (right.read() * 3.3) );
        wait( 1.0 );
        // Voltage Change = 3.3 / 2^16 = 0.000050354
        // Angle = 360 / 2**16
        }
}
