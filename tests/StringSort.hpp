#pragma once
#include "string"
using namespace std;
int* bubbler(int* c, int dimension){
    for (int i = 0; i < dimension; i++) {
        for (int j = (dimension - 1); j > i; j--) {
            if (c[j - 1] > c[j]) {
                int temp = c[j - 1];
                c[j - 1] = c[j];
                c[j] = temp;
            }
        }
    }
    return c;
}

string bubble(string alpha){
    string big = "abcdefghijklmnopqrstuvwxyz";
    int* numbers = new int[alpha.size()];
    for(int i = 0; i < alpha.size(); i++){
        for(int j = 0; j < big.size(); j++){
            if(alpha[i] == big[j]){
                numbers[i] = j;
            }
        }
    }
    numbers = bubbler(numbers, alpha.size());
    string result;
    for(int i = 0; i < alpha.size(); i++){
        result.push_back(big[numbers[i]]);
    }
    return result;

}

int* quicker(int *numbers, int left, int right)
{
    int pivot; // разрешающий элемент
    int l_hold = left; //левая граница
    int r_hold = right; // правая граница
    pivot = numbers[left];
    while (left < right) // пока границы не сомкнутся
    {
        while ((numbers[right] >= pivot) && (left < right))
            right--; // сдвигаем правую границу пока элемент [right] больше [pivot]
        if (left != right) // если границы не сомкнулись
        {
            numbers[left] = numbers[right]; // перемещаем элемент [right] на место разрешающего
            left++; // сдвигаем левую границу вправо
        }
        while ((numbers[left] <= pivot) && (left < right))
            left++; // сдвигаем левую границу пока элемент [left] меньше [pivot]
        if (left != right) // если границы не сомкнулись
        {
            numbers[right] = numbers[left]; // перемещаем элемент [left] на место [right]
            right--; // сдвигаем правую границу вправо
        }
    }
    numbers[left] = pivot; // ставим разрешающий элемент на место
    pivot = left;
    left = l_hold;
    right = r_hold;
    if (left < pivot) // Рекурсивно вызываем сортировку для левой и правой части массива
        quicker(numbers, left, pivot - 1);
    if (right > pivot)
        quicker(numbers, pivot + 1, right);
    return numbers;
}

string quick(string alpha){
    string big = "abcdefghijklmnopqrstuvwxyz";
    int* numbers = new int[alpha.size()];
    for(int i = 0; i < alpha.size(); i++){
        for(int j = 0; j < big.size(); j++){
            if(alpha[i] == big[j]){
                numbers[i] = j;
            }
        }
    }
    numbers = quicker(numbers, 0, alpha.size() - 1);
    string result;
    for(int i = 0; i < alpha.size(); i++){
        result.push_back(big[numbers[i]]);
    }
    return result;

}

int* sheller(int* c, int dimension)
{
    int i, j, step;
    int tmp;
    for (step = dimension / 2; step > 0; step /= 2) {
        for (i = step; i < dimension; i++) {
            tmp = c[i];
            for (j = i; j >= step; j -= step) {
                if (tmp < c[j - step])
                    c[j] = c[j - step];
                else
                    break;
            }
            c[j] = tmp;
        }
    }
    return c;
}

string shell(string alpha){
    string big = "abcdefghijklmnopqrstuvwxyz";
    int* numbers = new int[alpha.size()];
    for(int i = 0; i < alpha.size(); i++){
        for(int j = 0; j < big.size(); j++){
            if(alpha[i] == big[j]){
                numbers[i] = j;
            }
        }
    }
    numbers = sheller(numbers, alpha.size());
    string result;
    for(int i = 0; i < alpha.size(); i++){
        result.push_back(big[numbers[i]]);
    }
    return result;

}


int* shakerer(int* c, int dimension){
    int left, right, i;
    left = 0;
    right = dimension - 1;
    while (left <= right) {
        for (i = right; i > left; i--) {
            if (c[i-1] > c[i]) {
                swap (c[i-1], c[i]);
            }
        }
        left++;
        for (i = left; i <= right; i++) {
            if (c[i-1] > c[i]) {
                swap(c[i-1], c[i]);
            }
        }
        right--;
    }
    return c;
}

string shaker(string alpha){
    string big = "abcdefghijklmnopqrstuvwxyz";
    int* numbers = new int[alpha.size()];
    for(int i = 0; i < alpha.size(); i++){
        for(int j = 0; j < big.size(); j++){
            if(alpha[i] == big[j]){
                numbers[i] = j;
            }
        }
    }
    numbers = shakerer(numbers, alpha.size());
    string result;
    for(int i = 0; i < alpha.size(); i++){
        result.push_back(big[numbers[i]]);
    }
    return result;

}

int* inserterer(int* c, int dimension){
    for( int i = 1;i < dimension; i++ ){
        for(int j = i; j > 0 && c[j-1] > c[j];j--){
            swap(c[j-1], c[j]);
        }
    }
    return c;
}

string insert(string alpha){
    string big = "abcdefghijklmnopqrstuvwxyz";
    int* numbers = new int[alpha.size()];
    for(int i = 0; i < alpha.size(); i++){
        for(int j = 0; j < big.size(); j++){
            if(alpha[i] == big[j]){
                numbers[i] = j;
            }
        }
    }
    numbers = inserterer(numbers, alpha.size());
    string result;
    for(int i = 0; i < alpha.size(); i++){
        result.push_back(big[numbers[i]]);
    }
    return result;

}



void mergerhelp(int* c, int first, int last) {
    {
        int middle, start, final, j;
        int *mas = new int[last + 1];
        middle = (first + last) / 2; //вычисление среднего элемента
        start = first; //начало левой части
        final = middle + 1; //начало правой части
        for (j = first; j <= last; j++) //выполнять от начала до конца
            if ((start <= middle) && ((final > last) || (c[start] < c[final]))) {
                mas[j] = c[start];
                start++;
            } else {
                mas[j] = c[final];
                final++;
            }
//возвращение результата в список
        for (j = first; j <= last; j++) c[j] = mas[j];
        delete[]mas;
    };
}


int* merger(int *c, int first, int last) {
    if (first < last) {
        merger(c, first, (first + last) / 2); //сортировка левой части
        merger(c, (first + last) / 2 + 1, last); //сортировка правой части
        mergerhelp(c, first, last); //слияние двух частей
    }
    return c;
}

string merge(string alpha){
    string big = "abcdefghijklmnopqrstuvwxyz";
    int* numbers = new int[alpha.size()];
    for(int i = 0; i < alpha.size(); i++){
        for(int j = 0; j < big.size(); j++){
            if(alpha[i] == big[j]){
                numbers[i] = j;
            }
        }
    }
    numbers = merger(numbers, 0, alpha.size()-1 );
    string result;
    for(int i = 0; i < alpha.size(); i++){
        result.push_back(big[numbers[i]]);
    }
    return result;

}

void helpheaper(int* c, int n, int i)
{
    int largest = i;
// Инициализируем наибольший элемент как корень
    int l = 2*i + 1; // левый = 2*i + 1
    int r = 2*i + 2; // правый = 2*i + 2

    // Если левый дочерний элемент больше корня
    if (l < n && c[l] > c[largest])
        largest = l;

    // Если правый дочерний элемент больше, чем самый большой элемент на данный момент
    if (r < n && c[r] > c[largest])
        largest = r;

    // Если самый большой элемент не корень
    if (largest != i)
    {
        swap(c[i], c[largest]);

// Рекурсивно преобразуем в двоичную кучу затронутое поддерево
        helpheaper(c, n, largest);
    }
}

int* Heaper(int* c, int n)
{
    // Построение кучи (перегруппируем массив)
    for (int i = n / 2 - 1; i >= 0; i--)
        helpheaper(c, n, i);

    // Один за другим извлекаем элементы из кучи
    for (int i = n - 1; i >= 0; i--)
    {
        // Перемещаем текущий корень в конец
        swap(c[0], c[i]);

        // вызываем процедуру heapify на уменьшенной куче
        helpheaper(c, i, 0);
    }
    return c;
}


string heap(string alpha){
    string big = "abcdefghijklmnopqrstuvwxyz";
    int* numbers = new int[alpha.size()];
    for(int i = 0; i < alpha.size(); i++){
        for(int j = 0; j < big.size(); j++){
            if(alpha[i] == big[j]){
                numbers[i] = j;
            }
        }
    }
    numbers = Heaper(numbers, alpha.size());
    string result;
    for(int i = 0; i < alpha.size(); i++){
        result.push_back(big[numbers[i]]);
    }
    return result;

}


int* Counter (int* c, int dimension) {
    for (int startIndex = 0; startIndex < dimension; startIndex++) {
// В переменной smallestIndex хранится индекс наименьшего значения, которое мы нашли в этой итерации.
// Начинаем с того, что наименьший элемент в этой итерации - это первый элемент (индекс 0)
        int smallestIndex = startIndex;

// Затем ищем элемент поменьше в остальной части массива
        for (int currentIndex = startIndex + 1; currentIndex < dimension; ++currentIndex) {
// Если мы нашли элемент, который меньше нашего наименьшего элемента,
            if (c[currentIndex] < c[smallestIndex])
// то запоминаем его
                smallestIndex = currentIndex;
        }

// smallestIndex теперь наименьший элемент.
// Меняем местами наше начальное наименьшее число с тем, которое мы обнаружили
        swap(c[startIndex], c[smallestIndex]);
    }
    return c;
}


string count(string alpha){
    string big = "abcdefghijklmnopqrstuvwxyz";
    int* numbers = new int[alpha.size()];
    for(int i = 0; i < alpha.size(); i++){
        for(int j = 0; j < big.size(); j++){
            if(alpha[i] == big[j]){
                numbers[i] = j;
            }
        }
    }
    numbers = Counter(numbers, alpha.size());
    string result;
    for(int i = 0; i < alpha.size(); i++){
        result.push_back(big[numbers[i]]);
    }
    return result;

}