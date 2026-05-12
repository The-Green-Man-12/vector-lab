#include <iostream>
#include <vector>
#include <string>
using namespace std;
void receiverFunc(vector<string> names);

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
            cout << "What do you want to add?" << endl;
            cin >> user_in;
            yup.push_back(user_in);
        } else if(user_in == "b") {
            cout << "Your vector: " << endl;
            for (string huh : yup) {
                cout << huh << " ";
            }
            cout << endl;
        } else if(user_in == "c") {
            cout << "Your current vector size is: " << yup.size() << endl;
        } else if(user_in != "END") {
            cout << "Idk what you said." << endl;
        }
    } while (user_in != "END");

    //Exercise 3
    vector<string> colors = {};
    string color = "";
    do {
    cout << "What is your favorite color?" << endl;
    cin >> color;
    colors.push_back(color);
    cout << "Want to add another favorite color?";
    cin >> color;
    if(color == "yes") {
        cout << "Ok" << endl;
    } else if(color == "No" || color == "no") {
        cout << "Ok, no more then." << endl;
    }
    } while (color != "no");
    cout << "Here are all your favorite colors: " << endl;
    for (string col : colors) {
        cout << col << " ";
    }
    cout << endl;

    //Exercise 4
    vector<string> names = {};
    string user_fah = "";
    cout << "How many names do you have?" << endl;
    cin >> user_in;
    for (int i = 0; i < stoi(user_in); i++) {
        cout << "The " << i + 1 << " name: ";
        cin >> user_fah;
        names.push_back(user_fah);
        cout << endl;
    }
    receiverFunc(names);
    return 0;
}

void receiverFunc(vector<string> names) {
    cout << "Hello, ";
    for(string name : names) {
        cout << name << " ";
    }
    cout << "\nYou have a great name." << endl;
}