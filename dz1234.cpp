//�1

//#include <iostream>
//using namespace std;
//
//void numbers(int& number) {
//    if (number > 0) {
//        cout << "����� �������." << endl;
//    }
//    else if (number < 0) {
//        cout << "����� �䒺���." << endl;
//    }
//    else {
//        cout << "����� ����." << endl;
//    }
//}
//int main() {
//    system("chcp 1251>null");
//    int userInput;
//    cout << "������ �����: ";
//    cin >> userInput;
//    numbers(userInput);
//    return 0;
//}

//�2

//#include <iostream>
//#include <cstdlib> 
//#include <ctime>  
//using namespace std;
//
//void ������������(double* arr, int size) {
//    for (int i = 0; i < size; ++i) {
//        arr[i] = static_cast<double>(rand()) / RAND_MAX * 100; 
//    }
//}
//void �����������(double* arr, int size) {
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    system("chcp 1251>null");
//    srand(time(0));
//    bool ���������� = true;
//
//    while (����������) {
//        int size;
//        cout << "������ ����� ������: ";
//        cin >> size;
//        double* array = new double[size];
//
//        ������������(array, size);
//        �����������(array, size);
//
//        delete[] array;
//
//        char choice;
//        cout << "����������? (�/�): ";
//        cin >> choice;
//        if (choice != '�' && choice != '�') {
//            ���������� = false;
//        }
//    }
//    return 0;
//}

//�3
 
//#include <iostream>
//#include <cstdlib> 
//#include <ctime>  
//using namespace std;
//
//void ��������������(int* arr, int size) {
//    for (int i = 0; i < size; ++i) {
//        arr[i] = rand() % 100;
//    }
//}
//void ������������(const int* arr, int size) {
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//void ������������(int* arr, int size) {
//    for (int i = 1; i < size; i += 2) {
//        if (i + 1 < size) {
//            swap(arr[i], arr[i + 1]);
//        }
//    }
//}
//int main() {
//    system("chcp 1251>null");
//    srand(time(0));
//    bool ���������� = true;
//
//    while (����������) {
//        int size;
//        cout << "������ ����� ������: ";
//        cin >> size;
//
//        int* array = new int[size];
//
//        ��������������(array, size);
//        cout << "���������� �����: ";
//        ������������(array, size);
//
//        ������������(array, size);
//
//        cout << "����� ���� ����� ��������: ";
//        ������������(array, size);
//
//        delete[] array;
//
//        char choice;
//        cout << "����������? (�/�): ";
//        cin >> choice;
//        if (choice != '�' && choice != '�') {
//            ���������� = false;
//        }
//    }
//    return 0;
//}

//�4

#include <iostream>
using namespace std;

void ���������������(int* arr, int size, int*& ������, int& ������������, int*& ����, int& �����³�����) {
    ������������ = 0;
    �����³����� = 0;
    for (int i = 0; i < size; ++i) {
        arr[i] >= 0 ? ++������������ : ++�����³�����;
    }
    ������ = new int[������������];
    ���� = new int[�����³�����];

    for (int i = 0, �������� = 0, ������� = 0; i < size; ++i) {
        arr[i] >= 0 ? ������[��������++] = arr[i] : ����[�������++] = arr[i];
    }
}

void ������������(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    system("chcp 1251>null");
    int size;
    cout << "������ ����� ������: ";
    cin >> size;

    int* arr = new int[size];
    cout << "������ �������� ������: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int* ������ = nullptr;
    int* ���� = nullptr;
    int ������������ = 0, �����³����� = 0;

    ���������������(arr, size, ������, ������������, ����, �����³�����);

    cout << "������ ��������: ";
    ������������(������, ������������);

    cout << "³�'��� ��������: ";
    ������������(����, �����³�����);

    delete[] ������;
    delete[] ����;
    delete[] arr;

    return 0;
}



