#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Traffic light states
typedef enum {
    RED,
    GREEN,
    YELLOW
} TrafficLightState;

// Function prototypes
void updateTrafficLights(int trafficCount1, int trafficCount2);
void simulateTrafficData(int *trafficCount1, int *trafficCount2);

int main() {
    int trafficCount1 = 0, trafficCount2 = 0;

    // Seed random number generator
    srand(time(NULL));

    while (1) {
        // Simulate traffic data
        simulateTrafficData(&trafficCount1, &trafficCount2);

        // Update traffic lights based on simulated data
        updateTrafficLights(trafficCount1, trafficCount2);

        // Wait for some time before the next update
        // Sleep for 5 seconds
    }

    return 0;
}

void simulateTrafficData(int *trafficCount1, int *trafficCount2) {
    // Simulate traffic counts with random numbers
    *trafficCount1 = rand() % 100; // Random count for intersection 1
    *trafficCount2 = rand() % 100; // Random count for intersection 2
}

void updateTrafficLights(int trafficCount1, int trafficCount2) {
    // Simulate traffic light timings
    int greenTime1, greenTime2;

    // Simple logic to adjust green time based on traffic count
    if (trafficCount1 > trafficCount2) {
        greenTime1 = 30 + (trafficCount1 - trafficCount2) / 2; // Increase green time for higher traffic
        greenTime2 = 30;
    } else {
        greenTime1 = 30;
        greenTime2 = 30 + (trafficCount2 - trafficCount1) / 2; // Increase green time for higher traffic
    }

    printf("Intersection 1: %d vehicles, Green Light for %d seconds\n", trafficCount1, greenTime1);
    printf("Intersection 2: %d vehicles, Green Light for %d seconds\n", trafficCount2, greenTime2);

    // Here you would typically send commands to control the actual traffic lights
    // e.g., setTrafficLightState(RED, GREEN, YELLOW);
}
