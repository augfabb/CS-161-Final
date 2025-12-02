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

    welcome();

    getInput(goal);

    if (goal <= 0) {
        cout << "No miles were tracked this week:(" << endl;
        exit(0);
    }
    calcTotal();

    cout << "You rode a total of " << total << " miles this week." << endl;
    


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
    for (int i = 1; i <=7; i++) {
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
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/
