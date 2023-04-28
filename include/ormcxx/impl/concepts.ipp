#pragma once

namespace ormcxx::detail{
    template<typename T, template<typename...>typename U, typename enabler>
    struct specialized_from_impl : std::false_type {};

    template<template<typename...>typename T, template<typename...>typename U, typename... Args>
    struct specialized_from_impl<T<Args...>, U, std::enable_if_t<std::is_same_v<T<Args...>, U<Args...>>>> : std::true_type {};
}// namespace ormcxx::detail