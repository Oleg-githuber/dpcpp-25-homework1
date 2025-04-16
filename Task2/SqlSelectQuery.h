#pragma once

#include <string>
#include <iostream>
#include <vector>

class SqlSelectQuery
{
private:
	/// <summary>
	/// �������� �������
	/// </summary>
	std::string table{ "students" };

	/// <summary>
	/// ���� "���"
	/// </summary>
	std::string name{};

	/// <summary>
	/// ���� "�������"
	/// </summary>
	std::string phone{};

	/// <summary>
	/// ���� "ID"
	/// </summary>
	int id{};

	/// <summary>
	/// ���� �������(�������� ����, ��� ������)
	/// </summary>
	std::vector<std::pair<std::string, std::string>> columns{};

	/// <summary>
	/// ���� ������ ����� ALTER  � SELECT
	/// </summary>
	bool isAlter{};

	/// <summary>
	/// ������ � ���������
	/// </summary>
	std::vector<std::string> whereCondition{};

	/// <summary>
	/// SQL-������
	/// </summary>
	std::string query{};

	/// <summary>
	/// ������������ SQL-�������
	/// </summary>
	/// <param name="_query"></param>
	void setQuery(std::string _query);

public:
	/// <summary>
	/// ����������� �� ���������
	/// </summary>
	SqlSelectQuery() = default;

	/// <summary>
	/// �����������, ����������� ������ � ������� SQL-��������
	/// </summary>
	/// <param name="_query"></param>
	SqlSelectQuery(std::string _query);

	/// <summary>
	/// ������ ��� �������� �������
	/// </summary>
	/// <param name="_table"></param>
	void setTable(std::string _table);

	/// <summary>
	/// ������ ��� ���� "���"
	/// </summary>
	/// <param name="_name"></param>
	void setName(std::string _name);

	/// <summary>
	/// ������ ��� ���� "�������"
	/// </summary>
	/// <param name="_phone"></param>
	void setPhone(std::string _phone);

	/// <summary>
	/// �������� �������
	/// </summary>
	/// <param name="_column">��� ����</param>
	/// <param name="_type">��������</param>
	void addColumn(std::string _column, std::string _type);

	/// <summary>
	/// ������ ��� ���� "ID"
	/// </summary>
	/// <param name="_id"></param>
	void setId(int _id);

	/// <summary>
	/// ��������� �����
	/// </summary>
	void setAlter();

	/// <summary>
	/// ����� �����
	/// </summary>
	void resetAlter();

	/// <summary>
	/// ������������ SQL-������� �� ��������� ����� �������
	/// </summary>
	void setQuery();

	/// <summary>
	/// ����� ������� � �������
	/// </summary>
	/// <param name="_query"></param>
	void sqlQuery(std::string _query);

	/// <summary>
	/// ����� ������� � �������
	/// </summary>
	/// <param name="_query"></param>
	void sqlQuery();

	/// <summary>
	/// �������� �������
	/// </summary>
	/// <param name="_column">��� ����</param>
	/// <param name="_value">��������</param>
	void addCondition(std::string _column, std::string _value);

	/// <summary>
	/// �������� �������
	/// </summary>
	/// <param name="_column">��� ����</param>
	/// <param name="_value">��������</param>
	void addCondition(std::string _column, int _value);

	/// <summary>
	/// ������ ��� ������ �������
	/// </summary>
	/// <returns></returns>
	std::string getQuery();
};

