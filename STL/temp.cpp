#include <iostream>

using namespace std;

int countUncommon(int listInput1[], int listInput2[], int l1, int l2)
{
    int uncommonCount = 0;

    if (l1 == 0)
    {
        return l2;
    }
    else if (l2 == 0)
    {
        return l1;
    }

    // Compare each element of the first array with elements in the second array.
    for (int i = 0; i < l1; i++)
    {
        int j;
        for (j = 0; j < l2; j++)
        {
            if (listInput1[i] == listInput2[j])
                break;
        }

        // If the element is not found in the second array, increment the uncommon count.
        if (j == l2)
        {
            uncommonCount++;
        }
    }

    // Now, we need to check the second array for elements not present in the first array.
    for (int i = 0; i < l2; i++)
    {
        int j;
        for (j = 0; j < l1; j++)
        {
            if (listInput2[i] == listInput1[j])
                break;
        }

        // If the element is not found in the first array, increment the uncommon count.
        if (j == l1)
        {
            uncommonCount++;
        }
    }

    return uncommonCount;
}

int main()
{
    int listInput1[] = {4, 5, 6};
    int listInput2[] = {1, 2, 3, 4, 5};

    int l1 = sizeof(listInput1) / sizeof(listInput1[0]);
    int l2 = sizeof(listInput2) / sizeof(listInput2[0]);

    int uncommonCount = countUncommon(listInput1, listInput2, l1, l2);

    cout << "Number of uncommon integers: " << uncommonCount << endl;

    return 0;
}
