#pragma once

#include <string>
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
	SqlSelectQueryBuilder& addColumn(std::string _column, std::string _type);

	/// <summary>
	/// Изменить имя таблицы
	/// </summary>
	/// <param name="_table">Имя таблицы</param>
	/// <returns></returns>
	SqlSelectQueryBuilder& addFrom(std::string _table);

	/// <summary>
	/// Добавить условие
	/// </summary>
	/// <param name="_column">Параметр</param>
	/// <param name="_value">Значение</param>
	/// <returns></returns>
	SqlSelectQueryBuilder& addWhere(std::string _column, std::string _value);


	/// <summary>
	/// Добавить условие
	/// </summary>
	/// <param name="_column">Параметр</param>
	/// <param name="_value">Значение</param>
	/// <returns></returns>
	SqlSelectQueryBuilder& addWhere(std::string _column, int _value);

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

