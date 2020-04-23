#pragma once

#include <iostream>
#include <array>

const int numOfOptions = 3;

struct Question {
    std::string question;
    std::array<std::string, numOfOptions> options;
    int correctOption, chosenOption;

    Question(std::string question, std::array<std::string, numOfOptions> options, int correctOption) {
        this->question = question;
        this->options = options;
        this->correctOption = correctOption;
    }

    void display() {
        std::cout << "\n\n" << question << "\n";

        int counter = 1;
        for (auto option : options) {
            std::cout << counter << ". " << option << "\n";
            counter++;
        }

        std::cin >> chosenOption;
    }

    bool isCorrect() {
        return chosenOption == correctOption;
    }
};