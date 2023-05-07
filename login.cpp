#include<iostream>
using namespace std;

int main()
{
    char choice;
    int option;
    do
    {
        cout << "1. Admin \n";
        cout << "2. Student \n";
        cout << "3. Exit \n";

        cout << " Enter your choice : ";
        cin >> option;
     switch (option) 
     {
        case 1:
        cout << " ******* Admin Portal ********\n";
        break;

        case 2:
        cout << " ******* Student Portal ********\n";
        break;

        case 3:
        cout << " Thanks for using system!!\n";
     }  
    } while (choice == 'y' || choice == 'Y');

    return 0;
}