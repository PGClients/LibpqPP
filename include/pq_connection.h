#ifndef PQCONNECTION_H
#define PQCONNECTION_H

#include<libpq-fe.h>

class CPQConnection : CConection
{
private:
  const PGconn  *_pg_conn;
  int           _connstatus;
  string        _host;
  int           _port;
  string        _user;
  string        _password;
  string        _dbname;
  string        _time_out;
  string        _client_encoding;

public:
  CPQConnection(const char *host,  
               string port, 
               string user,
               string password ,
               string dbname,
               string time_out,
               string clinet_encoding);	
  virtual ~CPQConnection();
};

#endif /* PQCONNECTION_H */
