#include <stdio.h>
#include <string.h>
#include<conio.h>

int main() {
    char mood[20];
    char timeOfDay[20];
    // Prompt the user for their mood and time of day
    printf("How are you feeling (happy/sad/indifferent): ");
    scanf("%s", mood);

    printf("What time of day is it (morning/afternoon/evening): ");
    scanf("%s", timeOfDay);

    // Make the decision based on user input
    if (strcmp(mood, "happy") == 0) {
        if (strcmp(timeOfDay, "morning") == 0) {
            printf("You should have a hearty breakfast.\n");
        } else if (strcmp(timeOfDay, "afternoon") == 0) {
            printf("A delicious lunch is a great choice.\n");
        } else if (strcmp(timeOfDay, "evening") == 0) {
            printf("Celebrate with a nice dinner.\n");
        }
    } else if (strcmp(mood, "sad") == 0) {
        if (strcmp(timeOfDay, "morning") == 0) {
            printf("A comforting bowl of cereal can cheer you up.\n");
        } else if (strcmp(timeOfDay, "afternoon") == 0) {
            printf("Treat yourself to some ice cream.\n");
        } else if (strcmp(timeOfDay, "evening") == 0) {
            printf("Order your favorite comfort food.\n");
        }
    } else if (strcmp(mood, "indifferent") == 0) {
        printf("Any meal is fine. Enjoy whatever you prefer.\n");
    } else {
        printf("Invalid mood input. Please enter 'happy', 'sad', or 'indifferent'.\n");
    }

    return 0;
}

