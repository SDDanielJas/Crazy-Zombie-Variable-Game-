#include <iostream>
#include <ctime> 
#include <cstdlib> 
using namespace std;

int main() {
  cout << "Welcome to the newest adventure game!\n";
  //game setup 
  int health = 10;
  srand(time (0)); 
  //game story setup
   cout << " \n"; 
   cout << "You're a man named kyle.\n"; 
   cout << " \n"; 
   cout << "You wake up in the hotle you fell asleep in last night but something is differnt!\n"; 
   cout << " \n"; 
   cout << "Your wife and kids are gone! Your phone starts to ring (type answer) .\n"; 
   string answer; 
   cin >> answer; 
   if (answer == "answer") {
   cout << " \n"; 
   cout << "A voice says if you want to see your wife and kids again you have to make it out of the hotle!\n"; 
   cout << " \n"; 
   cout << "kyle takes a peak out of his hotle door and sees the hotle is over run with zombies.\n"; 
   cout << " \n"; 
   
  //hallway while loop experiment
  string playerInput = "no"; 
  while (playerInput != "yes") { 
  cout << "Do you want to go out into the hall yet? Take as much time as you need! Type yes or no\n"; 
  cin >> playerInput; 
  if(playerInput == "no" || playerInput == "yes") { 
    continue; }
    else {
      cout << "You cant stay here forever! \n"; 
      playerInput = "no";
    } 
  } 
  cout << "Kyle has " << health << " health points. type next\n" ;
  string next;
  cin >> next; 
  if (next == "next") { 
    int counter = 1; 
    while (health > 0 && counter < 4) { 
      cout << counter++ <<"  \n"; 
    cout << "You have no way of defending yourself! You can only block them off and escape!\n"; 
    int attack = (rand() % 4) + 1; 
    int block = rand() % 4 + 1; 
     if (attack == block || attack < block) {
      health +=0;
      cout << "You survived an attack! You have " << health << " health points.\n";  
    }
    if (attack > block ) { 
      health -=3; 
      cout << "You survied an attack but you lost some health.\n ";
      cout << "You now have " << health << " health points.\n ";  
 if (health <= 0) {
  cout << "Sorry bro, you're dead!\n"; 
}
}

    
    } 
    }
   if (health > 0)
   cout << "You made it! You are reunited with your family!\n "; 

   } 
   }  
   
