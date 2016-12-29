/*-------------------------------------------------------------------------
 *
 * pq_connection.c
 *
 * This file pq_connection.c contains the implementaion of 
 * the libpq connections function.
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

#include <iostream>

#include <libpq-fe.h>

#include "connction.h"

CPQCoonection::CPQConnection(const char *host,  
               string port, 
               string user,
               string password ,
               string dbname,
               string time_out,
               string clinet_encoding) : 
               _host(host),
               _port(port);
               _user(user),
               _password(password),
               _dbname = (dbname),
               _time_out = (time_out),
               _client_encoding(client_encoding)
{

}

	
CPQConnection::~PQConnection();
{

}


int
CPQConnection::Connect()
{
  return _connstatus;
}
 

void
CPQConnection::Disconnect()
{

}

