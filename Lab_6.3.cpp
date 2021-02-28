#include <iostream>
#include <queue>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int elem = 1;
	int n;
	queue <int> que_2, que_3, que_5;
	cout << "Введите n:";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << elem << " ";
		que_2.push(elem * 2);
		que_3.push(elem * 3);
		que_5.push(elem * 5);
		if (que_2 <= que_3 && que_2 <= que_5) {
			elem = que_2.front();
		}
		else if (que_5 <= que_3 && que_5 <= que_2) {
			elem = que_5.front();
		}
		else if (que_3 <= que_2 && que_3 <= que_5) {
			elem = que_3.front();
		}
		if (que_2.front() == elem) {
			que_2.pop();
		}
		if (que_3.front() == elem) {
			que_3.pop();
		}
		if (que_5.front() == elem) {
			que_5.pop();
		}
	}
}