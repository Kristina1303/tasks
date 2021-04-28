#include <iostream>//cout and cin
#include <cstdlib>//to use srand
#include <ctime>//to acsess the current time
using namespace std;//to show the computer we wil use std from iosteram for all of our code

int main()//âúâåæäàìå ãëàâíàòà ôóíêöèÿ, çà äà íè òðúãíå êîäà
{//îòâàðÿùà ñêîáà çà main
    setlocale(LC_ALL, "bulgarian");
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
    cout << "Guess My Number Game\n\n";//èçêàðâà íà êîíçîëàòà òåêñòà â ""

    int tmp = num;
    int tmp2 = num;
    int diggets = 0;
    do
    {
       diggets++;
        tmp = tmp/10;

    } while (tmp != 0);
 
    int guess = 0;//âúâåæäàìå ïðîìåíëèâà, êîÿòî ïðèñâîÿâà ñòîéíîñòòà 0
    while (guess != num) {//çàïî÷âàìå öèêúë ñ óñëîâèå ïðîìåíëèâàòà äà å ðàçëè÷íà îò èçáðàíîòî ÷èñëî
        cout << "Enter a guess between the chosen number for start and the chosern number for end : ";//èçêàðâàìå íà êîíçîëàòà òåêñòà â "" àêî óñëîâèåòî å âÿðíî
        cin >> guess;//âúâåæäàìå îò êîíçîëàòà ïðîìåíëèâàòà
        if (guess == 0) {
            break;
        }
        if (guess > num) {//âúâåæäàìå öèêúë è ïîñòàâÿìå óñëîâèå
            cout << "Too high!\n\n";// àêî óñëîâèåòî å âÿðíî ìó çàäàâàìå êàêâî äà èçïå÷àòà íà êîíçîëàòà
            countr++;
        }//çàòâàðÿùà ñêîáà çà if
        else if (guess < num)// âúâåæäàìå öèêúë è ïîñòàâÿìå óñëîâèå
        {// îòâàðÿùà ñêîáà çà else if
            cout << "Too low!\n\n";// àêî óñëîâèåòî å âÿðíî ìó çàäàâàìå êàêâî äà èçïå÷àòà íà êîíçîëàòà
        countr++;
        } //çàòâàðÿùà ñêîáà çà else if
        else {// âúâåæäàìå öèêúë êàòî óñëîâèåòî å ÿñíî 
            cout << "Correct! You got it in "<< endl;// àêî óñëîâèåòî å âÿðíî çàäàâàìå êàêâî äà ñå èçïå÷àòà íà êîíçîëàòà
            cout << "You guessted the number with " << countr << " tries" << endl;
        }//çàòâàðÿùà ñêîáà else

        if (countr == 5)
        {
            for (int i = 0; i < diggets; i++)
            {
                if (tmp2 / 10 == 8) circles = circles + 2;
                else if (tmp2 / 10 == 9 or tmp2 / 10 == 6) circles++;
           }cout << "Number has " << circles << " circles" << endl;
        }
        
    }//close while

    return 0;//ïðåêúñâàìå êîäà óñïåøíî
}// çàòâàðÿùà ñêîáà çà main
