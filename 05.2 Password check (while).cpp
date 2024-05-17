#include <iostream>
#include <string>

using namespace std;

const string USERNAME = "admin";
const string PASSWORD = "password";

int main()
{
  // Prompt the user for their username
  cout << "Enter your username: ";
  string username;
  cin >> username;

  // Prompt the user for their password
  cout << "Enter your password: ";
  string password;
  cin >> password;

  // Check if the username and password are correct
  while (username != USERNAME || password != PASSWORD)
  {
    // If the username or password is incorrect, display an error message
    cout << "Incorrect username or password. Please try again." << endl;

    // Prompt the user for their username again
    cout << "Enter your username: ";
    cin >> username;

    // Prompt the user for their password again
    cout << "Enter your password: ";
    cin >> password;
  }

  // If the username and password are correct, display a success message
  cout << "Welcome, " << username << "!" << endl;

  return 0;
}
