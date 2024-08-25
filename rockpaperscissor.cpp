#include <iostream>
#include<ctime>

char getUserChoice();
void showChoice(char choice);
char getComputerChoice();
void winner(char choice,char computerChoice);

int main(){

    char choice;
    char computerChoice;

    choice=getUserChoice();
    std::cout<<"Your choice is :";
    showChoice(choice);
    computerChoice=getComputerChoice();
    std::cout<<"Computer choice is :";
    showChoice(computerChoice);
    winner(choice , computerChoice);

  return 0;

}
char  getUserChoice(){

   
   char choice;

  do{ std::cout<<"Choose one of the following\n";
   std::cout<<"***************************\n";
   std::cout<<"'r' for rock\n";
   std::cout<<"'p' for paper\n";
   std::cout<<"'s' for scissors\n";
   std::cin>>choice;
   }while(choice !='r' && choice !='p'&& choice !='s');

   return choice;
}

void showChoice(char choice){
    

    switch(choice){
         case 'r': std::cout<<"Rock\n";
            break;
         case 'p': std::cout<<"Paper\n";
            break;
         case 's': std::cout<<"Scissor\n";
            break;
   
    }
}

char getComputerChoice(){
    srand(time(NULL));

    int num = rand()%3+1;
    char computerChoice;
    switch(num){
        case 1: return computerChoice='r';
        case 2: return computerChoice='p';
        case 3: return computerChoice='s';
    }
    return computerChoice;


}

void winner(char choice,char computerChoice){

   if(choice=='r'&& computerChoice=='r') {
        std::cout<<"You tied!";
   }
   else if(choice=='r'&& computerChoice=='p'){
        std::cout<<"You loose!";
   }
   else if (choice=='r'&& computerChoice=='s'){
     std::cout<<"You win!";
   }

   if(choice=='p'&& computerChoice=='r') {
        std::cout<<"You win!";
   }
   else if(choice=='p'&& computerChoice=='p'){
        std::cout<<"You tied!";
   }
   else if (choice=='p'&& computerChoice=='s'){
     std::cout<<"You lose!";
   }

    if(choice=='s'&& computerChoice=='r') {
        std::cout<<"You lose!";
   }
   else if(choice=='s'&& computerChoice=='p'){
        std::cout<<"You win!";
   }
   else if (choice=='s'&& computerChoice=='s'){
     std::cout<<"You tied!";
   }
}