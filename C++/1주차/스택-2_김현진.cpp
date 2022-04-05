#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	int N;
	cin >> N;

	stack<int> stack;	//�ϳ��� stack���� �� ���� �ڷ����� ���� ����; <>�ȿ� ������ �ڷ��� ����
	string str;

	for (int i = 0; i < N; i++)	//���⼭ i�� iterator��� �θ�. (i �ʱ�ȭ; ���� ���� ����; i ������)
								//++�� ���� 1��ŭ ������Ų��. (<-> --�� 1��ŭ ���ҽ�Ŵ)
								//2 �̻��� ���� ��ȭ�� �ְ� ������ += ��� (i += 4�� i�� 4�� ������Ų��)
	{
		int temp;
		cin >> str;				//cin�� �� �ٷ� ���� �Էµ� ���⸦ �������� ������ �����Ѵ�

		if (str == "push") {
			cin >> temp;
			stack.push(temp);
		}
		else if (str == "pop") {
			if (stack.empty()) cout << "-1" << '\n';
			else {
				cout << stack.top() << '\n';
				stack.pop();
			}
		}
		else if (str == "size") {
			cout << stack.size() << '\n';
		}
		else if (str == "empty") {
			if (stack.empty()) cout << "1" << '\n';
			else cout << "0" << '\n';
		}
		else if (str == "top") {
			if (stack.empty()) cout << "-1" << '\n';
			else cout << stack.top() << '\n';
		}

		else break;				//���ǵ��� ���� �Է��� ������ break�� �Ἥ for loop���� �������´�
	}
	return 0;
}