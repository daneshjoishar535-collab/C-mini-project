#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function to validate email address
bool isValidEmail(string email) {
    // Check if email is empty
    if (email.empty()) {
        return false;
    }
    
    // Variables to track special characters
    int atPosition = -1;
    int dotPosition = -1;
    
    // Check first character (should be alphanumeric)
    if (!isalnum(email[0])) {
        return false;
    }
    
    // Find @ symbol position
    for (int i = 0; i < email.length(); i++) {
        if (email[i] == '@') {
            if (atPosition != -1) {
                // Multiple @ symbols found
                return false;
            }
            atPosition = i;
        }
    }
    
    // Check if @ symbol exists and is not at start or end
    if (atPosition == -1 || atPosition == 0 || atPosition == email.length() - 1) {
        return false;
    }
    
    // Find dot (.) position after @ symbol
    for (int i = atPosition + 1; i < email.length(); i++) {
        if (email[i] == '.') {
            dotPosition = i;
            break;
        }
    }
    
    // Check if dot exists after @ and has characters after it
    if (dotPosition == -1 || dotPosition == atPosition + 1 || dotPosition == email.length() - 1) {
        return false;
    }
    
    // Check if domain extension has at least 2 characters
    if (email.length() - dotPosition - 1 < 2) {
        return false;
    }
    
    // Validate characters before @ (username part)
    for (int i = 0; i < atPosition; i++) {
        char c = email[i];
        if (!isalnum(c) && c != '.' && c != '_' && c != '-') {
            return false;
        }
    }
    
    // Validate characters after @ (domain part)
    for (int i = atPosition + 1; i < email.length(); i++) {
        char c = email[i];
        if (!isalnum(c) && c != '.' && c != '-') {
            return false;
        }
    }
    
    return true;
}

// Function to display email validation details
void displayEmailDetails(string email) {
    cout << "\n========================================\n";
    cout << "EMAIL VALIDATION DETAILS\n";
    cout << "========================================\n";
    cout << "Email: " << email << endl;
    
    if (isValidEmail(email)) {
        cout << "Status: VALID ✓\n";
        
        // Extract and display parts
        int atPos = email.find('@');
        string username = email.substr(0, atPos);
        string domain = email.substr(atPos + 1);
        
        cout << "Username: " << username << endl;
        cout << "Domain: " << domain << endl;
    } else {
        cout << "Status: INVALID ✗\n";
        cout << "Reason: Email format is incorrect\n";
    }
    cout << "========================================\n";
}

int main() {
    string email;
    int choice;
    
    cout << "=========================================\n";
    cout << "     EMAIL VALIDATION PROGRAM\n";
    cout << "=========================================\n\n";
    
    do {
        cout << "\nEnter an email address to validate: ";
        cin >> email;
        
        displayEmailDetails(email);
        
        cout << "\nDo you want to validate another email?\n";
        cout << "1. Yes\n";
        cout << "2. No\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        while (choice != 1 && choice != 2) {
            cout << "Invalid choice! Please enter 1 or 2: ";
            cin >> choice;
        }
        
    } while (choice == 1);
    
    cout << "\n=========================================\n";
    cout << "Thank you for using Email Validator!\n";
    cout << "=========================================\n";
    
    return 0;
}


