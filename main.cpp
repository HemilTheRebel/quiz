#include <iostream>
#include <random>

#include"que.h"

int randomNumber(int from, int to) {
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(from, to);

    return dist6(rng);
}

std::vector<Question> getQuestions() {
    return {
        Question("Question 1", {"Option 1", "Option 2", "Option3"}, 2),
        Question("Question 2", {"Option 1", "Option 2", "Option3"}, 1),
        Question("Question 3", {"Option 1", "Option 2", "Option3"}, 3),
    };
}

void removeQuestion(std::vector<Question> &questions, int index) {
    questions.erase(questions.begin() + index);
}

int main()
{
    int correctAnswers = 0;

    std::vector<Question> questionsLeft = getQuestions();
    
    while (questionsLeft.size() != 0) {
        int random = randomNumber(0, questionsLeft.size() - 1);

        Question question = questionsLeft.at(random);

        question.display();

        if (question.isCorrect()) {
            correctAnswers++;

            std::cout << "\nCorrect Answer!!!\n";
        } else {
            std::cout << "\nWrong Answer :(\n";
        }

        removeQuestion(questionsLeft, random);
    }
    
    std::cout << correctAnswers << " correctAnswers\n";
}
