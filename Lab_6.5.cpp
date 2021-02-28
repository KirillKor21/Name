#include <list>
#include <iostream>
using namespace std;
/*
* 11

 211 Petrov 
 321 Ivanov
 211 Jen
 141 Vallionov
 254 Smith
 144 Brown
 211 Wilson
 384 Taylor
 254 Jackson
 228 White
 322 Williams
 */

int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    string lname;
    int num;
    list<string> lsname;
    list<int> lsnum;
    list<int> chet;
    cout << "Введите количество студентов: ";
    cin >> n;
    cout << "Введите номер группы и фамилию студента: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> num >> lname;
        lsname.push_back(lname);
        lsnum.push_back(num);
    }//вводим в лист
    

    while (!lsnum.empty())//пока лист не пуст 
    {
        for (auto is_lschet = chet.begin(); is_lschet != chet.end(); is_lschet++) {
            if (*is_lschet == lsnum.front()) {
                lsnum.pop_front();
                lsname.pop_front();
                break;
            }// Повторяется ли группа 
        }
        if (lsnum.empty()) {
            return 0;
        }
        auto it_lsnum = lsnum.begin();
        auto it_lsname = lsname.begin();

        cout << "В группе "<< lsnum.front() << " состоят студенты: " <<endl;
        for (int j = 0; it_lsnum != lsnum.end(); it_lsnum++, j++) {
            if (*it_lsnum == lsnum.front()) {
                advance(it_lsname, j);//перемещает it_lsname на j позицию
                cout << *it_lsname <<" ";
            }
        }
        chet.push_front(lsnum.front());
        lsnum.pop_front();
        lsname.pop_front();
        cout << endl << endl;
    }
}
