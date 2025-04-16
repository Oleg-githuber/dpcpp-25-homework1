#pragma once

#include "SqlSelectQueryBuilder.h"
#include "Conditions.h"

class AdvancedSqlSelectQueryBuilder :
    public SqlSelectQueryBuilder
{
public:
    /// <summary>
    /// Добавить условие
    /// </summary>
    /// <param name="_name">Параметр</param>
    /// <param name="condition">Условие</param>
    /// <param name="_value">Значение</param>
    /// <returns></returns>
    AdvancedSqlSelectQueryBuilder& addWhere(const std::string& _name, const Conditions condition, const std::string& _value) noexcept;

    /// <summary>
    /// Добавить условие
    /// </summary>
    /// <param name="_name">Параметр</param>
    /// <param name="condition">Условие</param>
    /// <param name="_value">Значение</param>
    /// <returns></returns>
    AdvancedSqlSelectQueryBuilder& addWhere(const std::string& _name, const Conditions condition, const int _value) noexcept;
};

