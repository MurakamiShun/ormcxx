#pragma once

namespace ormcxx{
template<typename CharT, auto Length>
consteval basic_string_literal<CharT, Length>::basic_string_literal(const value_type(&arg)[Length]) noexcept :
    basic_string_literal(arg, std::make_index_sequence<Length>{})
{
}

template<typename CharT, auto Length>
template<std::size_t... I>
consteval basic_string_literal<CharT, Length>::basic_string_literal(const_pointer arg, std::index_sequence<I...>) noexcept:
    data{arg[I]...}
{
}

template<typename CharT, auto Length>
constexpr basic_string_literal<CharT, Length>::operator std::basic_string_view<value_type>() const{
    return std::basic_string_view<value_type>(data, Length);
}
template<typename CharT, auto Length>
template<decltype(Length) L>
consteval auto basic_string_literal<CharT, Length>::operator+(const basic_string_literal<value_type, L>& arg) const noexcept -> basic_string_literal<value_type, Length+L-1>{
    value_type tmp[Length+L-1];
    traits_type::copy(tmp, data, Length - 1);
    traits_type::copy(tmp + Length-1, arg.data, L);
    return basic_string_literal<value_type, Length+L-1>(tmp);
}
}// namespace ormcxx