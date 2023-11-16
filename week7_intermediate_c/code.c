#include "utilities.h"

int main()
{
    // array of daily readings
    reading daily_readings[100];

    char line[buffer_size];
    char filename[buffer_size];

    // get filename from the user
    printf("Please enter the name of the data file: ");

    // these lines read in a line from the stdin (where the user types)
    // and then takes the actual string out of it
    // this removes any spaces or newlines.
    fgets(line, buffer_size, stdin);
    sscanf(line, " %s ", filename);

    char choice;
    int counter = 0;
    float mean = 0;
    int total = 0;
    float max = 0;
    float min = 0;

    while (1)
    {
        FILE *input = fopen(filename, "r");
        if (!input)
        {
            printf("Error: File could not be opened\n");
            return 1;
        }

        counter = 0;
        while (fgets(line, buffer_size, input))
        {
            // split up the line and store it in the right place
            // using the & operator to pass in a pointer to the bloodIron so it stores it
            tokeniseRecord(line, ",", daily_readings[counter].date, &daily_readings[counter].bloodIron);
            counter++;
            total++; // a counter for the amount of structs that are created
        }

        printf("A: View all your blood iron levels\n");                       // BRONZE
        printf("B: View your average blood iron level\n");                    // BRONZE
        printf("C: View your lowest blood iron level\n");                     // SILVER
        printf("D: View your highest blood iron level\n");                    // SILVER
        printf("E: View the blood iron levels for a specific month\n");       // SILVER/GOLD
        printf("F: See some additional statistics about your iron levels\n"); // GOLD - see readme.md
        printf("G: Generate a graph of your iron levels\n");                  // GOLD/PLATINUM - see readme.md
        printf("Q: Exit the program\n");

        // get the next character typed in and store in the 'choice'
        choice = getchar();

        // this gets rid of the newline character which the user will enter
        // as otherwise this will stay in the stdin and be read next time
        while (getchar() != '\n');


        // switch statement to control the menu.
        switch (choice)
        {
        // this allows for either capital or lower case
        case 'A':
        case 'a':
            counter = 0;
            for (int i = 0; i < counter; i++)
            {
                printf("%s - Blood iron: %.1f\n", daily_readings[i].date, daily_readings[i].bloodIron);
            }
            fclose(input);
            break;

        case 'B':
        case 'b':
            for (counter = 0; counter <= total; counter++)
            {
                mean += daily_readings[counter].bloodIron;
            }
            printf("The mean is: %f\n", mean/total);
            break;

        case 'C':
        case 'c':
            counter = 0;
            min = daily_readings[0].bloodIron;
            for (counter = 0; counter <= total; counter++)
            {
                if (daily_readings[counter].bloodIron < min)
                {
                    min = daily_readings[counter].bloodIron;
                }
            }
            printf("The minimum Blood Iron was: %f\n", min);
            break;

        case 'D':
        case 'd':
            counter = 0;
            max = daily_readings[0].bloodIron;
            for (counter = 0; counter <= total; counter++)
            {
                if (daily_readings[counter].bloodIron > max)
                {
                    max = daily_readings[counter].bloodIron;
                }
            }
            printf("The maximum Blood Iron was: %f\n", max);
            break;

        case 'E':
        case 'e':
            break;

        case 'F':
        case 'f':
            break;

        case 'G':
        case 'g':
            break;

        case 'Q':
        case 'q':
            return 0;
            break;

        // if they type anything else:
        default:
            printf("Invalid choice\n");
            break;
        }
    }
}