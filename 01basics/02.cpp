// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int age;
//     cin >> age;

//     if(age >= 18) {
//         cout<<"You are an adult"<<endl;
//     } else {
//         cout <<"You are not an adult"<<endl;
//     }

//     return 0;
// }

// Using if-else if statements is efficient in terms of space, memory, and execution time

#include <bits/stdc++.h>
using namespace std;

int main() {
    float cgpa;
    cout << "Enter CGPA (0-10): ";
    cin >> cgpa;

    // Output grade based on CGPA
    if (cgpa >= 9.0)
        cout << "Grade: O (Outstanding)" << endl;
    else if (cgpa >= 8.0)
        cout << "Grade: A+" << endl;
    else if (cgpa >= 7.0)
        cout << "Grade: A" << endl;
    else if (cgpa >= 6.0)
        cout << "Grade: B+" << endl;
    else if (cgpa >= 5.0)
        cout << "Grade: B" << endl;
    else
        cout << "Grade: F (Fail)" << endl;

    return 0;
}

