# include <iostream>

int main() {

  // create empty user input 
  float billPrice = 0;
float tipPercent = 0;

  std::cout << "Enter the bill amount: \n";
  std::cin >> billPrice;

  std:: cout << "Enter desired Tip tip percentage \n";
  std:: cin >> tipPercent;

  // calculate tip amount 
  int tipAmount = billPrice * tipPercent / 100;

  //print tip amount 
  std:: cout << "The tip is: $" << floor(tipAmount) << "\n";

}

