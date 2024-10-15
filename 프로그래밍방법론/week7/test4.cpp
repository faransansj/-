#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book
{
public:
    string title, author;
    Book(string bookTitle, string bookAuthor)
        :title(bookTitle), author(bookAuthor) {}
};

class BookList
{
private:
    vector<Book> books; // book list 

public:
    // add book
    void addBook(const string& title, const string& author)
    {
        books.emplace_back(title, author);
        cout << "���� \"" << title << "\"�� �߰��Ǿ����ϴ�." << endl;
    }

    // print book list 
    void displayBooks() const
    {
        if (books.empty())
        {
            cout << "���� ���� ����� ��� �ֽ��ϴ�." << endl;
            return;
        }

        cout << "���� ���:" << endl;
        for (const auto& book : books)
        {
            cout << "����: " << book.title << ", ����: " << book.author << endl;
        }
    }
};

int main()
{
    int input_num;
    string input_title, input_author;

    BookList myBookList;
    while (true)
    {
        cout << "������ �����ý���" << endl
            << "1) ���� ��� ��ȸ" << endl
            << "2) ���� �߰� " << endl
            << "3) ����" << endl
            << "�Է� : ";
        cin >> input_num;
        if (input_num == 1)
        {
            myBookList.displayBooks();
        }

        if (input_num == 2)
        {
            cout << "��ǰ���� �Է��ϼ��� : ";
            cin >> input_title;
            cout << "�۰����� �Է��ϼ��� : ";
            cin >> input_author;
            myBookList.addBook(input_title, input_author);
        }
        if (input_num == 3)
        {
            break;
        }
        //else ���� ��������
        //{
        //    cout << "�ùٸ� �Է��� �ƴմϴ�." << endl;
        //}
    }
    return 0;
}