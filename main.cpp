#include <iostream>
#include <cstdlib>
#include <ctime> 


using namespace std; 

int main() 
{ 
  srand(static_cast<unsigned int>(time(0))); 
  int randomNumber = rand() % 4 + 1; 
  int randomNum = rand() % 4 + 1; 
  
  std::cout << "Hello Player! \n"; // Welcome Player
  int health = 10; //Set up the game
  std::cout << "Health is: " << health << endl;
  
  int iterator = (0);
  

  while (health > 0 ) { 
  
  std::cout << "Turn Number:" << iterator << endl;
  iterator = iterator + 1; 
  if (iterator > 4)
  {
    std::cout << "You Win, Congrats!" << endl;
    break;
  }

  int attack = (randomNumber); 
  cout << "The attack was a: " << attack << endl; 
  
  std::cout << "You were attacked, now block! \n"; 

  int block = (randomNum); 
  std::cout << "Your block was a: " <<block << endl; 

  if (block >= attack)
  { 
  std::cout << "You successfully blocked the attack!" <<endl; 
  }
  if (attack > block)
  {
  std::cout << "Oh no! You were hit!"<<endl;
  
  health = health - attack;
  }
  std::cout << "Health:" << health <<endl;
 
  
  if (health < 0)
  std::cout << "Oh no, better luck next time, you died!" << endl;

  if (health <= 2)
  std::cout << "You should see a doctor!" << endl; 
 
string sleep;
cin >> sleep;
if (sleep == "y"){
std::cout << "Continue" << endl;
continue;
}
if (sleep != "y"){
std::cout << "Game Over!";
break;
}

}

  

 



  return 0; 
}