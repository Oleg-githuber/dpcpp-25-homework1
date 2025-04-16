#pragma once

#include <string>
#include "SqlSelectQuery.h"

class SqlSelectQueryBuilder
{
private:
	/// <summary>
	/// ������ �������
	/// </summary>
	SqlSelectQuery queery;

public:
	/// <summary>
	/// �������� �������
	/// </summary>
	/// <param name="_column">��� ���������</param>
	/// <param name="_type">��� ���������</param>
	/// <returns></returns>
	SqlSelectQueryBuilder& addColumn(std::string _column, std::string _type);

	/// <summary>
	/// �������� ��� �������
	/// </summary>
	/// <param name="_table">��� �������</param>
	/// <returns></returns>
	SqlSelectQueryBuilder& addFrom(std::string _table);

	/// <summary>
	/// �������� �������
	/// </summary>
	/// <param name="_column">��������</param>
	/// <param name="_value">��������</param>
	/// <returns></returns>
	SqlSelectQueryBuilder& addWhere(std::string _column, std::string _value);


	/// <summary>
	/// �������� �������
	/// </summary>
	/// <param name="_column">��������</param>
	/// <param name="_value">��������</param>
	/// <returns></returns>
	SqlSelectQueryBuilder& addWhere(std::string _column, int _value);

	/// <summary>
	/// ������������ � ����� SQL-�������
	/// </summary>
	/// <param name="_query"></param>
	void buildQuery(std::string _query);

	/// <summary>
	/// ������������ � ����� SQL-�������
	/// </summary>
	void buildQuery();
};

