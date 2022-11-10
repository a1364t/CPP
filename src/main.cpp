#include "include/list.h"
#include "include/database.h"

int main(int arg_count, char *args[]) {
    List simplelist;
    Database data;

    if ( arg_count > 1 ) {
        simplelist.name = string(args[1]);
        simplelist.mainList = data.read();
        simplelist.find_userList();
        simplelist.print_menu();
        data.write(simplelist.mainList);
        
    }
    else {
        cout << "User name not supplied ... Exiting the program" << endl;
    }

    return 0;
}


