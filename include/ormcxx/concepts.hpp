#pragma once
#include <type_traits>
#include <concepts>
#include <chrono>

namespace ormcxx{
namespace detail{
    template<typename T, template<typename...>typename U, typename enabler = void>
    struct specialized_from_impl;
}

// Whether T is template specialization from U
template<typename T, template<typename...>typename U>
concept specialized_from = detail::specialized_from_impl<T, U>::value;

template<typename T>
concept regarded_as_clock = std::chrono::is_clock_v<T>;

} // namespace ormcxx

#include "impl/concepts.ipp"