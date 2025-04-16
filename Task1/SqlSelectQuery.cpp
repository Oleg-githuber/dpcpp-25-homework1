#include "SqlSelectQuery.h"

//SqlSelectQuery::SqlSelectQuery()
//{}

SqlSelectQuery::SqlSelectQuery(std::string _query) : query{ _query }
{}

void SqlSelectQuery::setTable(std::string _table)
{
	table = _table;
}

void SqlSelectQuery::setName(std::string _name)
{
	name = _name;
}

void SqlSelectQuery::setPhone(std::string _phone)
{
	phone = _phone;
}

void SqlSelectQuery::addColumn(std::string _column, std::string _type)
{
	columns.push_back(std::make_pair(_column, _type));
}

void SqlSelectQuery::setId(int _id)
{
	id = _id;
}

void SqlSelectQuery::setAlter()
{
	isAlter = true;
}

void SqlSelectQuery::resetAlter()
{
	isAlter = false;
}

void SqlSelectQuery::addCondition(std::string _column, std::string _value)
{
	whereCondition.push_back(_column + " = " + _value);
}

void SqlSelectQuery::addCondition(std::string _column, int _value)
{
	whereCondition.push_back(_column + " = " + std::to_string(_value));
}

std::string SqlSelectQuery::getQuery()
{
	return query;
}

void SqlSelectQuery::setQuery(std::string _query)
{
	query = _query;
}


void SqlSelectQuery::setQuery()
{
	//std::string query{};
	if (isAlter)
	{
		query = "ALTER TABLE " + table + " ADD COLUMN";
		std::vector<std::pair<std::string, std::string>>::iterator iterator = columns.begin();
		while (iterator != columns.end())
		{
			query = query + ' ' + iterator->first + ' ' + iterator->second;
			if (iterator < columns.end() - 1)
			{
				query = query + ',';
			}
			++iterator;
		}
	}
	else
	{
		query = "SELECT";
		if (columns.empty())
		{
			query = query + " *";
		}
		else
		{
			for (auto& elem : columns)
			{
				query = query + ' ' + elem.first;
			}
		}
		
		query = query + " FROM " + table;

		if (!whereCondition.empty())
		{
			query = query + " WHERE";
			std::vector<std::string>::iterator iterator{ whereCondition.begin() };
			while (iterator != whereCondition.end())
			{
				query = query + ' ' + *iterator;
				if (iterator < whereCondition.end() - 1)
				{
					query = query + ',';
				}
				++iterator;
			}
		}
	}
	query = query + ';';
}

void SqlSelectQuery::sqlQuery()
{
	setQuery();
	std::cout << query << std::endl;
}

void SqlSelectQuery::sqlQuery(std::string _query)
{
	setQuery(_query);
	std::cout << query << std::endl;
}