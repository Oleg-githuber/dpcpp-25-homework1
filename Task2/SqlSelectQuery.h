#pragma once

#include <string>
#include <iostream>
#include <vector>

class SqlSelectQuery
{
private:
	/// <summary>
	/// Название таблицы
	/// </summary>
	std::string table{ "students" };

	/// <summary>
	/// Поле "Имя"
	/// </summary>
	std::string name{};

	/// <summary>
	/// Поле "Телефон"
	/// </summary>
	std::string phone{};

	/// <summary>
	/// Поле "ID"
	/// </summary>
	int id{};

	/// <summary>
	/// Поле колонка(Название поля, тип данных)
	/// </summary>
	std::vector<std::pair<std::string, std::string>> columns{};

	/// <summary>
	/// Флаг выбора между ALTER  и SELECT
	/// </summary>
	bool isAlter{};

	/// <summary>
	/// Вектор с условиями
	/// </summary>
	std::vector<std::string> whereCondition{};

	/// <summary>
	/// SQL-запрос
	/// </summary>
	std::string query{};

	/// <summary>
	/// Формирование SQL-запроса
	/// </summary>
	/// <param name="_query"></param>
	void setQuery(std::string _query);

public:
	/// <summary>
	/// Конструктор по умолчанию
	/// </summary>
	SqlSelectQuery() = default;

	/// <summary>
	/// Конструктор, принимающий строку с готовым SQL-запросом
	/// </summary>
	/// <param name="_query"></param>
	SqlSelectQuery(std::string _query);

	/// <summary>
	/// Сеттер для названия таблицы
	/// </summary>
	/// <param name="_table"></param>
	void setTable(std::string _table);

	/// <summary>
	/// Сеттер для поля "Имя"
	/// </summary>
	/// <param name="_name"></param>
	void setName(std::string _name);

	/// <summary>
	/// Сеттер для поля "Телефон"
	/// </summary>
	/// <param name="_phone"></param>
	void setPhone(std::string _phone);

	/// <summary>
	/// Добавить колонку
	/// </summary>
	/// <param name="_column">Имя поля</param>
	/// <param name="_type">Значение</param>
	void addColumn(std::string _column, std::string _type);

	/// <summary>
	/// Сеттер для поля "ID"
	/// </summary>
	/// <param name="_id"></param>
	void setId(int _id);

	/// <summary>
	/// Установка флага
	/// </summary>
	void setAlter();

	/// <summary>
	/// Сброс флага
	/// </summary>
	void resetAlter();

	/// <summary>
	/// Формирование SQL-запроса на основании полей объекта
	/// </summary>
	void setQuery();

	/// <summary>
	/// Вывод запроса в консоль
	/// </summary>
	/// <param name="_query"></param>
	void sqlQuery(std::string _query);

	/// <summary>
	/// Вывод запроса в консоль
	/// </summary>
	/// <param name="_query"></param>
	void sqlQuery();

	/// <summary>
	/// Добавить условие
	/// </summary>
	/// <param name="_column">Имя поля</param>
	/// <param name="_value">Значение</param>
	void addCondition(std::string _column, std::string _value);

	/// <summary>
	/// Добавить условие
	/// </summary>
	/// <param name="_column">Имя поля</param>
	/// <param name="_value">Значение</param>
	void addCondition(std::string _column, int _value);

	/// <summary>
	/// Геттер для строки запроса
	/// </summary>
	/// <returns></returns>
	std::string getQuery();
};

