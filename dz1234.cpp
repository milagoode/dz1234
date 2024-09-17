//є1

//#include <iostream>
//using namespace std;
//
//void numbers(int& number) {
//    if (number > 0) {
//        cout << "„исло додатне." << endl;
//    }
//    else if (number < 0) {
//        cout << "„исло в≥дТЇмне." << endl;
//    }
//    else {
//        cout << "„исло нуль." << endl;
//    }
//}
//int main() {
//    system("chcp 1251>null");
//    int userInput;
//    cout << "¬вед≥ть число: ";
//    cin >> userInput;
//    numbers(userInput);
//    return 0;
//}

//є2

//#include <iostream>
//#include <cstdlib> 
//#include <ctime>  
//using namespace std;
//
//void заповнитићас(double* arr, int size) {
//    for (int i = 0; i < size; ++i) {
//        arr[i] = static_cast<double>(rand()) / RAND_MAX * 100; 
//    }
//}
//void вивсестићас(double* arr, int size) {
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    system("chcp 1251>null");
//    srand(time(0));
//    bool продовжити = true;
//
//    while (продовжити) {
//        int size;
//        cout << "¬вед≥ть розм≥р масиву: ";
//        cin >> size;
//        double* array = new double[size];
//
//        заповнитићас(array, size);
//        вивсестићас(array, size);
//
//        delete[] array;
//
//        char choice;
//        cout << "ѕродовжити? (т/н): ";
//        cin >> choice;
//        if (choice != 'т' && choice != '“') {
//            продовжити = false;
//        }
//    }
//    return 0;
//}

//є3
 
//#include <iostream>
//#include <cstdlib> 
//#include <ctime>  
//using namespace std;
//
//void заповнитићасив(int* arr, int size) {
//    for (int i = 0; i < size; ++i) {
//        arr[i] = rand() % 100;
//    }
//}
//void вивестићасив(const int* arr, int size) {
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//void обм≥н≈лемент≥в(int* arr, int size) {
//    for (int i = 1; i < size; i += 2) {
//        if (i + 1 < size) {
//            swap(arr[i], arr[i + 1]);
//        }
//    }
//}
//int main() {
//    system("chcp 1251>null");
//    srand(time(0));
//    bool продовжити = true;
//
//    while (продовжити) {
//        int size;
//        cout << "¬вед≥ть розм≥р масиву: ";
//        cin >> size;
//
//        int* array = new int[size];
//
//        заповнитићасив(array, size);
//        cout << "ѕочатковий масив: ";
//        вивестићасив(array, size);
//
//        обм≥н≈лемент≥в(array, size);
//
//        cout << "ћасив п≥сл€ обм≥ну елемент≥в: ";
//        вивестићасив(array, size);
//
//        delete[] array;
//
//        char choice;
//        cout << "ѕродовжити? (т/н): ";
//        cin >> choice;
//        if (choice != 'т' && choice != '“') {
//            продовжити = false;
//        }
//    }
//    return 0;
//}

//є4

#include <iostream>
using namespace std;

void розпод≥л≈лемент≥в(int* arr, int size, int*& додатн≥, int& розм≥рƒодатн≥х, int*& в≥дЇмн≥, int& розм≥р¬≥дЇмних) {
    розм≥рƒодатн≥х = 0;
    розм≥р¬≥дЇмних = 0;
    for (int i = 0; i < size; ++i) {
        arr[i] >= 0 ? ++розм≥рƒодатн≥х : ++розм≥р¬≥дЇмних;
    }
    додатн≥ = new int[розм≥рƒодатн≥х];
    в≥дЇмн≥ = new int[розм≥р¬≥дЇмних];

    for (int i = 0, дод≤ндекс = 0, в≥д≤ндекс = 0; i < size; ++i) {
        arr[i] >= 0 ? додатн≥[дод≤ндекс++] = arr[i] : в≥дЇмн≥[в≥д≤ндекс++] = arr[i];
    }
}

void вивестићасив(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    system("chcp 1251>null");
    int size;
    cout << "¬вед≥ть розм≥р масиву: ";
    cin >> size;

    int* arr = new int[size];
    cout << "¬вед≥ть елементи масиву: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int* додатн≥ = nullptr;
    int* в≥дЇмн≥ = nullptr;
    int розм≥рƒодатн≥х = 0, розм≥р¬≥дЇмних = 0;

    розпод≥л≈лемент≥в(arr, size, додатн≥, розм≥рƒодатн≥х, в≥дЇмн≥, розм≥р¬≥дЇмних);

    cout << "ƒодатн≥ елементи: ";
    вивестићасив(додатн≥, розм≥рƒодатн≥х);

    cout << "¬≥д'Їмн≥ елементи: ";
    вивестићасив(в≥дЇмн≥, розм≥р¬≥дЇмних);

    delete[] додатн≥;
    delete[] в≥дЇмн≥;
    delete[] arr;

    return 0;
}



