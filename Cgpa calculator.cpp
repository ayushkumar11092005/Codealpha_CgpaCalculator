#include <iostream>
using namespace std;

int main() {
    int n;
    float grade, credit, sum = 0, totalCredits = 0;

    cout << "Enter number of subjects: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Enter grade for subject " << i << ": ";
        cin >> grade;
        cout << "Enter credit for subject " << i << ": ";
        cin >> credit;

        sum += grade * credit;
        totalCredits += credit;
    }

    cout << "CGPA = " << (sum / totalCredits) << endl;
    return 0;
}
