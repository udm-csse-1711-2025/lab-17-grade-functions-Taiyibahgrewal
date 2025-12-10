// The program asks the user for three exam scores, makes sure it isnt 
// invalid, and displays the  letter grade for each score. it can calculate
// the average of the three scores and display the letter grade 
// for the average.
// 10/22/2025
// Taiyibah Grewal 

// Program used to illustrate the usage of functions
// Gets three exam scores from the user and shows them 
// their letter grades
// Started by: Caitlin Snyder
// Edited by: Taiyibah Grewal

#include <iostream>
using namespace std;

/****************************************************************
 *  Function Name: getScore
 *  Purpose: Ask the user for a test score, validate the input,
 *          and return the valid score.
 *  Parameters: None
 *  Return Value: A double representing a valid test score (0–100)
 ****************************************************************/
double getScore()
{
    double score;
    cout << "Enter a test score (0-100): ";
    cin >> score;

    // Input validation
    while (score < 0 || score > 100)
    {
        cout << "Invalid input! Please enter a score between 0 and 100: ";
        cin >> score;
    }

    return score;
}

/****************************************************************
 * Function Name: displayLetterGrade
 * Purpose: Determine and display the letter grade
 *          corresponding to the numeric score.
 * Parameters: score (double) – the numeric test score
 * Return Value: None (displays the letter grade to the screen)
 ****************************************************************/
void displayLetterGrade(double score)
{
    char grade; // var for grade

    if (score >= 90) //if else for grade score
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';
    else
        grade = 'F';

    cout << grade << endl;
}


int main() {
    double score1, score2, score3;

    cout << "Enter your three exam scores below.\n";

    // Call getScore three time
    score1 = getScore();
    score2 = getScore();
    score3 = getScore();

    // Display letter grades for each exam
    cout << "\nLetter grades:\n";
    cout << "Exam 1: ";
    displayLetterGrade(score1);

    cout << "Exam 2: ";
    displayLetterGrade(score2);

    cout << "Exam 3: ";
    displayLetterGrade(score3);

    return 0;
}
