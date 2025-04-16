#include "AdvancedSqlSelectQueryBuilder.h"

AdvancedSqlSelectQueryBuilder& AdvancedSqlSelectQueryBuilder::addWhere(const std::string& _name, const Conditions condition, const std::string& _value) noexcept
{
	switch (condition)
	{
	case Conditions::equal:
		queery.addCondition(_name, _value, '=');
		break;
	case Conditions::more:
		queery.addCondition(_name, _value, '>');
		break;
	case Conditions::less:
		queery.addCondition(_name, _value, '<');
		break;
	default:
		break;
	}
	return *this;
}

AdvancedSqlSelectQueryBuilder& AdvancedSqlSelectQueryBuilder::addWhere(const std::string& _name, const Conditions condition, const int _value) noexcept
{
	return addWhere(_name, condition, std::to_string(_value));
}