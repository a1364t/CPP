#include <iostream>
using namespace std;


void print_menu(string name);

int main(int arg_count, char *args[]) {
    if ( arg_count > 1 ) {
        string name(args[1]);
        print_menu(name);
    }
    else {
        cout << "User name not supplied ... Exiting the program" << endl;
    }
    return 0;
}

void print_menu(string name) {
    int choice;

    cout << "*********************************\n";
    cout << " 1 - Print List. \n";
    cout << " 2 - Add to list.\n";
    cout << " 3 - Delete from list. \n";
    cout << " 4 - Quite. \n";
    cout << " Enter your choice and press return: ";

    cin >> choice;
    
    if ( choice == 4 ) {
        exit(0);
    }
    else {
        cout << " Sorry choice not implemented yet.\n";
    }
}