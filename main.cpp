#include <iostream>
#include <string>

using namespace std;
struct Student {
  int rollNo;
    int TotalMarks;

};
const int Max_Student = 100;
int main() {
    struct Student students[Max_Student];
    int choise;
    do{
    cout << "<---Student Record Management System--->" << endl;
    cout<<"1. Add Student"<<endl;
    cout<<"2. Display Student"<<endl;
    cout<<"3. Search Student"<<endl;
    cout<<"4. Update Student Information"<<endl;
    cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choise;


    switch(choise) {
        case 1:cout<<"Add Student"<<endl;
        break;
        case 2:cout<<"Display Student"<<endl;
        break;
        case 3:cout<<"Search Student"<<endl;
        break;
        case 4:cout<<"Update Student Information"<<endl;
        break;
        case 5:cout<<"5. Exit"<<endl;
        break;
        default:cout<<"Invalid Choice"<<endl;

    }
}while(choise != 5);


}
