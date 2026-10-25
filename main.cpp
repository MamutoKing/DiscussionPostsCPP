#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char username;

    cout << "Enter your username: ";
    getline(cin, username);

    if (username.empty() || username.length() > 20){
        cout << "Invalid username length." << endl;
    }

    cout << "Welcome, " << username << endl;
    
    return 0;
}