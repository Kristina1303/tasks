#include <iostream>//cout and cin
#include <cstdlib>//to use srand
#include <ctime>//to acsess the current time
using namespace std;//to show the computer we wil use std from iosteram for all of our code

int main()//��������� �������� �������, �� �� �� ������ ����
{//�������� ����� �� main
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
    cout << "Guess My Number Game\n\n";//������� �� ��������� ������ � ""

    int tmp = num;
    int tmp2 = num;
    int diggets = 0;
    do
    {
       diggets++;
        tmp = tmp/10;

    } while (tmp != 0);
 
    int guess = 0;//��������� ����������, ����� ��������� ���������� 0
    while (guess != num) {//��������� ����� � ������� ������������ �� � �������� �� ��������� �����
        cout << "Enter a guess between the chosen number for start and the chosern number for end : ";//��������� �� ��������� ������ � "" ��� ��������� � �����
        cin >> guess;//��������� �� ��������� ������������
        if (guess == 0) {
            break;
        }
        if (guess > num) {//��������� ����� � ��������� �������
            cout << "Too high!\n\n";// ��� ��������� � ����� �� �������� ����� �� �������� �� ���������
            countr++;
        }//��������� ����� �� if
        else if (guess < num)// ��������� ����� � ��������� �������
        {// �������� ����� �� else if
            cout << "Too low!\n\n";// ��� ��������� � ����� �� �������� ����� �� �������� �� ���������
        countr++;
        } //��������� ����� �� else if
        else {// ��������� ����� ���� ��������� � ���� 
            cout << "Correct! You got it in "<< endl;// ��� ��������� � ����� �������� ����� �� �� �������� �� ���������
            cout << "You guessted the number with " << countr << " tries" << endl;
        }//��������� ����� else

        if (countr == 5)
        {
            for (int i = 0; i < diggets; i++)
            {
                if (tmp2 / 10 == 8) circles = circles + 2;
                else if (tmp2 / 10 == 9 or tmp2 / 10 == 6) circles++;
           }cout << "Number has " << circles << " circles" << endl;
        }
        
    }//close while

    return 0;//���������� ���� �������
}// ��������� ����� �� main
