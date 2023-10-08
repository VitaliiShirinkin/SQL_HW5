#include <iostream>
#include "pgSQL.h"
#include <Windows.h>

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	DatabaseClients client;
	client.createDB();
	client.addClient("Sergey", "Ivanov", "si@mail.ru");
	client.addClient("Ivan", "Petrov", "ip@mail.ru");
	client.addClient("Oleg", "Sidorov", "os@mail.ru");

	client.addPhone(1, "123456");
	client.addPhone(2, "123455");
	client.addPhone(3, "123666");

	client.addPhone(client.getClientID("Sergey", "Ivanov"), "654321");
	std::cout << client.getClientID("Sergey", "Ivanov") << std::endl;
	std::cout << "Все записи таблицы: \n";
	client.printAll();

	client.changeClient(1, "Fedor", "Glebov", "");
	client.deletePhone(3);
	client.deleteClient(1);
	std::cout << "Поиск клиента: \n";
	client.findClient("Oleg");

	std::cout << "\nВсе записи таблицы: \n";
	client.printAll();
	return 0;
} 
