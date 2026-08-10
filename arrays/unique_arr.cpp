#include <iostream>

int findUnique(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        bool foundDuplicate = false;

        for (int j = 0; j < size; ++j)
        {
            if (i == j)
                continue;

            if (arr[i] == arr[j])
            {
                foundDuplicate = true;
                break;
            }
        }

        if (!foundDuplicate)
            return arr[i];
    }

    return -1;
}

int main()
{
    int test[] = {2, 3, 4, 2, 4, 5, 5};

    int size = sizeof(test) / sizeof(test[0]);

    int unique = findUnique(test, size);

    if (unique != -1)
        std::cout << "The unique element is: " << unique << '\n';
    else
        std::cout << "No unique element in our array!\n";

    return 0;
}