#include <iostream>
#include "profile.hpp"

int main() {

  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
  sam.add_hobby("Listening to audiobooks");
  sam.add_hobby("playing rec sports");
  sam.add_hobby("writing a speculative fiction novel");

  std::cout << sam.view_profile();

}