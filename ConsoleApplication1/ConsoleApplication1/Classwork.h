#pragma once

#include <iostream>

class worker
{
private:
	std::string _name;
	int _salary;
	std::string _job;

public:
	//конструктор
	worker(std::string name, int salary, std::string job) : _name(name), _salary(salary), _job(job) {};

	//функции-члены для доступа к полям
	
	//получение имени
	std::string GetName()
	{
		return _name;
	}

	//получение зарплаты
	int GetSalary()
	{
		return _salary;
	}

	//получение должности
	std::string GetJob()
	{
		return _job;
	}


};
