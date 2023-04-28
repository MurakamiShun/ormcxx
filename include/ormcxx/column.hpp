#pragma once
#include "string_literal.hpp"
#include "concepts.hpp"
#include <tuple>
#include <optional>

namespace ormcxx{

template<typename T, basic_string_literal ColumnName, specialized_from<std::tuple> Constraints = std::tuple<>>
class column : public std::optional<T>{
public:
    static constexpr auto name = []<typename CharT, auto N>(basic_string_literal<CharT, N>) constexpr{ return std::basic_string_view<CharT>(ColumnName); }(ColumnName);
    using value_type = T;
    using traits_type = decltype(name)::traits_type;
private:
};


} // namespace ormcxx