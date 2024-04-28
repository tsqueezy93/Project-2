#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

//Taylor Saywell I.D. #23015257 Assignment 2

int judges, indx; //Added the array Wk.5 to see if it would make the program less complicated.
float mark[8], total_mark, high_mark, low_mark, temp_mark;

int main() {
    total_mark = 0.0;
    high_mark = 0.0;
    low_mark = 10.0; // equation wasn't working because I had high_mark = 10 & low_mark = 0

    cout << "Enter the number of judges: "; //has to be between 4-8 judges, anything else is invalid
    cin >> judges;

    while ((judges < 4) || (judges > 8)) { //changed from if statement to loop (if statement doesn't work for for invalid scores)
        cout << "Invalid. Enter the number of judges again (4-8): ";
        cin >> judges; 
    
    } for (indx = 0; indx < judges; indx++) {
        cout << "Enter the mark: ";
        cin >> mark[indx];
    
     while ((mark[indx] < 0.0) || (mark[indx] > 10.0)) {
        cout << "Invalid mark. Re-enter mark (0.0-10.0): "; //score has to be between 0.0 - 10.0 (real numbers)
        cin >> mark[indx];
     }
    } 
    for (indx = 0; indx < judges; indx++) {
        if (mark[indx] > high_mark) {
          high_mark = mark[indx];
    } if (mark[indx] < low_mark) {
        low_mark = mark[indx];
    }
    total_mark = total_mark + mark[indx]; 

    } 
 total_mark = total_mark - high_mark - low_mark; //subtracting high_mark and low_mark from total, total_mark = average of remaining marks
    judges = judges - 2; // subtracting 2 judges scores (high_mark + low_mark) from total then average remaining
    total_mark = total_mark / judges; 


cout << "Final mark: " << setprecision(2) << fixed << total_mark << endl; //decimal place by two spots (2)
}
//Completed 1/04/23