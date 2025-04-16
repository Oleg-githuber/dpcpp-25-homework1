// Task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "AdvancedSqlSelectQueryBuilder.h"

int main()
{
    AdvancedSqlSelectQueryBuilder builder;
    builder.addWhere("id", MORE, 4);
    builder.buildQuery();

    return EXIT_SUCCESS;
}

