//HackerHank: https://www.hackerrank.com/challenges/virtual-functions
//Author: Marcelo Linck


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/////////////////SOLUTION v

class Person{
    public:
        string name;
        int age; 
        virtual void getdata() = 0;
        virtual void putdata() = 0;
};

static int professor_id=0;
static int student_id=0;

class Professor : public Person{
    public:
        int publications;
        int cur_id;
        Professor(){
            cur_id=++professor_id;
        }
        void getdata(){
            cin >> name >> age >> publications;
        }
        void putdata(){
            cout << name << " " << age << " " << publications << " " << cur_id << endl;
        }
};

class Student : public Person{
    public:
        int marks[6];
        int cur_id;
        Student(){
            cur_id=++student_id;
        }
        void getdata(){
            cin >> name >> age;
            for(int i;i<6;i++) cin >> marks[i];
        }
        void putdata(){
            int sum=0;
            cout << name << " " << age;
            for(int i;i<6;i++) sum = sum+marks[i];
            cout << " " << sum;
            cout << " " << cur_id << endl;
        }
};
/////////////////SOLUTION ^

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
