#include <stdio.h>
#define tableSize 10
int hashTable[tableSize];

void initHashTable()
{
    for (int i = 0; i < tableSize; i++)
    {
        hashTable[i] = -1;
    }
}

int hashFunction(int key)
{
    return key % tableSize; // Division Method
}

void insert(int key)
{
    int index = hashFunction(key);
    while (hashTable[index] != -1)
    {
        index = (index + 1) % tableSize;
    }
    hashTable[index] = key;
}

void search(int key)
{
    int index = hashFunction(key);
    while (hashTable[index] != key)
    {
        index = (index + 1) % tableSize;
        if (hashTable[index] == -1)
        {
            printf("The searched key not found\n");
            return;
        }
    }
    printf("The key found at index %d", index);
}

int main()
{
    int number;
    initHashTable();
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    printf("Enter the number you want to search");
    scanf("%d", &number);
    search(number);
    return 0;
}