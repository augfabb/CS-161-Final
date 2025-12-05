// ------------- FILE HEADER -------------
// Author ✅: August Fabbri
// Assignment ✅: Final
// Date ✅:12/2/25
// Citations: 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>

using namespace std;

// prototypes
void welcome();
void getInput(int &goal);
int calcTotal();

int main(int argc, char* argv[]) {
    int goal;
    int total;
    int missedBy = 0;

    welcome();

    getInput(goal);

    if (goal <= 0) {
        cout << "No miles were tracked this week:(" << endl;
        exit(0);
    }
    total = calcTotal();

    cout << "You rode a total of " << total << " miles this week." << endl;
    
    missedBy = goal - total;
    if (total < goal) {
        cout << "Uh oh! You missed your goal by " << missedBy << " miles.";
    }


  return 0;
}

// Function implementations (if any)
void welcome() {
    cout << "Welcome to my miles tracker program!" << endl;
}
void getInput(int &goal){
    cout << "How many miles do you want to ride this week?"<< endl;
    cin >> goal;
}
int calcTotal() {
    int total = 0;
    int miles= 0;
    string days[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    for (int i = 0; i <7; i++) {
        cout << "How many miles did you ride on " << days[i] << "? ";
        cin >> miles;
        if (miles < 0) {
            cout << "Invalid input. Miles cannot be negative." << endl;
            i--;
        } 
        else {
            total += miles;
        }
    
      }
      return total;
    }







// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
int goal;


B. OUTPUT
int missedBy;
int total;

C. CALCULATIONS
CALL Calctotal
D. LOGIC and ALGORITHMS
    int goal;
    int total;
    int missedBy = 0;

    CALL welcome();

    CALL getInput(goal);

    IF (goal <= 0) {
        cout << "No miles were tracked this week:(" << endl;
        exit(0);
    }
    ASSIGN total = calcTotal();

    OUTPUT cout << "You rode a total of " << total << " miles this week." << endl;
    
    ASSIGN missedBy = goal - total;
    IF (total < goal) {
        OUTPUT cout << "Uh oh! You missed your goal by " << missedBy << " miles.";
    }


  return 0;
}



SAMPLE RUNS
Copy from assignment document.

*/
