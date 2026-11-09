#include <iostream>
using namespace std;

const int PASS_MARK = 80;

void readMarks(int marks[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter mark of student " << i + 1 << ": ";
        cin >> marks[i];
    }
}

int findTotal(int marks[], int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total += marks[i];
    }

    return total;
}

double findAverage(int marks[], int n)
{
    int total = findTotal(marks, n);

    return (double)total / n;
}

int findHighest(int marks[], int n)
{
    int highest = marks[0];

    for (int i = 1; i < n; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }
    }

    return highest;
}

int findLowest(int marks[], int n)
{
    int lowest = marks[0];

    for (int i = 1; i < n; i++)
    {
        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }

    return lowest;
}

int countPassed(int marks[], int n)
{
    int passed = 0;

    for (int i = 0; i < n; i++)
    {
        if (marks[i] >= PASS_MARK)
        {
            passed++;
        }
    }

    return passed;
}

void printReport(int marks[], int n)
{
    int total = findTotal(marks, n);
    double average = findAverage(marks, n);
    int highest = findHighest(marks, n);
    int lowest = findLowest(marks, n);
    int passed = countPassed(marks, n);
    int failed = n - passed;

    cout << "\n========== STUDENT REPORT ==========" << endl;

    cout << "Total Marks  : " << total << endl;
    cout << "Average      : " << average << endl;
    cout << "Highest Mark : " << highest << endl;
    cout << "Lowest Mark  : " << lowest << endl;
    cout << "Passed       : " << passed << endl;
    cout << "Failed       : " << failed << endl;

    cout << "====================================" << endl;
}

int main()
{
    int marks[100];
    int n;
    char repeat;

    do
    {
        cout << "\n============================" << endl;
        cout << "   STUDENT MARKS ANALYZER" << endl;
        cout << "============================" << endl;

        do
        {
            cout << "Enter number of students (1 - 100): ";
            cin >> n;

            if (n < 1 || n > 100)
            {
                cout << "Invalid! Please enter a number between 1 and 100.\n";
            }

        } while (n < 1 || n > 100);

        readMarks(marks, n);

        printReport(marks, n);

        cout << "\nDo you want to run another analysis? (y/n): ";
        cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    cout << "\nThank you! Program ended.\n";

    return 0;
}