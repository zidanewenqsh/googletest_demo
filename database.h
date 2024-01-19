#ifndef DATABASE_H
#define DATABASE_H

#include <string>

class Database {
public:
    virtual bool login(const std::string& username, const std::string& password) = 0;
    virtual ~Database() {}
};

#endif // DATABASE_H
