#ifndef DRIVER_MANAGER_H
#define DRIVER_MANAGER_H

class CDriverManager
{
public:
  CDriverManager();
  virtual ~CDriverManager();

  static CPQConnection *getConnection(const char *url);
  static CPQConnection *getConnection(const char *url,
                                      const char *user,
                                      const char *password);
};

#endif /* DRIVER_MANAGER_H */
