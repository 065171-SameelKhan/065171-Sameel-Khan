#include <iostream>
#include <string>

using namespace std;

// Define the Contact class
class Contact {
private:
    string name;
    string number;
    string email;

public:
    Contact(string n, string num, string e)
    {
        name=n;
        number=num;
        email=e;
    }

    void displayContactInfo() {
        cout << "Name: " << name << endl;
        cout << "Phone Number: " << number << endl;
        cout << "Email: " << email << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    cout<<"-------contact management system-------"<<endl;
    Contact contact1("sameel", "123-456-7890", "sam123@gamail.com");
    Contact contact2("ali", "234-567-8901", "ali19@gamail.com");
    Contact contact3("umar", "345-678-9012", "umer78@gamail.com");

    Contact contacts[3] = {contact1, contact2, contact3};

    for (int i=0;i<3;i++) {
        contacts[i].displayContactInfo();
    }

    return 0;
}
