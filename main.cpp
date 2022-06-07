#include <iostream>
#include <string>
#include <fstream>

using namespace std;

template <typename T1, typename T2>
class MyClass
{
public:
	MyClass(T1 firstValue, T2 secondValue)
	{
		this->firstValue = firstValue;
		this->secondValue = secondValue;
	}

	void showDataTypeSize()
	{
		cout << sizeof(firstValue) << endl;
		cout << sizeof(secondValue) << endl;
	}

private:
	T1 firstValue;
	T2 secondValue;
};

int main()
{
	setlocale(LC_ALL, "ru");

	int a = 5;
	string s = "string";

	MyClass<int, string> myclass(a, s);
	myclass.showDataTypeSize();
}

/*
	ООП - объектно-ориентированное программирование
		
		Термины
			Наследование - наследование свойств и методов другого класса
			Инкапсуляция - сокрытыие данных для ограничения доступа к свойствам/методам класса
			Полиморфизм - 
			Класс - пользовательский тип данных
			Метод - функция класса
			Геттеры и Сеттеры - получить/установить данные. используются для взаимодействия с инкапсулированными данными
			Агрегация - класс может использоваться в разных классах
			Композиция - класс в классе предназначен только для внешнего класса (приватный)
			Интерфейс - абстрактный метод с чисто виртуальными методами

		Ключевые слова
			virtual - нужен для переопределения реализации(поведения) метода в других классах
			override - нужен для контроля компилятором сигнатуры измененного метода


		Класс
			Объявление
				class ClassName
				{
				public:
					data_type value_name
				}

			Инициализация
				ClassName example;

		Абстрактный класс
			Описание: класс не для создания экземпляра класса (объекта), а для наследования с свойствами и методами без описания поведения (реалзиации)
			Объявление
				class ClassName
				{
				public:
					data_type value_name
					virtual data_type method_name = 0; - чистая виртуальная функция
				}

		Интерфейс
			

		Наследование
			Одиночное
				class ClassName {
				public:
					value_type value_name;
				}

				class NewClassName : public ClassName
				{
				public:
					value_type another_value_name;
				}
			Множественное
				class A {
				public:
					value_type value_name;
				}

				class B
				{
				public:
					value_type another_value_name;
				}

				class C : public A, public B
				{
				public:
					value_type some_value_name;
				}


		Дружественные классы
			Объявление
				class FirstClass
				{
					...
				}

				class SecondClass
				{
				private:
					int value = 10;
					friend FirstClass;
				}

				SecondClass a;
				FirstClass.a = 11;

		this
			Описание: константный указатель объекта на самого себя (адрес в памяти). Хранит ссылку на самого себя, благодаря чему можно получить доступ ко всем свойствам/методам класса
			Синтаксис: this->value | this->method

		static
			value
				Описание: статические поля. при изменении значения в одном объекте, изменяются и в других, т.к. 1 свойство на несколько объектов (общая для всех)
				Обращение
					1) object.static_value
					2) ClassName::static_value
				Объявление
					class ClassName
					{
					public:
						static data_type static_value;
					}
				Инициализация
					data_type ClassName::static_value = value
			method
				Описание: используются для работы со статическими данными
				Обращение:
					1) object.static_method();
					2) ClassName::static_method();
				Объявление
					class ClassName
					{
					public:
						static data_type static_method() {...}
					}
		
		Конструктор
			Класса
				ClassName == ConstructorName
				Описание: функция, которая вызывается при создании объекта класса. нет возвращаемых значений, можно перегружать, передавать аргументы
				Объявление
					class ClassName
					{
					public:
						value_type value_name;

						ClassName(value_type added_value_name)
						{
							value_name = added_value_name;
						}
					}
				Перегрузка
					class ClassName
					{
					public:
						int x;

						ClassName(int valueX)
						{
							x = valueX;
						}
						ClassName(bool isOdd)
						{
							if (isOdd)
							{
								x = 10;
							}
						}
						ClassName(string word)
						{
							x = sizeof(word);
						}
					}
			
			Копирования
				Описание: копирование объектов
				Объявление
					class ClassName
					{
					public:
						value_type *value_name;

						ClassName(const ClassName &object_name)
						{
							this->value_name = new value_type[object_name.size];				// не копируем тот же адрес указателя, а создаем новый с таким же количеством объектов в массиве
							
							for (int i = 0; i < object_name.size; i++)
							{
								this->value_name[i] = object_name.value_name[i];
							}
						}
					}

			Делегирующие
				Описание: для уменьшения кода путем добавления реализации к уже существующему конструктору
				Объявление
					class Human
					{
					public:
						Human(string name)
						{
							this->name = name;
							this->age = 0;
						}

						Human(string name, int age) : Human(name)
						{
							this->age = age;
						}
					private:
						string name;
						int age;
					}

		Деструктор
			ClassName == DestructorName
			Описание: функция, которая вызывается автоматически при выходе объекта за область видимости, при уничтожении объекта
			Объявление
				class ClassName
				{
				public:
					value_type value_name;

					~ClassName(value_type added_value_name)
					{
						value_name = added_value_name;
					}
				}
			Синтаксис
				~ - объявление деструктора

		Методы
			Объявление
				В классе
					access_modifier data_type method_name(arguments) {...}
				Вне класса
					class ClassName
					{
						access_modifier data_type method_name(arguments);
					}

					data_type ClassName::method_name(arguments) {...}

		Дружественные методы
			Объявление
				class FirstClass
				{
					void showInfo(SecondClass& object);
				}

				class SecondClass
				{
				private:
					int value = 10;
					friend void FirstClass::showInfo(SecondClass& object);
				}

				void FirstClass::showInfo(SecondClass& object)
				{
					cout << object.value << endl;
				}
			
		Модификаторы доступа
			public - публичный доступ
			private - доступ только внутри экземпляра класса
			protected - доступ у класса и наследованных классах

		Геттеры и Сеттеры
			data_type get_value_name() { return value_name; } | int GetX() { return x;}
			data_type set_value_name(data_type value_name) {  } | void SetX(int valueX) { x = valueX }

		Перегрузка операторов
			Описание: кастомизация операторов и описание действий при вызове оператора
			Операторы: =
			Синтаксис: ClassName & operator operator_view (const ClassName &object_name)
			Объявление:
				class ClassName
					{
					public:
						value_type *value_name;

						ClassName & operator = (const ClassName &object_name)
						{
							if (this->value_name != nullptr)
							{
								delete[] this->value_name;
							}

							this->value_name = new value_type[object_name.size];
							
							for (int i = 0; i < object_name.size; i++)
							{
								this->value_name[i] = object_name.value_name[i];
							}

							return *this;
						}
					}

		Дружественные функции
			Описание: фукнции с доступом к приватным полям класса
			Синтаксис
				friend - дружественная функция
			Объявление
				class ClassName
				{
					friend data_type function_name(ClassName &object);
				}

				data_type function_name(ClassName &object)
				{
					object.value++;
				}

		Примечание
			- свойства и методы класса по умолчанию private
			- префиксы get - геттер, set - сеттер
			- конструктор класса создается по умолчанию
			- нельзя создать объект класса, если данные не переданы при объявлении
			- конструктор должен быть публичным
			- перегрузка конструкторов - полиморфизм
			- количество деструкторов не может быть больше 1
			- деструктор не может быть с параметрами(аргументами)
			- деструктор вызывается при выходе за область видимости
			- освобождение динамической памяти в деструкторе
			- при копировании объектов: ClassName a(n); ClassName b(a), копируется и адреса указателей, и при освобождении динамической памяти в одном объекте, 
			  может быть ошибка, т.к. данные в тому же адресу памяти уже освобождены
			- наиболее подходящее использование и объявление конструкторов копирования - работа с динамической памятью
			- дружественные классы/методы могут получить доступ к приватным полям, что нарушает инкапсуляцию класса
			- значение статических данных указываются вне класса
			- статические методы не должны изменять значения класса
			- в статических объектах нельзя обращаться к this
			- виртуальный деструктор нужен для правильно освобождения ресурсов в наследованных классах
			- вызов виртуального метода ::ClassName::virtual_method_name
			- в c++ нет ключевого слова interface, поэтому интерфейс описывается как абстрактный класс
			- виртуальное наследование нужно для того, чтобы конструктор не вызывался несколько раз
*/
