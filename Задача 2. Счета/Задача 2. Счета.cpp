
#include <iostream>

struct person
{
    int number;
    std::string name;
    double sum;
};

void updatePerson(person &localPerson, double newSum);
person inputData();
double inputNewSum();
void output(const person &localPerson);

int main()
{
    setlocale(LC_ALL, "Russian");
    person n;
    double newSum;

    n = inputData();
    newSum = inputNewSum();
    updatePerson(n, newSum);
    output(n);

    return 0;
}

void updatePerson(person &localPerson, double newSum)
{
    localPerson.sum = newSum;
}

person inputData()
{
    person local{};
    std::cout << "Введите номер счёта: ";
    std::cin >> local.number;
    std::cout << "Введите имя владельца: ";
    std::cin >> local.name;
    std::cout << "Введите баланс: ";
    std::cin >> local.sum;
    return local;
}

double inputNewSum()
{
    double local{};
    std::cout << "Введите новый баланс: ";
    std::cin >> local;
    return local;
}

void output(const person &localPerson)
{
    std::cout << "Ваш счёт: ";
    std::cout << localPerson.name;
    std::cout << ", ";
    std::cout << localPerson.number;
    std::cout << ", ";
    std::cout << localPerson.sum;
}