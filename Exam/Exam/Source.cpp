#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	bool flagFirst = false;
	bool flagNeighbor = false;
	bool flagAllEq = true;
	int n, a, b;
	cin >> n; //���������� ���������
	for (int i = 0; i < n; i++)
	{
		if (!flagFirst) {
			cin >> a;
			flagFirst = true;
			continue;
		}
		cin >> b;
		if (a == b) {
			flagNeighbor = true;
		}
		else {
			flagAllEq = false;
		}
		a = b;
	}

	if (flagAllEq) {
		cout << "��� ����� �����";
	}
	else if (flagNeighbor)
	{
		cout << "���� �������� ������";
	}
	else
	{
		cout << "��� �������� ������";
	}

	cout << endl;
	system("Pause");
	return 0;
}