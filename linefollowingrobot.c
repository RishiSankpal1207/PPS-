#include <stdio.h>
#include <string.h>

struct Sensor {
    int id;
    char position[10];
    int reading;
    char condition[20];
};

void classify(int reading, char *condition) {
    if (reading <= 300)
        strcpy(condition, "On Line");
    else if (reading <= 600)
        strcpy(condition, "Near Edge");
    else
        strcpy(condition, "Off Line");
}

int main() {
    int n, i;
    struct Sensor s[10];
    printf("Enter number of sensors: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Sensor %d\n", i + 1);
        printf("Sensor ID: "); scanf("%d", &s[i].id);
        printf("Position (Left/Center/Right): "); scanf("%s", s[i].position);
        printf("Sensor Reading (0 - 1023): "); scanf("%d", &s[i].reading);
        classify(s[i].reading, s[i].condition);
    }

    printf("\n%-8s %-10s %-10s %-15s\n", "ID", "Position", "Reading", "Condition");
    printf("----------------------------------------------\n");
    for (i = 0; i < n; i++)
        printf("%-8d %-10s %-10d %-15s\n",
               s[i].id, s[i].position, s[i].reading, s[i].condition);

    if (n == 3) { // overall decision for 3 sensors
        if (strcmp(s[0].condition, "On Line") == 0 &&
            strcmp(s[1].condition, "On Line") == 0 &&
            strcmp(s[2].condition, "On Line") == 0)
            printf("\nRobot Position: On Track (Centered)\n");
        else if (strcmp(s[0].condition, "On Line") == 0)
            printf("\nRobot Position: Drift Left (Turn Right)\n");
        else if (strcmp(s[2].condition, "On Line") == 0)
            printf("\nRobot Position: Drift Right (Turn Left)\n");
        else if (strcmp(s[1].condition, "On Line") == 0)
            printf("\nRobot Position: Centered / Adjust\n");
        else
            printf("\nRobot Position: Line Not Detected\n");
    }
    return 0;
}