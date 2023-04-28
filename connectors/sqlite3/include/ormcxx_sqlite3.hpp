#pragma once

#include <sqlite3.h>
#include <ormcxx.hpp>

namespace ormcxx::sqlite3{
inline namespace options{
    constexpr int readonly   = SQLITE_OPEN_READONLY;
    constexpr int readwrite  = SQLITE_OPEN_READWRITE;
    constexpr int create     = SQLITE_OPEN_CREATE | SQLITE_OPEN_READWRITE;
    constexpr int uri        = SQLITE_OPEN_URI;
    constexpr int memory     = SQLITE_OPEN_MEMORY;
    constexpr int no_mutex   = SQLITE_OPEN_NOMUTEX;
    constexpr int full_mutex = SQLITE_OPEN_FULLMUTEX;
}

class connector{
public:
    connector() = delete;
    connector(const connector&) = delete;
    connector(connector&&);
    template<typename CharT>
    connector(std::basic_string_view<CharT> file_name, const int flags = options::readwrite);
    ~connector();
    template<typename CharT>
    static connector open(std::basic_string_view<CharT> file_name, const int flags = options::readwrite);
    void close();
private:
    ::sqlite3* db_obj = nullptr;
};

class executer{

}
} // namespace ormcxx