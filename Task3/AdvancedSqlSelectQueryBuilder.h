#pragma once

#include "SqlSelectQueryBuilder.h"
#include "Conditions.h"

class AdvancedSqlSelectQueryBuilder :
    public SqlSelectQueryBuilder
{
public:
    /// <summary>
    /// �������� �������
    /// </summary>
    /// <param name="_name">��������</param>
    /// <param name="condition">�������</param>
    /// <param name="_value">��������</param>
    /// <returns></returns>
    AdvancedSqlSelectQueryBuilder& addWhere(const std::string& _name, const Conditions condition, const std::string& _value) noexcept;

    /// <summary>
    /// �������� �������
    /// </summary>
    /// <param name="_name">��������</param>
    /// <param name="condition">�������</param>
    /// <param name="_value">��������</param>
    /// <returns></returns>
    AdvancedSqlSelectQueryBuilder& addWhere(const std::string& _name, const Conditions condition, const int _value) noexcept;
};

