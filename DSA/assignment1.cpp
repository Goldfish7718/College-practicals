/* Write a Menu Driven C++ program to store sets for students' names participating in different events in Equinox such as coding, Project and Mastermind. */

// 1. Students who have participated in both coding and project
// 2. Find out student who have participated in both coding and project or mastermind
// 3. Find out students who have participated in coding but not in mastermind

#include<iostream>
#include<string.h>
using namespace std;

class student {
    public:
        char name[50];
        int event;
        int coding = 0, project = 0, mastermind = 0;

    public:
        void getData() {
            cout << "Enter name of student\n";
            cin >> name ;

            int cont = 0;

            do {
                cout << "Enter Event\n1. Coding\n2. Project\n3.Mastermind\n";
                cin >> event;

                if (event == 1) coding = 1;
                else if (event == 2) project = 1;
                else if (event == 3) mastermind = 1;

                cout << "Do you want to add more events?\n1.Yes\n2.No\n";
                cin >> cont;
            } while (cont == 1);
        }  
};

int main() {
    int n, i, choice, a = 0;
    
    student s[15];
    
    do {
        cout << "Welcome to computer department's Equinox Event Database:\nSelect from the following:\n1. Add Data\n2. Students who have participated in both coding and project.\n3. Students who have participated in both coding and project or mastermind.\n4. Students who have participated in coding but not mastermind.\n5. All students\n6. Exit\n";
        cin >> choice;
        
        switch (choice) {
        
        case 1:
            cout << "\nEnter Number of students";
            cin >> n;

            for (i = 0; i < n; i++) {
                s[i].getData();
            };

            break;
                
        case 2:
            for (i = 0; i < n; i++) {
                if (s[i].coding == 1 && s[i].project == 1) {
                    cout << "Name:" << s[i].name << " Events: Coding and Project" << endl;
                }
            }

            break;
            
        case 3:
            for (i = 0; i < n; i++) {
                if (s[i].coding == 1) {
                    if (s[i].project == 1) {
                        cout << "Name:" << s[i].name << " Events: Coding and project" << endl;
                    } else if (s[i].mastermind == 1) {
                        cout << "Name:" << s[i].name << " Events: Coding and mastermind" << endl;
                    };
                };
            };

            break;

        case 4:
            for (i = 0; i < n; i++) {
                if (s[i].coding == 1 && s[i].mastermind == 0) {
                   if (s[i].project == 1) {
                    cout << "Name: " << s[i].name << " Event: Coding and project" << endl;
                   } else {
                    cout << "Name: " << s[i].name << " Event: Coding " << endl;
                   }
                }
            }

            break;

        case 5:
            for (i = 0; i < n; i++) {
                cout << "Name: " << s[i].name << "Events: ";

                if (s[i].coding == 1) cout << "Coding, ";
                if (s[i].project == 1) cout << "Project, ";
                if (s[i].mastermind == 1) cout << "Mastermind";

                cout << endl;
            }

            break;

        case 6:
            exit(0);
            break;
            
        default:
            cout << "Please Enter a Valid choice";
        }
            
        cout << "Do you want to continue?\nPress 1 for yes\nPress 0 for no";
        cin >> a;
    
    } while (a == 1);

    return 0;
}
