//----PUSH_UPS REPS LOGGER ----
#include <iostream>
using namespace std;

int main() {
    //create an array to store reps for 7 days
    int reps[7];
    int total = 0; //we'll use this to add all the push-ups numbers
    int maxReps = 0; //this will store the highest number

    cout << "====Push-Up Logger (7 Days)====\n";

    //ask user to enter push-ups for each day
    for (int i = 0; i < 7; i++) {
        cout << "Enter push-ups for Day" << i + 1 << ": ";
        cin >> reps[i]; //save input in the array

        total += reps[i]; //add the number to the total
        if (reps[i] > maxReps) {
            maxReps = reps[i]; //update best day if this one is better
        }
    }
    double average = total / 7.0; //calculate average as a decimal

    //show results
    cout << "\n---Summary---\n";
    cout << "Total push-ups: " << total << endl;
    cout << "Best day (most reps): " << maxReps << endl;
    cout << "Average per day: " << average << endl;

    return 0;
    
}
