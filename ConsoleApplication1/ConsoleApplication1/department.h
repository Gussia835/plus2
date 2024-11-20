#pragma once

#include "Classwork.h"
#include <vector>

class department
{
private:
	std::string _Company_name;
	std::vector<worker> _Employees;

public:
	department(std::string compny_name, std::vector<worker> employees) : _Company_name(compny_name), _Employees(employees) {};

	std::string GetNameCompany()
	{
		return _Company_name;
	}

	std::vector<worker> GetEmployees()
	{
		return _Employees;
	}

	void PrintEmployees()
	{
		for (worker w : _Employees)
		{
			std::cout << "Имя работника: " << w.GetName() << "\nЗарплата: " << w.GetSalary() << "\nДолжность: " << w.GetJob() << 
															std::endl << std::endl;

		}
	}

a
};