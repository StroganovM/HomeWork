#include<stdio.h>
#include<iostream>
/*
Задание 1 часть 1
Тетрадь - это целое число(количество страниц),две строки(тип страниц, цвет.рисунок тетради)
Время - три целых числа(часы, минуты, секунды)
Джинсы - челое число(размер), три стоки(бренд, цвет, артикул, тип)
Телевизор - два целых чисела(цена, разрешение)ж вещественное число(диагональ),структура размеров, шесть строк(характеристики)
Тело- целе число(рост); четыре вещественных числа(вес,объём груди,талии,бёдер);
часть 2
студент - структура ФИО и день рождения, целое число(курс), три строки(факультет, группа, тип)
пациент- структура ФИО, день рождения, параметры тела, стока(заболевание)
блюдо - вещественное чило(стоимость),  структура БЖУК,  две строки(ингридиенты, название блюда)
*/
//Задание 2
struct Dimension {
	int height;
	int depth;
	int width;
};
struct Book {
	std::string author;
	std::string title;
	std::string publishing_house;
	int year;
	int pages;
	std::string id;
};
struct BJYK {
	int proteins;
	int fats;
	int csrbons;
	float calories;
};
struct FIO {
	std::string first_name;
	std::string patronymic;
	std::string last_name;

};
struct notebook {
	int pages;
	std::string markup;
	std::string color;
	std::string id;
};
struct B_day {
	int day;
	std::string month;
	int year;
};
struct time_st {
	int hour;
	int min;
	int seconds;
};
struct jeans {
	int size;
	std::string color;
	std::string brand;
	std::string gender;
	std::string id;
};
struct TV {
	std::string brand;
	std::string model;
	std::string id;
	std::string aspect_ratio;
	std::string color;
	std::string tupe_display;
	Dimension TVDimension;
	float diagonale;
	int resolurion;
	int prise;
};
struct body {
	int heigh;
	float weight;
	float chest;
	float waist;
	float thigh;
};

struct worker {
	FIO workerFIO;
	B_day workerBday;
	float salary;
	int ID;
	std::string post;
};
struct dish {
	std::string name;
	std::string ingridients;
	BJYK bjyk;
	float prise;
};
struct student {
	FIO studentFIO;
	B_day student_bday;
	std::string faculty;
	std::string grup;
	std::string tupe;
	int corse;
};
struct patient {
	FIO PatientFIO;
	B_day PatientBDay;
	body PatientBody;
	std::string ill;
};
//Задание 2 конец
int main() {
	//Задание 3
	FIO I{};
	I.first_name = "Mikhail";
	I.patronymic = "Andreevich";
	I.last_name = "Stroganov";
	std::cout << I.first_name << " " << I.patronymic << " " << I.last_name << std::endl;
	//
	B_day my{ 21, "August", 2004 };
	std::cout << my.day << " " << my.month << " " << my.year << std::endl;
	//
	time_st rand{ 0,34,46 };
	std::cout << rand.hour << ":" << rand.min << ":" << rand.seconds << std::endl;
	//
	dish any{};
	any.name = "Pelmeni";
	any.ingridients = "testo, farsh";
	any.prise = 500;
	any.bjyk = { 1,1,1,1.2 };
	std::cout << any.name << " " << any.ingridients << " " << any.prise << " " << any.bjyk.calories << any.bjyk.csrbons << std::endl;
	//Задание 3 конец


	return 0;
}