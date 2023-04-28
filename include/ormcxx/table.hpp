#pragma once
#include "string_literal.hpp"
#include "column.hpp"
#include "constraints.hpp"

namespace ormcxx{

template<basic_string_literal TableName>
class table {
public:
    static constexpr auto name = []<typename CharT, auto N>(basic_string_literal<CharT, N>) constexpr{ return std::basic_string_view<CharT>(TableName); }(TableName);
    using traits_type = decltype(name)::traits_type;
protected:
    template<basic_string_literal ColumnName>
    using integer = column<int, ColumnName>;
    
    template<basic_string_literal ColumnName>
    using floating_point = column<float, ColumnName>;
    
    template<basic_string_literal ColumnName>
    using string = column<std::basic_string<typename traits_type::char_type>, ColumnName>;
    
    template<regarded_as_clock Clock, basic_string_literal ColumnName>
    using time_point = column<typename Clock::time_point, ColumnName>;
    
    template<typename KeyType, basic_string_literal ColumnName>
    using primary = column<KeyType, ColumnName, std::tuple<>>;

    template<typename KeyType, basic_string_literal ColumnName>
    using foreign_key = column<KeyType, ColumnName, std::tuple<>>;
};


} // namespace ormcxx