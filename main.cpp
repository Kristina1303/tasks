#include <iostream>//cout and cin
#include <cstdlib>//to use srand
#include <ctime>//to acsess the current time
using namespace std;//to show the computer we wil use std from iosteram for all of our code

int main()//въвеждаме главната функция, за да ни тръгне кода
{//отваряща скоба за main
    srand(time(0)); //seed random number generator
    int countr = 0;
    int circles = 0;
    int start;
    cout << "chose a number for start" << endl;
    cin >> start;
    int end;
    cout << "Chose a number for end" << endl;
    cin >> end;
    int num = rand() % end + start; // random number between 1 and 100
    cout << "Guess My Number Game\n\n";//изкарва на конзолата текста в ""

    int tmp = num;
    int tmp2 = num;
    int diggets = 0;
    do
    {
       diggets++;
        tmp = tmp/10;

    } while (tmp != 0);
 
    int guess = 0;//въвеждаме променлива, която присвоява стойността 0
    while (guess != num) {//започваме цикъл с условие променливата да е различна от избраното число
        cout << "Enter a guess between the chosen number for start and the chosern number for end : ";//изкарваме на конзолата текста в "" ако условието е вярно
        cin >> guess;//въвеждаме от конзолата променливата
        if (guess == 0) {
            break;
        }
        if (guess > num) {//въвеждаме цикъл и поставяме условие
            cout << "Too high!\n\n";// ако условието е вярно му задаваме какво да изпечата на конзолата
            countr++;
        }//затваряща скоба за if
        else if (guess < num)// въвеждаме цикъл и поставяме условие
        {// отваряща скоба за else if
            cout << "Too low!\n\n";// ако условието е вярно му задаваме какво да изпечата на конзолата
        countr++;
        } //затваряща скоба за else if
        else {// въвеждаме цикъл като условието е ясно 
            cout << "Correct! You got it in "<< endl;// ако условието е вярно задаваме какво да се изпечата на конзолата
            cout << "You guessted the number with " << countr << " tries" << endl;
        }//затваряща скоба else

        if (countr == 5)
        {
            for (int i = 0; i < diggets; i++)
            {
                if (tmp2 / 10 == 8) circles = circles + 2;
                else if (tmp2 / 10 == 9 or tmp2 / 10 == 6) circles++;
           }cout << "Number has " << circles << " circles" << endl;
        }
        
    }//close while

    return 0;//прекъсваме кода успешно
}// затваряща скоба за main
