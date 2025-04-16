#pragma once

#include <string>
#include <map>
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
	SqlSelectQueryBuilder& addColumn(const std::string _column, std::string _type) noexcept;

	/// <summary>
	/// �������� ������ �������
	/// </summary>
	/// <param name="_columns">������ ���(��������, ���)</param>
	/// <returns></returns>
	SqlSelectQueryBuilder& addColumns(const std::vector<std::pair<std::string, std::string>>& _columns) noexcept;

	/// <summary>
	/// �������� ��� �������
	/// </summary>
	/// <param name="_table">��� �������</param>
	/// <returns></returns>
	SqlSelectQueryBuilder& addFrom(const std::string _table) noexcept;

	/// <summary>
	/// �������� �������
	/// </summary>
	/// <param name="_column">��������</param>
	/// <param name="_value">��������</param>
	/// <returns></returns>
	SqlSelectQueryBuilder& addWhere(const std::string _column, std::string _value) noexcept;

	/// <summary>
	/// �������� �������
	/// </summary>
	/// <param name="_column">��������</param>
	/// <param name="_value">��������</param>
	/// <returns></returns>
	SqlSelectQueryBuilder& addWhere(const std::string _column, int _value) noexcept;

	/// <summary>
	/// �������� map �������
	/// </summary>
	/// <param name="kv"></param>
	/// <returns></returns>
	SqlSelectQueryBuilder& addWhere(const std::map<std::string, std::string>& kv) noexcept;

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

