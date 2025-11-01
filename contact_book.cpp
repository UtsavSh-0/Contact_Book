#include <iostream>
using namespace std;

struct Node {
    string User_Name;
    string User_PhoneNo;
    Node* next;

    Node(string name, string phone) {
        User_Name = name;
        User_PhoneNo = phone;
        next = NULL;
    }
};

Node* head = NULL;

// Insert contact at the end
void insertEnd(string name, string phoneno) {
    Node* newNode = new Node(name, phoneno);
    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
    cout << "\nNew Contact added Successfully\n";
}

// Display all contacts
void printList() {
    if (head == NULL) {
        cout << "\nNo contacts.\n";
        return;
    }

    cout << "\n--Contact List--\n";
    Node* temp = head;
    while (temp != NULL) {
        cout << "Contact Name: " << temp->User_Name << "\n";
        cout << "Phone Number: " << temp->User_PhoneNo << "\n";
        cout << "----------------\n";
        temp = temp->next;
    }
}

// Search contact by name or phone number
void searchContact() {
    if (head == NULL) {
        cout << "\nNo contacts.\n";
        return;
    }

    int choice;
    cout << "Search by: 1. Name  2. Phone Number\nEnter choice: ";
    cin >> choice;

    string query;
    bool found = false;
    Node* temp = head;

    if (choice == 1) {
        cout << "Enter Name to search: ";
        cin >> query;
        while (temp != NULL) {
            if (temp->User_Name == query) {
                cout << "\nContact Found:\n";
                cout << "Name: " << temp->User_Name << "\nPhone: " << temp->User_PhoneNo << "\n";
                found = true;
                break;
            }
            temp = temp->next;
        }
    } else if (choice == 2) {
        cout << "Enter Phone Number to search: ";
        cin >> query;
        int cnt=0;
        for (int i = 0; i < query.size(); i++)
        {
            cnt++;
        }
        
        while (temp != NULL) {
            if (temp->User_PhoneNo == query) {
                cout << "\nContact Found:\n";
                cout << "Name: " << temp->User_Name << "\nPhone: " << temp->User_PhoneNo << "\n";
                found = true;
                break;
            }
            temp = temp->next;
        }
    } else {
        cout << "Invalid choice.\n";
        return;
    }

    if (!found)
        cout << "\nContact Not Found.\n";
}

// Delete contact by name or phone number
void deleteContact() {
    if (head == NULL) {
        cout << "\nNo contacts.\n";
        return;
    }

    int choice;
    cout << "Delete by: 1. Name  2. Phone Number\nEnter choice: ";
    cin >> choice;

    string query;
    cout << "Enter value to delete: ";
    cin >> query;

    Node* temp = head;
    Node* prev = NULL;
    bool found = false;

    while (temp != NULL) {
        if ((choice == 1 && temp->User_Name == query) || 
            (choice == 2 && temp->User_PhoneNo == query)) {
            found = true;
            if (prev == NULL) {
                head = temp->next;
            } else {
                prev->next = temp->next;
            }
            delete temp;
            cout << "\nContact Deleted Successfully.\n";
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    if (!found)
        cout << "\nContact Not Found.\n";
}

// Main menu
int main() {
    int choice;
    string name, phone;

    do {
        cout << "\n---MAIN MENU---\n";
        cout << "1. Add New Contact\n";
        cout << "2. Display All Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Contact Name: ";
                cin >> name;
                cout << "Enter Phone Number: ";
                cin >> phone;
                insertEnd(name, phone);
                break;
            case 2:
                printList();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                cout << "\nExiting program...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
