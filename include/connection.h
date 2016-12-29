#ifndef CONNECTION_H
#define CONNECTION_H

class CConnnction
{
public:
  CConnection();
  virtual ~CConnection();

protected:
  int connect() = 0;
  void disconnect() = 0;

};

#endif /* CONNECTION_H */
