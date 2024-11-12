#include <iostream>

int main()
{
    const int arr_size = 10;
    int arr[arr_size];
    std::cout << "Введите массив" << std::endl;
    for (int i = 0; i < arr_size; i++)
    {
        std::cout << "Введите " << i << " элемент\n";
        std::cin >> arr[i];
    }
    int temp = 1;
    int i = 0;
    while ((temp = 1) && (i < arr_size - 1))
    {
        if (arr[i] <= arr[i + 1])
        {
            temp = 1;
        }
        else
        {
            temp = 0;
        }
            i++;
    }

    if (temp == 1)
    {
        std::cout << "Последовательность возрастающая\n";
    }
    else
    {
        std::cout << "Последовательность не возрастающая\n";
    }

    return 0;
}
