#include <iostream>
#include "profile.hpp"

Profile::Profile(std::string newName, int newAge, std::string newCity, std::string newCountry, std::string newPronouns){
  name = newName;
  age = newAge;
  city = newCity;
  country = newCountry;
  pronouns = newPronouns;
}

std::string Profile::view_profile(){
  std::string hobby_string;
  for (std::string element : hobbies){
    hobby_string += " - " + element + "\n";
  }
  return name + " " + std::to_string(age) + " " + city + " " + country + " " + pronouns + "\n" + hobby_string + "\n";
}

void Profile::add_hobby(std::string new_hobby){
  hobbies.push_back(new_hobby);
}