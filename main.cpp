#include <iostream>

void Intro() {

    std::string getNews;

    std::cout << "Welcome to the Genius Trader Journal\n";
    std::cout << "Would you like to load todays news times?\n";
    std::cout << "y/n: ";
    std::cin >> getNews;

    if (getNews == "y" || "Y" || "yes" || "Yes") {
        std::cout << "Is true\n";
    }
    else if (getNews == "n" || "N" || "No" || "no")
    {
        std::cout << "Is false\n";
    }
    else {
        std::cout << "Please enter 'n' for 'No' or 'y' for 'Yes'\n";
    }
}

int main()
{
    Intro();
}