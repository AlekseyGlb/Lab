#include <print>

int main() {
	
	const double length = 5.0;
	const double width = 3.5; //Змінено відповідно завдання
	const double price = 250.0;
	const double area = length * width; 
	const double perimeter = 2.0 * (length + width); 
	const double total = area * price; 

	std::println("Площа: {:.2f} M²", area); // Перемінна area зміниться в залежності від значень length та width 
	std::println("Периметр: {:.2f} M", perimeter); // Значення в дужках зміниться, відповідно зміниться й підсумковий perimeter 
	std::println("Вартість: {:.2f} грн", total); // Хоча ціна (price) залишилася незмінною, сама площа (area) вже змінилася на першому кроці. Через це значення змінної total також оновиться

	return 0;
}