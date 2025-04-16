#include "SqlSelectQueryBuilder.h"

SqlSelectQueryBuilder& SqlSelectQueryBuilder::addColumn(std::string _column, std::string _type)
{
	queery.setAlter();
	queery.addColumn(_column, _type);
	return *this;
}

SqlSelectQueryBuilder& SqlSelectQueryBuilder::addFrom(std::string _table)
{
	queery.setTable(_table);
	return *this;
}

SqlSelectQueryBuilder& SqlSelectQueryBuilder::addWhere(std::string _column, std::string _value)
{
	queery.addCondition(_column, _value);
	return *this;
}

SqlSelectQueryBuilder& SqlSelectQueryBuilder::addWhere(std::string _column, int _value)
{
	queery.addCondition(_column, _value);
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