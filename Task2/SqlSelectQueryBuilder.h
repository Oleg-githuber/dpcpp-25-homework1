#pragma once

#include <string>
#include <map>
#include "SqlSelectQuery.h"

class SqlSelectQueryBuilder
{
private:
	/// <summary>
	/// Объект запроса
	/// </summary>
	SqlSelectQuery queery;

public:
	/// <summary>
	/// Добавить колонку
	/// </summary>
	/// <param name="_column">Имя параметра</param>
	/// <param name="_type">Тип параметра</param>
	/// <returns></returns>
	SqlSelectQueryBuilder& addColumn(const std::string _column, std::string _type) noexcept;

	/// <summary>
	/// Добавить вектор колонок
	/// </summary>
	/// <param name="_columns">Вектор пар(параметр, тип)</param>
	/// <returns></returns>
	SqlSelectQueryBuilder& addColumns(const std::vector<std::pair<std::string, std::string>>& _columns) noexcept;

	/// <summary>
	/// Изменить имя таблицы
	/// </summary>
	/// <param name="_table">Имя таблицы</param>
	/// <returns></returns>
	SqlSelectQueryBuilder& addFrom(const std::string _table) noexcept;

	/// <summary>
	/// Добавить условие
	/// </summary>
	/// <param name="_column">Параметр</param>
	/// <param name="_value">Значение</param>
	/// <returns></returns>
	SqlSelectQueryBuilder& addWhere(const std::string _column, std::string _value) noexcept;

	/// <summary>
	/// Добавить условие
	/// </summary>
	/// <param name="_column">Параметр</param>
	/// <param name="_value">Значение</param>
	/// <returns></returns>
	SqlSelectQueryBuilder& addWhere(const std::string _column, int _value) noexcept;

	/// <summary>
	/// Добавить map условий
	/// </summary>
	/// <param name="kv"></param>
	/// <returns></returns>
	SqlSelectQueryBuilder& addWhere(const std::map<std::string, std::string>& kv) noexcept;

	/// <summary>
	/// Формирование и вывод SQL-запроса
	/// </summary>
	/// <param name="_query"></param>
	void buildQuery(std::string _query);

	/// <summary>
	/// Формирование и вывод SQL-запроса
	/// </summary>
	void buildQuery();
};

