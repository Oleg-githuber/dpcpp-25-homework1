#include "SqlSelectQueryBuilder.h"

SqlSelectQueryBuilder& SqlSelectQueryBuilder::addColumn(const std::string _column, std::string _type) noexcept
{
	queery.setAlter();
	queery.addColumn(_column, _type);
	return *this;
}

SqlSelectQueryBuilder& SqlSelectQueryBuilder::addFrom(const std::string _table) noexcept
{
	queery.setTable(_table);
	return *this;
}

SqlSelectQueryBuilder& SqlSelectQueryBuilder::addWhere(const std::string _column, std::string _value) noexcept
{
	queery.addCondition(_column, _value, '=');
	return *this;
}

SqlSelectQueryBuilder& SqlSelectQueryBuilder::addWhere(const std::string _column, int _value) noexcept
{
	queery.addCondition(_column, _value, '=');
	return *this;
}

void SqlSelectQueryBuilder::buildQuery(std::string _query)
{
	queery.sqlQuery(_query);
}

void SqlSelectQueryBuilder::buildQuery()
{
	queery.sqlQuery();
}

SqlSelectQueryBuilder& SqlSelectQueryBuilder::addWhere(const std::map<std::string, std::string>& kv) noexcept
{
	for (const auto& elem : kv)
	{
		addWhere(elem.first, elem.second);
	}
	return *this;
}

SqlSelectQueryBuilder& SqlSelectQueryBuilder::addColumns(const std::vector<std::pair<std::string, std::string>>& _columns) noexcept
{
	for (const auto& elem : _columns)
	{
		addColumn(elem.first, elem.second);
	}
	return *this;
}
