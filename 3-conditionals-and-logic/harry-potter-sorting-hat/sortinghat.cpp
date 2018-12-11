#include <iostream>

int main() {

  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  int answer1, answer2, answer3;

  std::cout << "================================\n";
  std::cout << "Welcome to the Sorting Hat Quiz!\n";
  std::cout << "================================\n\n";

  // ========== Question 1 ==========

  std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";

  std::cout << "  1) The Good\n";
  std::cout << "  2) The Great\n";
  std::cout << "  3) The Wise\n";
  std::cout << "  4) The Bold\n\n";

  std::cin >> answer1;

  if (answer1 == 1) {

    hufflepuff++;

  }
  else if (answer1 == 2) {

    slytherin++;

  }
  else if (answer1 == 3) {

    ravenclaw++;

  }
  else if (answer1 == 4) {

    gryffindor++;

  }

  // ========== Question 2 ==========

  std::cout << "Q2) Dawn or Dusk?\n\n";

  std::cout << "  1) Dawn\n";
  std::cout << "  2) Dusk\n\n";

  std::cin >> answer2;

  if (answer2 == 1) {

    gryffindor++;
    ravenclaw++;

  }
  else if (answer1 == 2) {

    hufflepuff++;
    slytherin++;

  }
  else {

    std::cout << "Invalid input\n";

  }

  // ========== Question 3 ==========

  std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n";

  std::cout << "  1) The violin\n";
  std::cout << "  2) The trumpet\n";
  std::cout << "  3) The piano\n";
  std::cout << "  4) The drum\n\n";

  std::cin >> answer3;

  if (answer1 == 1) {

    slytherin++;

  }
  else if (answer1 == 2) {

    hufflepuff++;

  }
  else if (answer1 == 3) {

    ravenclaw++;

  }
  else if (answer1 == 4) {

    gryffindor++;

  }

  // ========== Sorting ==========

  std::cout << "Congrats on being sorted into... ";

  int max = 0;
  std::string house;

  if (gryffindor > max) {

    max = gryffindor;
    house = "Gryffindor";
  }

  if (hufflepuff > max) {

    max = hufflepuff;
    house = "Hufflepuff";

  }
  if (ravenclaw > max) {

    max = ravenclaw;
    house = "Ravenclaw";

  }
  if (slytherin > max) {

    max = slytherin;
    house = "Slytherin";

  }

  std::cout << house << "!\n";

  return 0;

}