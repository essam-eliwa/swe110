#include <iostream>
using namespace std;

// Return the grade for the score
char getGrade(double score)
{
    char grade;
    if (score >= 90.0)
        grade = 'A';
    else if (score >= 80.0)
        grade = 'B';
    else if (score >= 70.0)
        grade = 'C';
    else if (score >= 60.0)
        grade = 'D';
    else
        grade = 'F';

    return grade;
}

int main(){
    cout << "Enter a score: ";
    double score;
    cin >> score;

    cout << "The grade is ";
    cout << getGrade(score) << endl;

    return 0;
}
