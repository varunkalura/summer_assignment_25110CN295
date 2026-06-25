//quiz application
#include <iostream>
using namespace std;

int main() {
    int score = 0;
    char answer;

    cout << "===== QUIZ APPLICATION =====\n\n";

    // Question 1
    cout << "1. What is the capital of India?\n";
    cout << "a) Mumbai\nb) Delhi\nc) Kolkata\nd) Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'b' || answer == 'B')
        score++;

    // Question 2
    cout << "\n2. Which language is used for C++ programming?\n";
    cout << "a) HTML\nb) CSS\nc) C++\nd) SQL\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'c' || answer == 'C')
        score++;

    // Question 3
    cout << "\n3. How many days are there in a week?\n";
    cout << "a) 5\nb) 6\nc) 7\nd) 8\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'c' || answer == 'C')
        score++;

    // Result
    cout << "\n===== RESULT =====\n";
    cout << "Your Score: " << score << "/3\n";

    if (score == 3)
        cout << "Excellent!\n";
    else if (score == 2)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";

    return 0;
}