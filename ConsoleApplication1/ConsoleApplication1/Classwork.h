#pragma once

#include <iostream>

class worker
{
private:
	std::string _name;
	int _salary;
	std::string _job;

public:
	//�����������
	worker(std::string name, int salary, std::string job) : _name(name), _salary(salary), _job(job) {};

	//�������-����� ��� ������� � �����
	
	//��������� �����
	std::string GetName()
	{
		return _name;
	}

	//��������� ��������
	int GetSalary()
	{
		return _salary;
	}

	//��������� ���������
	std::string GetJob()
	{
		return _job;
	}


};
