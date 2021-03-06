/*���������� ��������� Array ��� ������ � ��������� ����������� �
������������ ������. � ��������� ������ �������������� �������� ���������
� ��������� ������������ ����������������� ���������.*/

#include <iostream>
using namespace std;

struct Array
{
    int n;
    double* data;

    Array (int a)
    {
        n = a;
        data = new double [a];
    };

    Array (const Array & A)
    {
        n = A.n;
        data = A.data;
    };

    ~Array ()
    {
        delete[]data;
    };

    void input ()
    {
        for (int i = 0; i < n; i++)
            cin >> *(data + i );
    };

    void output()
    {
        for (int i = 0; i < n; i++)
            cout << *(data + i) <<" ";
        cout << "\n";
    };

    double &operator [](int i)
    {
        return data[i];
    };

    double Max ()
    {
        double M = *data;
        for (int i = 0; i < n; i++)
            if (*(data + i) > M)
                M = *(data + i);
        return M;
    };

    double Min ()
    {
        double m = *data;
        for (int i = 0; i < n; i++)
            if (*(data + i) < m)
                m = *(data + i);
        return m;
    };

    double Avg ()
    {
        double s = 0;
        for (int i = 0; i < n; i++)
            s += *(data + i);
        return (s/n);
    };
};

void test (Array A)
{
    cout << "Copying constructor is working" << "\n";
}

int main()
{
    int N;
    cin >> N;

    Array Muhaha(N);
    Muhaha.input();
    cout << "\n";
    Muhaha.output();
    cout << "\n";

    cout << "Max value: " << Muhaha.Max() << "\n";
    cout << "Min value: " << Muhaha.Min() << "\n";
    cout << "Average value: " << Muhaha.Avg() << "\n";
    cout << "\n";

    cout << "First element: " << Muhaha[0] << "\n" << "Last element: " << Muhaha[N-1] << "\n";
    cout << "\n";
    test (Muhaha);

    return 0;
}
