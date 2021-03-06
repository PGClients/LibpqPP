/*-------------------------------------------------------------------------
 *
 * driver_manager.c
 *
 * This file driver_manager.c return the connection object.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, Licensor
 * provides the Work (and each Contributor provides its Contributions)
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied, including, without limitation, any warranties
 * or conditions of TITLE, NON-INFRINGEMENT, MERCHANTABILITY, or FITNESS FOR
 * A PARTICULAR PURPOSE. You are solely responsible for determining the
 * appropriateness of using or redistributing the Work and assume any
 * risks associated with Your exercise of permissions under this License.
 *
 *-------------------------------------------------------------------------
 */

#include "driver_manager.h"

CDriverManager::CDriverManager(
{

}


~CDriverManager::CDriverManager(
{

}


/*
 * Parse the url and extract the information neccessary to connect PostgreSQL
 * database which is host, port, dbname, user and password.
 *
 * postgresql://localhost/test?user=foo&password=secret
 *
 * Using the extracted information return a CPQConnection object pointer.
 */
CPQConnection *
CDriverManager::getConnection(const char *url)
{

}


/*
 * Parse the url and extract the information neccessary to connect PostgreSQL
 * database which is host, port and database and uses the user and password
 * parameter.
 *
 * postgresql://localhost/test
 *
 * Using the extracted information return a CPQConnection object pointer.
 */
CPQConnection *
CDriverManager::getConnection(const char *url, const char *user, const char *password)
{

}

