#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main()
{
    // Create a data containing sm's
    vector<int> data = {0, 1, 2, 3, 4, 5, 6};
 
    // Print out the vector data
    cout << "Sleep data: ";
    for (int ns : data)
        cout << ns << ' ';
    cout << '\n';
    
    string touch_naked_body = "\u2665";
    cout << touch_naked_body << endl;
    cout << "Нажмите ввод:";
    getline(cin, touch_naked_body);

    for (int sm = 1; sm <= 12; sm++)
        data.push_back(sm);
    
    // Print out the vector data
    cout << "Stand data: ";
    for (int ns : data)
        cout << ns << ' ';
    cout << '\n';

    return 0;
}