// Task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "SqlSelectQueryBuilder.h"

int main()
{
    SqlSelectQueryBuilder builder;
    //builder.addFrom("students").addWhere("age", 13);  // SELECT запрос
    builder.addColumn("lastname", "VARCHAR[20]").addColumn("age", "INTEGER");    // ALTER запрос
    builder.buildQuery();

    return EXIT_SUCCESS;
}

