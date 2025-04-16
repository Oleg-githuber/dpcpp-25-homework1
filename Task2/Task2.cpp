// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "SqlSelectQueryBuilder.h"

int main()
{
    // Условия
    std::map<std::string, std::string> conditions;
    conditions.insert(std::make_pair("name", "John"));
    conditions.insert(std::make_pair("age", "13"));

    // Новые колонки
    std::vector<std::pair<std::string, std::string>> cols;
    cols.push_back(std::make_pair("col1", "varchar"));
    cols.push_back(std::make_pair("col2", "varchar"));

    SqlSelectQueryBuilder builder;
    builder.addWhere(conditions);
    //builder.addColumns(cols);
    builder.buildQuery();

    return EXIT_SUCCESS;
}

