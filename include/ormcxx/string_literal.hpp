#pragma once
#include <cstddef>
#include <string_view>
#include <utility>

namespace ormcxx{

// including null character
template<typename CharT, auto Length>
struct basic_string_literal{
    using traits_type = std::char_traits<CharT>;
    using value_type = traits_type::char_type;
    using size_type = decltype(Length);
    using pointer = value_type*;
    using const_pointer = const value_type*;

    const value_type data[Length];

    consteval basic_string_literal() = delete;
    consteval basic_string_literal(const value_type(&)[Length]) noexcept;
    template<std::size_t... I>
    consteval basic_string_literal(const_pointer, std::index_sequence<I...>) noexcept;

    constexpr operator std::basic_string_view<value_type>() const;
    
    template<size_type L>
    consteval auto operator+(const basic_string_literal<value_type, L>& ) const noexcept -> basic_string_literal<value_type, Length+L-1>;
};

template<typename CharT, auto Length>
basic_string_literal(const CharT(&)[Length]) -> basic_string_literal<CharT, Length>;

} // namespace ormcxx

#include "impl/string_literal.ipp"