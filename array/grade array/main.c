#include <stdio.h>
#include <string.h>
#define NUM_SUBJECTS 10 
double calculate_percentage(char grades[NUM_SUBJECTS][3]) 
{
    int total_points = 0;
    int max_points_per_subject = 9; 
    int max_total_points = max_points_per_subject * NUM_SUBJECTS; 
    for (int i = 0; i < NUM_SUBJECTS; i++) 
    {
        if (strcmp(grades[i], "A+") == 0) 
        {
            total_points += 9;
        } 
        else if (strcmp(grades[i], "A") == 0)
        {
            total_points += 8;
        } 
        else if (strcmp(grades[i], "B+") == 0)
        {
            total_points += 7;
        }
        else if (strcmp(grades[i], "B") == 0) 
        {
            total_points += 6;
        }
        else if (strcmp(grades[i], "C+") == 0)
        {
            total_points += 5;
        } 
        else if (strcmp(grades[i], "C") == 0) 
        {
            total_points += 4;
        }
    }
    double percentage = (double)total_points / max_total_points * 100;
    return percentage;
}

int main()
{
    char grades[NUM_SUBJECTS][3] = {"A+", "A", "B+", "C+", "A", "B", "C", "A+", "B+", "C+"};
    double percentage = calculate_percentage(grades);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
