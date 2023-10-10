/*
    @author: princebansal_

*/
#include <iostream>
using namespace std;
#define nl "\n"

class Array {
private:
    int capacity;
    int lastIndex;
    int* ptr;

public:
    Array(); // Constructor
    void createArray(int cap);
    void append(int data);
    void insertElement(int index, int data);
    void deleteElement(int index);
    void editArray(int index, int newData);
    void show();
    int getElement(int index);
    int search(int data);
    int countElement();
    int getSum();
    int getMax();
    int getMin();
    int arrayCapacity();
    bool isFull();
    bool isEmpty();
    ~Array(); // Destructor
};

Array::Array()
{
    capacity = 0;
    lastIndex = -1;
    ptr = NULL;
}

void Array::createArray(int cap)
{
    capacity = cap;
    lastIndex = -1;
    ptr = new int[cap];
}

void Array::append(int data)
{
    // Always think about situations when we can't add data (for any DS)

    if (lastIndex + 1 == capacity) {
        cout << "Array is Full !!" << nl;
    } else {
        lastIndex++;
        ptr[lastIndex] = data;
    }
}

void Array::insertElement(int index, int data)
{
    if (lastIndex + 1 == capacity) {
        cout << "Array is Full !!" << nl;
    } else if (index < 0 || index > lastIndex + 1) {
        cout << "Invalid Index !!" << nl;
    } else {
        // shift data towards right (as array is left alligned)
        for (int i = lastIndex; i >= index; i--) {
            ptr[i + 1] = ptr[i];
        }
        ptr[index] = data; // insert data at given index
        lastIndex++; // as one value inserted
    }
}

void Array::deleteElement(int index)
{
    if (lastIndex == -1) {
        cout << "Empty Array !!" << nl;
    } else if (index < 0 || index > lastIndex) {
        cout << "Invalid Index !!" << nl;
    } else {
        for (int i = index; i < lastIndex; i++) {
            ptr[i] = ptr[i + 1]; // shifting element to left side
        }
        lastIndex--;
    }
}

void Array::editArray(int index, int newData)
{
    if (lastIndex == -1) {
        cout << "Empty Array !!" << nl;
    } else if (index < 0 || index > lastIndex + 1) {
        cout << "Invalid Index !!" << nl;
    } else {
        ptr[index] = newData;
    }
}

void Array::show()
{
    if (lastIndex == -1)
        cout << "Empty Array!!" << nl;
    else {
        for (int i = 0; i <= lastIndex; i++)
            cout << ptr[i] << " ";
    }
    cout << nl;
}

int Array::getElement(int index)
{
    int ans;
    if (lastIndex == -1) {
        cout << "Empty Array !!" << nl;
    } else if (index < 0 || index > lastIndex + 1) {
        cout << "Invalid Index !!" << nl;
    } else {
        ans = ptr[index];
    }
    return ans;
}

int Array::search(int data)
{
    for (int i = 0; i <= lastIndex; i++) {
        if (ptr[i] == data)
            return i;
    }
    return -1;
}

int Array::countElement()
{
    return lastIndex + 1;
}

int Array::getSum()
{
    int sum = 0;
    for (int i = 0; i <= lastIndex; i++)
        sum += ptr[i];
    return sum;
}

int Array::getMax()
{
    int maxVal = ptr[0];
    for (int i = 1; i <= lastIndex; i++) {
        if (maxVal < ptr[i])
            maxVal = ptr[i];
    }
    return maxVal;
}

int Array::getMin()
{
    int minVal = ptr[0];
    for (int i = 1; i <= lastIndex; i++) {
        if (minVal > ptr[i])
            minVal = ptr[i];
    }
    return minVal;
}

bool Array::isFull()
{
    if (lastIndex + 1 == capacity)
        return true;
    return false;
}

bool Array::isEmpty()
{
    if (lastIndex == -1)
        return true;
    return false;
}

int Array::arrayCapacity()
{
    return capacity;
}

Array::~Array()
{
    delete[] ptr;
}

int menu()
{
    int choice;
    cout << nl << "--------------MENU------------------" << nl << nl;

    cout << "1.Append new value: " << nl;
    cout << "2.Insert new value: " << nl;
    cout << "3.Delete value: " << nl;
    cout << "4.Edit value: " << nl;
    cout << "5.Print Array " << nl;
    cout << "6.Get value from Array: " << nl;
    cout << "7.Search Value: " << nl;
    cout << "8.Total Values in Array (size) " << nl;
    cout << "9.Sum of Array: " << nl;
    cout << "10.Maximum Element in Array: " << nl;
    cout << "11.Minimum elemt in Array: " << nl;
    cout << "12.EXIT: " << nl << nl;
    cout << "Enter your Choice: ";
    cin >> choice;

    return choice;
}

void printExtraInfo(Array& arr)
{
    cout << nl << "___________Array Information___________________" << nl << nl;

    cout << "Capacity of Array is: " << arr.arrayCapacity() << nl;
    cout << "Total Elements in Array (size): " << arr.countElement() << nl;
    arr.show();
    cout << "Is Array Full: ";
    if (arr.isFull())
        cout << "YES" << nl;
    else
        cout << "NO" << nl;

    cout << "Is Array Empty: ";
    if (arr.isEmpty())
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
    cout << "________________________________________________" << nl << nl;
}

int main()
{
    Array arr;
    int n, data, index;
    cout << "Enter capacity: ";
    cin >> n;
    arr.createArray(n);

    // Menu Driven Program

    while (1) {
        switch (menu()) {
        case 1:
            cout << "Enter data to append: ";
            cin >> data;
            arr.append(data);
            break;
        case 2:
            cout << "Enter index and data to insert: ";
            cin >> index >> data;
            arr.insertElement(index, data);
            break;
        case 3:
            cout << "Enter index to delete: ";
            cin >> index;
            arr.deleteElement(index);
            break;
        case 4:
            cout << "Enter index and New data to edit: ";
            cin >> index >> data;
            arr.editArray(index, data);
            break;
        case 5:
            cout << "Current Array is: " << nl;
            arr.show();
            break;
        case 6:
            cout << "Enter index to get the element: ";
            cin >> index;
            cout << "Value is: " << arr.getElement(index) << nl;
            break;
        case 7:
            cout << "Enter data to search: ";
            cin >> data;
            arr.search(data);
            break;
        case 8:
            cout << "Total Elements in array is: " << arr.countElement() << nl;
            break;
        case 9:
            cout << "Sum of Array is: " << arr.getSum() << nl;
            break;

        case 10:
            cout << "Maximum element in Array is: " << arr.getMax() << nl;
            break;

        case 11:
            cout << "Minimum element in Array is: " << arr.getMin() << nl;
            break;
        case 12:
            exit(0);
            break;

        default:
            cout << "Invalid Choice" << nl;
            break;
        }
        printExtraInfo(arr);
    }

    return 0;
}

/*    Desi Testing

        arr.append(10);
        arr.append(20);
        arr.append(30);
        arr.append(40);
        arr.show();
        arr.insertElement(3, 69);
        arr.show();
        arr.editArray(2, 7);
        arr.show();
        cout << arr.search(69) << nl;
        arr.append(100);
        arr.show();
        arr.deleteElement(9);
        arr.deleteElement(1);
        arr.show();
        cout << arr.countElement() << nl;
        cout << arr.getMax() << nl;
        cout << arr.getMin() << nl;
        cout << arr.getSum() << nl;

    */