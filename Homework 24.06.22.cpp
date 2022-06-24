#include <iostream>
using namespace std;

int main()
{
    //srand(time(0));

    //const int size = 20;

    //int first[size];
    //int second[size];

    //int index = 0;

    //for (int i = 0; i < size; i++) 
    //{
    //    first[i] = rand() % 200 - 99;
    //    cout << first[i] << "\t";
    //}

    //cout << "\n";

    //for (int i = 0; i < size; i++)
    //{
    //    if (first[i] > 0) 
    //    {
    //        second[index] = first[i];
    //        index++;
    //    }
    //}

    //for (int i = 0; i < size; i++)
    //{
    //    if (first[i] == 0) 
    //    {
    //        second[index] = first[i];
    //        index++;
    //    }
    //}

    //for (int i = 0; i < size; i++)
    //{
    //    if (first[i] < 0)
    //    {
    //        second[index] = first[i];
    //        index++;
    //    }
    //}

    //for (int i = 0; i < size; i++)
    //{
    //    cout << second[i] << "\t";
    //}

    //const int a = 10;
    //const int b = 8;
    //const int c = a + b;

    //int A[a]{10, 2, 5, 17, 30, 43, 3, 5, 17, 25};
    //int B[b]{10, 17, 5, 17, 25, 3, 43, 2};
    //int C[c]{};

    //for (int i = 0; i < a; i++)
    //{
    //    cout << A[i] << " ";
    //}

    //cout << "\n";

    //for (int i = 0; i < b; i++)
    //{
    //    cout << B[i] << " ";
    //}

    //int repeat = 0;
    //int index_c = 0;
    //for (int i = 0; i < a; i++)
    //{
    //    for (int j = 0; j < b; j++)
    //    {
    //        if (A[i] == B[j]);
    //        {
    //            for (int k = 0; k < c; k++)
    //            {
    //                if (C[k] == B[j])
    //                {
    //                    repeat++;
    //                }
    //            }
    //            if (repeat == 0)
    //            {
    //                C[index_c] = B[j];
    //                index_c++;
    //            }
    //            repeat = 0;
    //        }
    //    }
    //}

    //cout << "\n\n";

    //for (int i = 0; i < c; i++)
    //{
    //    cout << C[i] << " ";
    //}
    //cout << "\n";

    setlocale(0, "UKR");

    const int size = 5;

    int numbers[size];

    int min = 1;
    int max = 42;

    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        int num = min + (rand() % (max - min + 1));

        numbers[i] = num;
    }

    const int usize = 5;

	int answer[usize];

	cout << "По очереди введите 5 чисел" << "\n";

	for (int i = 0; i < usize; i++)
	{
		cin >> answer[i];
	}

    int counter = 0;
    
    int temp = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (answer[j] == numbers[i] && answer[j] != temp)
            {
                temp = answer[j];
                counter++;
            }
        }
    }

    if (counter > 5)
    {
        counter = 5;
    }

    int reward = 0;

    switch (counter)
    {
    case 1:
    {
        reward = 10;
        break;
    }
    case 2:
    {
        reward = 50;
        break;
    }
    case 3:
    {
        reward = 200;
        break;
    }
    case 4:
    {
        reward = 1000;
        break;
    }
    case 5:
    {
        reward = 3000;
        break;
    }
    default:
    {
        cout << "\nК сожалению, вы не отгадали ни одного числа.\n";
    }
    }

    if (counter > 0)
    {
        cout << "\nПоздравляем! Вы отгадали чисел: " << counter << "\n" << "Ваш выигрыш составляет " << reward << " гривен." << "\n";
    }

    cout << "\nЗагаданными числами были:\n";

    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << "\n";
    }

    cout << "\n";
}

