#include <string>
#include <iostream>
using namespace std;

class AbstractPerson {
protected:
    string FirstName;
    string LastName;
    string DR;
public:
    virtual void Show_Info(void) = 0;
};

class PersonSchoolman :AbstractPerson {
public:

    PersonSchoolman(string FirstName_) {
        FirstName = FirstName_;
    };
    PersonSchoolman(string FirstName_, string LastName_) {
        FirstName = FirstName_;
        LastName = LastName_;
    };
    PersonSchoolman(string FirstName_, string LastName_, string DR_) {
        FirstName = FirstName_;
        LastName = LastName_;
        DR = DR_;
    };

    void Show_Info() {
        cout << FirstName << "    " << LastName << "     " << DR << '\n';
    }
};

class PersonGraduate :AbstractPerson {
    int MiddleBall;
public:

    PersonGraduate(string FirstName_) :MiddleBall(0) {
        FirstName = FirstName_;
    };

    PersonGraduate(string FirstName_, string LastName_) :MiddleBall(0) {
        FirstName = FirstName_;
        LastName = LastName_;
    };

    PersonGraduate(string FirstName_, string LastName_, string DR_) :MiddleBall(0) {
        FirstName = FirstName_;
        LastName = LastName_;
        DR = DR_;
    };

    PersonGraduate(string FirstName_, string LastName_, string DR_, int MiddleBall_) :MiddleBall(0) {
        FirstName = FirstName_;
        LastName = LastName_;
        DR = DR_;
        MiddleBall = MiddleBall_;
    };

    void Show_Info() {
        cout << FirstName << "    " << LastName << "    " << DR << "    ";
        if (MiddleBall) cout << MiddleBall;
        cout << '\n';
    }
};

int main() {


    cout << "\n\nSCHOOLMANS:\n";
    PersonSchoolman schoolman1("WASA");
    PersonSchoolman schoolman2("PETR", "IVANOV");
    PersonSchoolman schoolman3("SERGEY", "ALEKSEEV", "1982");

    schoolman3.Show_Info();
    schoolman2.Show_Info();
    schoolman1.Show_Info();

    cout << "\n\nGRADUATES:\n";
    PersonGraduate graduate1("ANDREY");
    PersonGraduate graduate2("GENADIY", "JAKOVLEW");
    PersonGraduate graduate3("PAVEL", "ALEKSEEV", "1966");
    PersonGraduate graduate4("KOSTIA", "KRIVCOW", "1977", 4);


    graduate4.Show_Info();
    graduate3.Show_Info();
    graduate2.Show_Info();
    graduate1.Show_Info();
    }