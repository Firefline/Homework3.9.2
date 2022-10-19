// Homework3.9.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Fraction
{
private:
	double numerator_;
	double denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	Fraction operator+(Fraction other)
	{
		while (denominator_ > other.denominator_)
		{
			other.numerator_ = other.numerator_ + other.numerator_;
			other.denominator_ = denominator_ + denominator_;
		}
		while (denominator_ < other.denominator_)
		{
			numerator_ = numerator_ + numerator_;
			denominator_ = denominator_ + denominator_;
		}
		return Fraction(numerator_ + other.numerator_, denominator_);
	}

	Fraction operator-(Fraction other)
	{
		while (denominator_ > other.denominator_)
		{
			other.numerator_ = other.numerator_ + other.numerator_;
			other.denominator_ = denominator_ + denominator_;
		}
		while (denominator_ < other.denominator_)
		{
			numerator_ = numerator_ + numerator_;
			denominator_ = denominator_ + denominator_;
		}
		return Fraction(numerator_ - other.numerator_, denominator_);
	}

	Fraction operator*(Fraction other)
	{
		return Fraction(numerator_ * other.numerator_, denominator_ * other.denominator_);
	}

	Fraction operator/(Fraction other)
	{
		return Fraction(numerator_ * other.denominator_, denominator_ * other.numerator_);
	}

	Fraction& operator++() { numerator_++; denominator_++; return *this; }
	Fraction operator++(int)
	{
		Fraction temp = *this;
		++(*this);
		return temp;
	}

	Fraction& operator--() { numerator_--; denominator_--; return *this; }
	Fraction operator--(int)
	{
		Fraction temp = *this;
		--(*this);
		return temp;
	}

	void Print()
	{
		std::cout << numerator_ << "/" << denominator_ << std::endl;
	}
};

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");

	double a_1, a_2, b_1, b_2;

	std::cout << "Введите числитель дроби 1: ";
	std::cin >> a_1;
	std::cout << "Введите знаменатель дроби 1: ";
	std::cin >> a_2;
	while (a_2 == 0)
	{
		std::cout << "Нельзя делить на ноль. Введите новый знаменатель дроби 1: ";
		std::cin >> a_2;
	}
	std::cout << "Введите числитель дроби 2: ";
	std::cin >> b_1;
	std::cout << "Введите знаменатель дроби 2: ";
	std::cin >> b_2;
	while (b_2 == 0)
	{
		std::cout << "Нельзя делить на ноль. Введите новый знаменатель дроби 1: ";
		std::cin >> b_2;
	}

	Fraction a(a_1, a_2), b(b_1, b_2);

	Fraction sum_a_b = a + b;
	std::cout << a_1 << "/" << a_2 << " + " << b_1 << "/" << b_2 << " = ";
	sum_a_b.Print();

	Fraction sub_a_b = a - b;
	std::cout << a_1 << "/" << a_2 << " - " << b_1 << "/" << b_2 << " = ";
	sub_a_b.Print();

	Fraction mult_a_b = a * b;
	std::cout << a_1 << "/" << a_2 << " * " << b_1 << "/" << b_2 << " = ";
	mult_a_b.Print();

	Fraction div_a_b = a / b;
	std::cout << a_1 << "/" << a_2 << " / " << b_1 << "/" << b_2 << " = ";
	div_a_b.Print();

	Fraction incr_a_b = ++a * b;
	std::cout << "++" << a_1 << "/" << a_2 << " * " << b_1 << "/" << b_2 << " = ";
	incr_a_b.Print();

	Fraction incr_a = a++;
	std::cout << "Значение дроби 1 = ";
	incr_a.Print();

	Fraction decr_a_b = --a * b;
	std::cout << a_1 << "/" << a_2 << "--" << " * " << b_1 << "/" << b_2 << " = ";
	decr_a_b.Print();

	Fraction decr_a = a--;
	std::cout << "Значение дроби 1 = ";
	decr_a.Print();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
