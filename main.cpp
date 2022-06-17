//
//  main.cpp
//  WINONA_GAME
//
//  Created by Winona Clayton on 8/3/21.
//  Copyright © 2021 Winona Clayton. All rights reserved.
/*
 
 Who Want's To Be A Millionaire?
 
 
 class: game
 
    private members:
 
    numOfQuestions                             | const static int
    correctAns[numOfQuestions]                 | char
    userAns[numOfQuestions]                    | char
    userScore                                  | int
    chooseOption                               | int
    questionPrice                              | int
    wrongAns                                   | int
    usedHint                                   | bool
    q1, q2, q3, q4, q5,                        | const char*
    q6, q7, q8, q9, q10                        | const char*
    q1hint, q2hint, q3hint, q4hint, q5hint,    | const char*
    q6hint, q7hint, q8hint, q9hint, q10hint,   | const char*
    questions[numOfQuestions]                  | const char*
    hints[numOfQuestions]                      | const char*
    printMenu                                  | const char*
    inStructions                               | const char*
 

    public functions:
 
    playGame()                                  | void
    gameLoop()                                  | void
    newGame                                     | game
 
 
ALGORITHM:
 
    Step 1.     Start
    Step 2.     Define a class called game
    Step 3.     Declare private members/variables of the game class
    Step 4.     Declare public functions of the game class
    Step 5.     Declare function to play the game
    Step 5.1    Print 10 questions for user to answer
    Step 5.2    Print a message that the game is over
    Step 5.3    Display user's attempted answers
    Step 5.4    Calculate users score
    Step 5.5    Print final score message
    Step 6.     Declare function for main menu options
    Step 7.     Call the class game and create a new game
    Step 8.     Call the new game and start the gameLoop function
    Step 9.     Finish
 
 */



//1. Start

#include <iostream>
#include <string>
#include <iomanip>


using namespace std;


//2. Define a class called game
class game{

//3. Declare private members/variables of the game class
private:
    
    const static int numOfQuestions = 10;           //total number of questions in the game
    char correctAns[numOfQuestions] = {'C' , 'C' , 'A' , 'A' , 'B' , 'D' , 'C' , 'B' , 'A' , 'A'};   //the 10 correct answers
    char userAns[numOfQuestions] = {};              //user's answers
    int userScore = 0;                              //user's score
    int chooseOption;                               //user's option on main menu
    int questionPrice = 100000;                     //value of correct answer
    int wrongAns = 50000;                           //value of incorrect answer
    bool usedHint = false;                          //hint has not been used
    
    //question one
    const char* q1 =
    "+                                                                  +\n"
    "+                                                                  +\n"
    "+                                                                  +\n"
    "++++++++++++++++++++++++++++ QUESTION 1 ++++++++++++++++++++++++++++\n"
    "+                                                                  +\n"
    "+                    When a person is rudely ignored,              +\n"
    "+                   he is said to be getting a what?               +\n"
    "+                                                                  +\n"
    "+------------------------------------------------------------------+\n"
    "+                          A. Hot Knee                             +\n"
    "+                          B. Bad headache                         +\n"
    "+                          C. Cold Shoulder                        +\n"
    "+                          D. Cold toe                             +\n"
    "+                                                                  +\n"
    "+                     Please enter your answer:                    +\n";
    
    //question one hint
    const char* q1hint =
    "+                                                                  +\n"
    "+                                                                  +\n"
    "+                          B. Bad headache                         +\n"
    "+                          C. Cold Shoulder                        +\n"
    "+                                                                  +\n"
    "+                                                                  +\n";
    
    //question two
    const char* q2 =
    "+                                                                  +\n"
    "+                                                                  +\n"
    "+                                                                  +\n"
    "++++++++++++++++++++++++++++ QUESTION 2 ++++++++++++++++++++++++++++\n"
    "+                                                                  +\n"
    "+                 What colour ball should normally be              +\n"
    "+                   struck by the cue in snooker?                  +\n"
    "+                                                                  +\n"
    "+------------------------------------------------------------------+\n"
    "+                          A. Orange                               +\n"
    "+                          B. Black                                +\n"
    "+                          C. White                                +\n"
    "+                          D. Mauve                                +\n"
    "+                                                                  +\n"
    "+                     Please enter your answer:                    +\n";
    
    //question two hint
    const char* q2hint =
    "+                                                                  +\n"
    "+                                                                  +\n"
    "+                          C. White                                +\n"
    "+                          D. Mauve                                +\n"
    "+                                                                  +\n"
    "+                                                                  +\n";
    
    //question three
    const char* q3 =
    "+                                                                  +\n"
    "+                                                                  +\n"
    "+                                                                  +\n"
    "++++++++++++++++++++++++++++ QUESTION 3 ++++++++++++++++++++++++++++\n"
    "+                                                                  +\n"
    "+               Someone described as 'butterfingers'               +\n"
    "+                would have a propensity for what?                 +\n"
    "+                                                                  +\n"
    "+------------------------------------------------------------------+\n"
    "+                          A. Being clumsy                         +\n"
    "+                          B. Playing the piano                    +\n"
    "+                          C. Gardening                            +\n"
    "+                          D. Cookery                              +\n"
    "+                                                                  +\n"
    "+                     Please enter your answer:                    +\n";
    
    //question three hint
    const char* q3hint =
    "+                                                                  +\n"
    "+                                                                  +\n"
    "+                          A. Being clumsy                         +\n"
    "+                          B. Playing the piano                    +\n"
    "+                                                                  +\n"
    "+                                                                  +\n";
    
    //question four
    const char* q4 =
    "+                                                                  +\n"
    "+                                                                  +\n"
    "+                                                                  +\n"
    "++++++++++++++++++++++++++++ QUESTION 4 ++++++++++++++++++++++++++++\n"
    "+                                                                  +\n"
    "+               Which word means a signed document                 +\n"
    "+               in support of a particular action?                 +\n"
    "+                                                                  +\n"
    "+------------------------------------------------------------------+\n"
    "+                          A. Petition                             +\n"
    "+                          B. Position                             +\n"
    "+                          C. Partition                            +\n"
    "+                          D. Perforation                          +\n"
    "+                                                                  +\n"
    "+                     Please enter your answer:                    +\n";
    
    //question four hint
    const char* q4hint =
    "+                                                                  +\n"
    "+                                                                  +\n"
    "+                          A. Petition                             +\n"
    "+                          C. Partition                            +\n"
    "+                                                                  +\n"
    "+                                                                  +\n";
    
    //question five
    const char* q5 =
    "+                                                                  +\n"
    "+                                                                  +\n"
    "+                                                                  +\n"
    "++++++++++++++++++++++++++++ QUESTION 5 ++++++++++++++++++++++++++++\n"
    "+                                                                  +\n"
    "+               What destroyed Hirashima and Nagazaki?             +\n"
    "+                                                                  +\n"
    "+                                                                  +\n"
    "+------------------------------------------------------------------+\n"
    "+                          A. An earthquake                        +\n"
    "+                          B. An atomic bomb                       +\n"
    "+                          C. A volcano                            +\n"
    "+                          D. A war                                +\n"
    "+                                                                  +\n"
    "+                     Please enter your answer:                    +\n";
    
    //question five hint
    const char* q5hint =
    "+                                                                  +\n"
    "+                                                                  +\n"
    "+                          B. An atomic bomb                       +\n"
    "+                          C. A volcano                            +\n"
    "+                                                                  +\n"
    "+                                                                  +\n";
    
    //question six
    const char* q6 =
    "+                                                                  +\n"
    "+                                                                  +\n"
    "+                                                                  +\n"
    "++++++++++++++++++++++++++++ QUESTION 6 ++++++++++++++++++++++++++++\n"
    "+                                                                  +\n"
    "+               When playing Blackjack, how many points            +\n"
    "+                    would be considered a bust?                   +\n"
    "+                                                                  +\n"
    "+------------------------------------------------------------------+\n"
    "+                          A. 19                                   +\n"
    "+                          B. 21                                   +\n"
    "+                          C. 15                                   +\n"
    "+                          D. 22                                   +\n"
    "+                                                                  +\n"
    "+                     Please enter your answer:                    +\n";
    
    //question six hint
    const char* q6hint =
    "+                                                                  +\n"
    "+                                                                  +\n"
    "+                          B. 21                                   +\n"
    "+                          D. 22                                   +\n"
    "+                                                                  +\n"
    "+                                                                  +\n";
    
    //question seven
    const char* q7 =
    "+                                                                  +\n"
    "+                                                                  +\n"
    "+                                                                  +\n"
     "++++++++++++++++++++++++++++ QUESTION 7 ++++++++++++++++++++++++++++\n"
     "+                                                                  +\n"
     "+              Oysters can change something most other             +\n"
     "+                   animals cannot. What is it?                    +\n"
     "+                                                                  +\n"
     "+------------------------------------------------------------------+\n"
     "+                          A. Their size                           +\n"
     "+                          B. The thickness of their shell         +\n"
     "+                          C. Their gender                         +\n"
     "+                          D. Their colour                         +\n"
     "+                                                                  +\n"
     "+                     Please enter your answer:                    +\n";
    
    //question seven hint
    const char* q7hint =
    "+                                                                  +\n"
    "+                                                                  +\n"
    "+                          C. Their gender                         +\n"
    "+                          D. Their colour                         +\n"
    "+                                                                  +\n"
    "+                                                                  +\n";
    
    //question eight
    const char* q8 =
    "+                                                                  +\n"
    "+                                                                  +\n"
    "+                                                                  +\n"
     "++++++++++++++++++++++++++++ QUESTION 8 ++++++++++++++++++++++++++++\n"
     "+                                                                  +\n"
     "+                How many years are there in an eon?               +\n"
     "+                                                                  +\n"
     "+                                                                  +\n"
     "+------------------------------------------------------------------+\n"
     "+                          A. 35 years                             +\n"
     "+                          B. 1 billion years                      +\n"
     "+                          C. 1,000 years                          +\n"
     "+                          D. 25,000 years                         +\n"
     "+                                                                  +\n"
     "+                     Please enter your answer:                    +\n";
    
    //question eight hint
    const char* q8hint =
    "+                                                                  +\n"
    "+                                                                  +\n"
    "+                          B. 1 billion years                      +\n"
    "+                          D. 25,000 years                         +\n"
    "+                                                                  +\n"
    "+                                                                  +\n";
    
    //question nine
    const char* q9 =
    "+                                                                  +\n"
    "+                                                                  +\n"
    "+                                                                  +\n"
     "++++++++++++++++++++++++++++  QUESTION 9  ++++++++++++++++++++++++++\n"
     "+                                                                  +\n"
     "+                   Which one of the planets has                   +\n"
     "+                        the longest day?                          +\n"
     "+                                                                  +\n"
     "+------------------------------------------------------------------+\n"
     "+                          A. Venus                                +\n"
     "+                          B. Mars                                 +\n"
     "+                          C. Earth                                +\n"
     "+                          D. Uranus                               +\n"
     "+                                                                  +\n"
     "+                     Please enter your answer:                    +\n";
    
    //question nine hint
    const char* q9hint =
    "+                                                                  +\n"
    "+                                                                  +\n"
    "+                          A. Venus                                +\n"
    "+                          B. Mars                                 +\n"
    "+                                                                  +\n"
    "+                                                                  +\n";
    
    //question ten
    const char* q10 =
    "+                                                                  +\n"
    "+                                                                  +\n"
    "+                                                                  +\n"
     "++++++++++++++++++++++++++++  QUESTION 10  ++++++++++++++++++++++++++\n"
     "+                                                                  +\n"
     "+                   Where would you find the start                 +\n"
     "+                        of the Amazon river?                      +\n"
     "+                                                                  +\n"
     "+------------------------------------------------------------------+\n"
     "+                          A. Peru                                 +\n"
     "+                          B. Bolivia                              +\n"
     "+                          C. Brazil                               +\n"
     "+                          D. Chile                                +\n"
     "+                                                                  +\n"
     "+                     Please enter your answer:                    +\n";
    
    //question ten hint
    const char* q10hint =
    "+                                                                  +\n"
    "+                                                                  +\n"
    "+                          A. Peru                                 +\n"
    "+                          D. Chile                                +\n"
    "+                                                                  +\n"
    "+                                                                  +\n";

    
    const char* questions [numOfQuestions] = {q1, q2 ,q3, q4, q5, q6, q7, q8, q9 ,q10}; //questions in order from 1 - 10
    
    const char* hints [numOfQuestions] = {q1hint, q2hint, q3hint, q4hint, q5hint, q6hint, q7hint, q8hint, q9hint, q10hint}; //hints in order from 1-10
    
    //menu screen
    const char* printMenu =
        "++++++++++++++++++++++++++++ WELCOME TO ++++++++++++++++++++++++++++\n"
        "+                                                                  +\n"
        "+                   Who Wants To Be A Millionaire                  +\n"
        "+                                                                  +\n"
        "+                                                                  +\n"
        "+--------------------------Programmed By---------------------------+\n"
        "+                                                                  +\n"
        "+                          Winona Clayton                          +\n"
        "+                        Programming II                            +\n"
        "+                Academy of Information Technology                 +\n"
        "+                                                                  +\n"
        "+                                                                  +\n"
        "+                                                                  +\n"
         

        "-*-*-*-*-*-*-*-*-*-*-*-*-*-* Main Menu *-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n"
        "+                                                                  +\n"
        "+                          [1] Play Game                           +\n"
        "+                          [2] Instructions                        +\n"
        "+                          [3] Exit Game                           +\n"
        "+                                                                  +\n"
        "+                    Please enter your option:                     +\n";
    
    //instructions screen
    const char* inStructions =
        "+                                                                  +\n"
        "+                                                                  +\n"
        "+                                                                  +\n"
        "-*-*-*-*-*-*-*-*-*-*-       INSTRUCTIONS     *-*-*-*-*-*-*-*-*-*-*-*\n"
        "+                                                                  +\n"
        "+         You have been chosen to participate in a trivial         +\n"
        "+   game that could potentially make you 1 million dollars richer! +\n"
        "+                                                                  +\n"
        "+   There are 10 questions and all questions are multiple choice.  +\n"
        "+      Please type one of the four answers that you think is       +\n"
        "+          correct in capital letter format (A, B, C or D).        +\n"
        "+                                                                  +\n"
        "+    For each question answered correctly you will gain $100,000   +\n"
        "+       For each question answered incorrectly, $50,000 will be    +\n"
        "+                   taken off your current score.                  +\n"
        "+                                                                  +\n"
        "+                            50/50 HINT                            +\n"
        "+      If you are having trouble on a question, you can type       +\n"
        "+   the letter 'H' into the answer portal and you will be shown    +\n"
        "+           two answers instead of four to choose from.            +\n"
        "+                                                                  +\n"
        "+      * PLEASE NOTE THAT THE 50/50 HINT IS ONLY VALID ONCE *      +\n"
        "+                                                                  +\n"
        "+        Your score will be revealed at the end of the game.       +\n"
        "+                                                                  +\n"
        "+                        -*-*-*-*-*-*-*-*-                         +\n"
        "+                         PRESS 1 TO PLAY                          +\n"
        "+                           GOOD LUCK!!!                           +\n";
    
    
//4. Declare public functions of the game class
public:
    
    //5. Declare function to play the game
    void playGame(){
        
        //5.1 Print 10 questions for user to answer
        for (int i = 0; i < numOfQuestions; i++ ) {     //looping through questions 1 - 10
            cout << questions[i];                       //print question
            cin >> userAns[i];                          //get answer from user
            
            while ((userAns[i] != 'A' && userAns[i] != 'B' && userAns[i] != 'C' && userAns[i] != 'D')) {  //while user's answer is not A,B,C or D
                
                if ((userAns[i] == 'H' || userAns[i] == 'h') && usedHint == false) {  //if user's answer is H or h and the hint has not been used
                    cout << hints[i];                   //print hint
                    cin >> userAns[i];                  //get answer from user
                    usedHint = true;                    //hint has now been used
                }
                
                //otherwise
                else {
                    cout << "               * Please use uppercase letters (A,B,C,D) *             \n" << endl; //ask user to enter a valid letter
                    if (usedHint)                       //if the hint has been used
                    cout << "                      * Your hint has been used *                     \n" << endl; //print your hint has been used
                    cin >> userAns[i];                  //get answer from user
                    
                }
            }
        }
        
        //5.2 Print a message that the game is over
        cout << "                                                                    \n" << endl;
        cout << "                                                                    \n" << endl;
        cout << "                                                                    \n" << endl;
        cout << "+++++++++++++++     You have finished the game!    +++++++++++++++++\n" << endl;
        //print a message that the user's score is being calculated
        cout << "++++++++    Please wait while we calculate your score...    ++++++++\n" << endl;
        cout << "                                                                    \n" << endl;
        cout << "                                                                    \n" << endl;
        cout << "                                                                    \n" << endl;
        
            //5.3 Display user's attempted answers
            cout << "                       Your answers:                               \n" << endl;
            cout << "                       Question 1:" << userAns[0] <<               "\n" << endl;
            cout << "                       Question 2:" << userAns[1] <<               "\n" << endl;
            cout << "                       Question 3:" << userAns[2] <<               "\n" << endl;
            cout << "                       Question 4:" << userAns[3] <<               "\n" << endl;
            cout << "                       Question 5:" << userAns[4] <<               "\n" << endl;
            cout << "                       Question 6:" << userAns[5] <<               "\n" << endl;
            cout << "                       Question 7:" << userAns[6] <<               "\n" << endl;
            cout << "                       Question 8:" << userAns[7] <<               "\n" << endl;
            cout << "                       Question 9:" << userAns[8] <<               "\n" << endl;
            cout << "                       Question 10:"<< userAns[9] <<               "\n" << endl;
            cout << "                                                                    \n" << endl;
            cout << "                                                                    \n" << endl;
            cout << "                                                                    \n" << endl;
        

        //5.4 Calculate users score
        
        //loop through ten times
        for (int j = 0; j < numOfQuestions; j++){
            
            //if the correct answer is the same as the users answer
            if (userAns[j] == correctAns[j]){
                //the user's score will equal the user's current score plus question price ($100,000)
                userScore = userScore + questionPrice;
            }
                
            //otherwise, the user's score will equal the user's current score minus the value of an incorrect answer ($50,000)
            else {
                userScore = userScore - wrongAns;
                }
            }

        
    
        //5.5 Print final score message

        //if the user's score is 1000000 and has answered all questions correctly
        if(userScore == 1000000){
              
                //then print
                cout<<"+++++++++++++++++     YOU'RE A MILLIONAIRE!!!     ++++++++++++++++++ "<<endl;
                cout<<"+                                                                  + "<<endl;
                cout<<"                       WOW! Congatulations!                        + "<<endl;
                cout<<"+              You answered 10 out of 10 questions right           + "<<endl;
                cout<<"+                           which means...                         + "<<endl;
                cout<<"                     Your score is " << userScore << "               "<<endl;
                cout<<"+------------------------------------------------------------------+ "<<endl;
                cout<<"+                      YOU WALK HOME WITH...                       + "<<endl;
                cout<<"+                     ONE MILLIAN DOLLARS!!!                       + "<<endl;}
                
        //if the user's score is less than or equal to zero
        else if(userScore <= 0){
            
                //then print
                cout<<"+++++++++++++++++++++++  IT'S NOT YOUR DAY!  +++++++++++++++++++++++ "<<endl;
                cout<<"+                                                                  + "<<endl;
                cout<<"                 Unfortunately you have answered too               + "<<endl;
                cout<<"+               many questions incorrectly and will be             + "<<endl;
                cout<<"+                     going home with nothing :(                   + "<<endl;
                cout<<"+------------------------------------------------------------------+ "<<endl;
                cout<<"+                      Thank you for playing.                      + "<<endl;
                cout<<"+                      BETTER LUCK NEXT TIME!                      + "<<endl;}
                
        //otherwise, print any other answer which is a prize between $50,000-$850,000
        else{
                cout<<"+++++++++++++++++++++++   YOU'RE A WINNER!   +++++++++++++++++++++++ "<<endl;
                cout<<"+                                                                  + "<<endl;
                cout<<"+                  Congratulations! You're a winner!               + "<<endl;
                cout<<"+                                                                  + "<<endl;
                cout<<"+                 Your prize money is $" << userScore << "         + "<<endl;
                cout<<"+                                                                  + "<<endl;
                cout<<"+------------------------------------------------------------------+ "<<endl;}
    
                
        }
            
        
    

//6. Declare function for main menu options
void gameLoop(){
   
        
        cout << printMenu;              //display printMenu
        cin >> chooseOption;            //ask user to choose an option
    
    switch(chooseOption)                //switch case for the user's option
           {
            
           case 1:                      //if user enters 1
               playGame();              //the playGame function will begin
               break;
                   
           case 2:                      //if user enters 2
               cout << inStructions;    // print the instructions
                cin >> chooseOption;    //ask user to press 1 to continue to the game
                playGame();             //the playGame function will begin
               break;

           case 3:                      //if user enters 3
               exit(0);                 //the game will end
                break;
           }
};
};
    

    
int main() {
    
    //7. Call the class game and create a new game
    game newGame;
    
    //8. Call the new game and start the gameLoop function
    newGame.gameLoop();

    return 0;
}


//9. Finish

