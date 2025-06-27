#include <iostream>
using namespace std;

int main() {

    // QUIZ GAME USING MULTI DIMENSIONAL ARRAYS
    string questions[] = {
        "1. What year was C++ created?: ",
        "2. Who invented C++?: ",
        "3. What is the predecessor of C++?: ",
        "4. Is the earth flat?: "
    };

    string options[][4] = {
        {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
        {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Elon Musk"},
        {"A. C", "B. C+", "C. C--", "D. B++"},
        {"A. Yes", "B. No", "C. Sometimes", "D. What's Earth?"}
    };

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++) {
        cout << "---------------------------------------" << endl;
        cout << questions[i] << endl;
        cout << "---------------------------------------" << endl;

        for (int j = 0; j < 4; j++) {
            cout << options[i][j] << endl;
        }

        cout << "Enter your answer (A, B, C, D): ";
        cin >> guess;
        guess = toupper(guess);

        if (guess == answerKey[i]) {
            cout << "CORRECT\n";
            score++;
        } else {
            cout << "WRONG!\n";
            cout << "Answer: " << answerKey[i] << endl;
        }
    }

    cout << "---------------------------------------" << endl;
    cout << "You score is " << score << " out of " << size << "." << endl;
    cout << "Score Percentage: " << score / (double(size))*100 << "%";
    
    return 0;
}
