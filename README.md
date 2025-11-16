Contact Book Application (C++ - Linked List)

A fully functional Contact Book Management Application developed using C++ and implemented with a Singly Linked List. This console-based program allows users to store, view, search, and delete contacts dynamically without any fixed storage limit. Each contact record is stored as a node in the linked list, demonstrating efficient memory management and pointer-based data handling.

🚀 Features

➕ Add new contact (stored as a Linked List node)

📄 Display all saved contacts

🔍 Search contacts by name or phone number

❌ Delete contacts using name or phone number

🔗 Dynamic Linked List implementation (no size limit)

🖥️ Simple & user-friendly menu-driven console interface

📚 Data Structure Used

The system uses a Singly Linked List, where:

Each node stores two fields: name and phone number

Nodes are dynamically allocated using new

next pointer stores the reference to the next contact

struct Node {
    string User_Name;
    string User_PhoneNo;
    Node* next;
};

🛠️ Tech Stack
Component	Details
Language	C++
Data Structure	Singly Linked List
Compiler	g++, MinGW, Turbo C++ or any C++11+ compiler
▶️ Menu Functions
Option	Operation	Description
1	Add Contact	Inserts a new contact at the end
2	Display Contacts	Shows all saved contacts
3	Search Contact	Search by name or phone number
4	Delete Contact	Removes matching contact node
5	Exit	Ends the program
📌 Sample Output
---MAIN MENU---
1. Add New Contact
2. Display All Contacts
3. Search Contact
4. Delete Contact
5. Exit
Enter your choice:

🚧 Future Enhancements

Validate phone numbers & names

Store data permanently in a file

Allow editing/updating a contact

Sort contacts alphabetically

Add GUI interface (Qt / Flutter / Web)

Export contacts to Excel/CSV

🤝 Contributions

Pull requests, issues, and suggestions are welcome!
Feel free to fork and enhance this project.
