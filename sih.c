#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

// Constants for the system
#define NIGHT_TIME_START 18  // 6 PM
#define NIGHT_TIME_END 6     // 6 AM

// Data structure to hold person information
typedef struct {
    bool isMale;
    bool isDayTime;
    bool isSOS;
} Person;

// Function prototypes
void detectPerson(Person person);
void generateAlert(const char* message);
bool isLoneWomanAtNight(Person* persons, int personCount);
bool isWomanSurroundedByMen(Person* persons, int personCount);

int main() {
    // Example data: A list of detected persons
    Person persons[] = {
        {true, true, false},  // Male, daytime
        {false, true, false}, // Female, daytime
        {true, false, true},  // Male, nighttime, SOS
        {false, false, false} // Female, nighttime
    };
    
    int personCount = sizeof(persons) / sizeof(persons[0]);

    for (int i = 0; i < personCount; i++) {
        detectPerson(persons[i]);
    }

    if (isLoneWomanAtNight(persons, personCount)) {
        generateAlert("Lone woman detected at night.");
    }

    if (isWomanSurroundedByMen(persons, personCount)) {
        generateAlert("Woman surrounded by men detected.");
    }

    return 0;
}

void detectPerson(Person person) {
    // In a real system, this function would analyze video feed data
    printf("Person detected: Male: %d, Daytime: %d, SOS: %d\n",
           person.isMale, person.isDayTime, person.isSOS);
}

void generateAlert(const char* message) {
    // In a real system, this would send an alert to authorities
    printf("ALERT: %s\n", message);
}

bool isLoneWomanAtNight(Person* persons, int personCount) {
    int loneWomanCount = 0;
    for (int i = 0; i < personCount; i++) {
        if (!persons[i].isMale && !persons[i].isDayTime) {
            loneWomanCount++;
        }
    }
    return loneWomanCount == 1;
}

bool isWomanSurroundedByMen(Person* persons, int personCount) {
    int womanCount = 0;
    int menCount = 0;
    for (int i = 0; i < personCount; i++) {
        if (!persons[i].isMale) {
            womanCount++;
        } else {
            menCount++;
        }
    }
    // Simplified check: If there's at least one woman and more than one man
    return womanCount == 1 && menCount > 1;
}