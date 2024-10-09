#include <iostream>
#include <vector>
using namespace std;


// bubble sort function
void bubbleSort(vector<int> &numbers) 
{
    int n = numbers.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (numbers[j] > numbers[j + 1]) 
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    vector<int> numbers; 
    int num;

    // input nume when -1 end
    cout << "������ �Է��ϼ��� (�����Ϸ��� -1�� �Է��ϼ���):";
    while (true) 
        {
        cin >> num;
        if (num == -1) 
        {
            break; 
        }
        numbers.push_back(num);
    }

    // sort numbers
    bubbleSort(numbers);

    // print result 
    cout << "�������� ����: ";
    for (int n : numbers) 
    {
        cout << n << " "; 
    }
    cout << endl;

    return 0;
}

