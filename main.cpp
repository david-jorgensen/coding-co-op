#include <iostream>

using namespace std;

int main(){
    string answer;
    cout << "What is your favorite color?";
    cin >> answer;
    if (answer=="blue"){
        cout << "Good Job";
    } else if (answer == "red") {
        cout << "Even better!" << endl;   
    } else {
        cout << "Blue is not your favorite color.";
    };
    return 0;
};
