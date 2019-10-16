// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: October 2019
// This function checks checks checks if the
//   user's package is accepted

#include <iostream>
#include <string>

int main() {
    // This function checks if user's package is accepted

    std::string weightAsString;
    std::string lengthAsString;
    std::string heightAsString;
    std::string widthAsString;
    int weight;
    int length;
    int height;
    int width;

    // input
    std::cout << "Welcome to CNL Delivery.\n";
    std::cout << "Please fill in the following for acceptance.\n";
    std::cout << "" << std::endl;
    std::cout << "Please enter the weight of your package (kg): ";
    std::cin >> weightAsString;

    // process
    try {
        weight = std::stoi(weightAsString);
        if (weight <= 27 && weight >= 0) {
             // output
             std::cout << "Please enter the length of your package (cm): ";
             std::cin >> lengthAsString;
             std::cout << "Please enter the width of your package (cm): ";
             std::cin >> widthAsString;
             std::cout << "Please enter the height of your package (cm): ";
             std::cin >> heightAsString;
             std::cout << "" << std::endl;

             // output
                try {
                    length = std::stoi(lengthAsString);
                    width = std::stoi(widthAsString);
                    height = std::stoi(heightAsString);

                    // process
                    int volume = length*width*height;

                    // output
                    if (volume <= 10000 && volume > 0) {
                        std::cout << "Volume: " << volume << " cm^3"
                        << std::endl;
                        std::cout << "" << std::endl;
                        std::cout << "Your package is accepted for delivery.\n";
                        std::cout << "Thank you for choosing CNL Delivery."
                                     " Until next time.";
                    } else {
                        std::cout << "Unfortunately, we can not accept "
                                     "your package as it does not meet the "
                                     "optimal volume of 10,000cm^3 and under.";
                    }
                } catch (std::invalid_argument) {
                    std::cout << "Wrong input. Try again.";
                }

        } else {
            std::cout << "" << std::endl;
            std::cout << "Unfortunately, we can not accept your package as it "
                         "does not meet the optimal weight of 27 kg and under.";
        }
    } catch (std::invalid_argument) {
        std::cout << "" << std::endl;
        std::cout << "Wrong input. Try again.";
    }
}
