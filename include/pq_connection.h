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

private:
  int Connect()
  void Disconnect();

public:
  CPQConnection(const char *host,  
               string port, 
               string user,
               string password ,
               string dbname,
               string time_out,
               string clinet_encoding);	
  virtual ~CPQConnection();

  CPQStatment *createStmt();

};

#endif /* PQCONNECTION_H */
