#include <iostream>
#include <vector>
using namespace std;

int main(){
    //Exercise 1
    vector<int> thing = {12, 3, 15, 69, 4, 5, 18, 1230, 35, 15};
    cout << "Third value: " << thing[2] << endl;
    thing.pop_back();
    cout << "Vector w pop: " << endl;
    for (int hung : thing) {
        cout << hung << endl;
    }
    //Exercise 2
    string user_in = "";
    vector<string> yup = {};
    do {
        cout << "Build your own vector:\na: Add element\nb: Display Vector\nc: Vector size\nEND: Next exercise" << endl;
        cin >> user_in;
        if(user_in == "a") {

        } else if(user_in == "b") {

        } else if(user_in == "c") {

        } else {
            cout << "Idk what you said." << endl;
        }
    } while (user_in == "END");
    return 0;
}