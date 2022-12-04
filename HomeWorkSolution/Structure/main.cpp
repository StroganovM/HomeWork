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
struct BigEaters {
	dish eaten;
	time_st WhenEaten;
};
struct familly {
	std::string name;
	std::string connection;
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
	any.bjyk = { 1,1,1, 1.2 };
	std::cout << any.name << " " << any.ingridients << " " << any.bjyk.calories << any.bjyk.csrbons << std::endl;
	//Задание 3 конец
	//Задание 4 Приём пищи
	BigEaters Breakfast{};
	Breakfast.eaten.name = "Tea with sandwich";
	Breakfast.eaten.ingridients = "Black Tea, bread,Doktorska sausage";
	Breakfast.eaten.bjyk = { 100,100,100,100 };
	Breakfast.WhenEaten = { 9,30,0 };
	BigEaters Lunch{};
	Lunch.eaten.name = "Sup";
	Lunch.eaten.ingridients = "all ingridients for sup";
	Lunch.eaten.bjyk = { 100,100,100,100 };
	Lunch.WhenEaten = { 12,30,0 };
	BigEaters Supper{};
	Supper.eaten.name = "Grilled chicken";
	Supper.eaten.ingridients = "all ingridients for Grilled chicken";
	Supper.eaten.bjyk = { 100,100,100,100 };
	Supper.WhenEaten = { 17,30,0 };
	struct BigEaters* main_BigEaters;
	main_BigEaters = new struct BigEaters[2];
	main_BigEaters[0].eaten.bjyk.calories=Breakfast.eaten.bjyk.calories;
	main_BigEaters[0].eaten.bjyk.csrbons=Breakfast.eaten.bjyk.csrbons;
	main_BigEaters[0].eaten.bjyk.fats=Breakfast.eaten.bjyk.fats;
	main_BigEaters[0].eaten.bjyk.proteins=Breakfast.eaten.bjyk.proteins;
	main_BigEaters[0].WhenEaten.hour=Breakfast.WhenEaten.hour;
	main_BigEaters[0].WhenEaten.min= Breakfast.WhenEaten.min;
	main_BigEaters[0].WhenEaten.seconds=Breakfast.WhenEaten.seconds;
	//
	main_BigEaters[1].eaten.bjyk.calories = Lunch.eaten.bjyk.calories;
	main_BigEaters[1].eaten.bjyk.csrbons = Lunch.eaten.bjyk.csrbons;
	main_BigEaters[1].eaten.bjyk.fats = Lunch.eaten.bjyk.fats;
	main_BigEaters[1].eaten.bjyk.proteins = Lunch.eaten.bjyk.proteins;
	main_BigEaters[1].WhenEaten.hour = Lunch.WhenEaten.hour;
	main_BigEaters[1].WhenEaten.min = Lunch.WhenEaten.min;
	main_BigEaters[1].WhenEaten.seconds = Lunch.WhenEaten.seconds;
	//
	main_BigEaters[2].eaten.bjyk.calories = Supper.eaten.bjyk.calories;
	main_BigEaters[2].eaten.bjyk.csrbons = Supper.eaten.bjyk.csrbons;
	main_BigEaters[2].eaten.bjyk.fats = Supper.eaten.bjyk.fats;
	main_BigEaters[2].eaten.bjyk.proteins = Supper.eaten.bjyk.proteins;
	main_BigEaters[2].WhenEaten.hour = Supper.WhenEaten.hour;
	main_BigEaters[2].WhenEaten.min = Supper.WhenEaten.min;
	main_BigEaters[2].WhenEaten.seconds = Supper.WhenEaten.seconds;
	//члены семьи
	familly person1{ "Natal'ia","My mother" };
	familly person2{ "Andrey","My father" };
	familly person3{ "Mikhail","This is me" };
	familly person4{ "Denis","My brother" };
	struct familly* myFamilly;
	myFamilly = new struct familly[3];
	myFamilly[0].name = person1.name;
	myFamilly[0].connection = person1.connection;
	myFamilly[1].name = person2.name;
	myFamilly[1].connection = person2.connection;
	myFamilly[2].name = person3.name;
	myFamilly[2].connection = person3.connection;
	myFamilly[3].name = person4.name;
	myFamilly[3].connection = person4.connection;
	//Задание 4 конец


	return 0;
}