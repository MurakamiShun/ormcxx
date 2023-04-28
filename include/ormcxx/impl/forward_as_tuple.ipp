#pragma once
#include <type_traits>
#include <tuple>

namespace ormcxx{
namespace detail{
template<typename T>
auto make_reference_tuple([[maybe_unused]]T&, [[maybe_unused]] std::integral_constant<std::size_t, 0>){
    return std::tuple<>{};
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 1>){
    auto& [a0] = arg;
    return std::tie(a0);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 2>){
    auto& [a0,a1] = arg;
    return std::tie(a0,a1);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 3>){
    auto& [a0,a1,a2] = arg;
    return std::tie(a0,a1,a2);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 4>){
    auto& [a0,a1,a2,a3] = arg;
    return std::tie(a0,a1,a2,a3);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 5>){
    auto& [a0,a1,a2,a3,a4] = arg;
    return std::tie(a0,a1,a2,a3,a4);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 6>){
    auto& [a0,a1,a2,a3,a4,a5] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 7>){
    auto& [a0,a1,a2,a3,a4,a5,a6] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 8>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 9>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 10>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 11>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 12>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 13>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 14>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 15>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 16>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 17>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
          ] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                   );
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 18>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
          ,a17] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                   ,a17);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 19>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
          ,a17,a18] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                   ,a17,a18);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 20>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
          ,a17,a18,a19] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                   ,a17,a18,a19);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 21>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
          ,a17,a18,a19,a20] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                   ,a17,a18,a19,a20);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 22>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
          ,a17,a18,a19,a20,a21] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                   ,a17,a18,a19,a20,a21);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 23>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
          ,a17,a18,a19,a20,a21,a22] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                   ,a17,a18,a19,a20,a21,a22);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 24>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
          ,a17,a18,a19,a20,a21,a22,a23] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                   ,a17,a18,a19,a20,a21,a22,a23);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 25>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
          ,a17,a18,a19,a20,a21,a22,a23,a24] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                   ,a17,a18,a19,a20,a21,a22,a23,a24);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 26>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
          ,a17,a18,a19,a20,a21,a22,a23,a24,a25] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                   ,a17,a18,a19,a20,a21,a22,a23,a24,a25);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 27>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
          ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                   ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 28>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
          ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                   ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 29>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
          ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                   ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 30>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
          ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                   ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 31>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
          ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                   ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30);
}
template<typename T>
auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 32>){
    auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
          ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31] = arg;
    return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                   ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31);
}
template<typename T, typename std::enable_if<std::is_aggregate<T>::value, std::nullptr_t>::type = nullptr>
struct struct_binder {
private:
    template<auto>
    struct anything {
        template<typename Type>
        operator Type && () const&& noexcept;
    };

    template<auto>
    struct any_base {
        template<typename Type, typename std::enable_if<std::is_base_of<Type, T>::value, std::nullptr_t>::type = nullptr>
        operator Type && () const&& noexcept;
    };

    template<template<auto>class Any, std::size_t... I>
    static constexpr auto initializable(std::index_sequence<I...>, int) noexcept -> decltype(T{ (Any<I>{})... }, bool{}) {
        return true;
    }
    template<template<auto>class Any, std::size_t... I>
    static constexpr auto initializable(std::index_sequence<I...>, char) noexcept {
        return false;
    }

    template<template<auto>class Any, std::size_t N>
    static constexpr std::size_t max_initializable_arg_count() noexcept {
        if constexpr(!initializable<Any>(std::make_index_sequence<N>{}, 0)) return N-1;
        else return max_initializable_arg_count<Any, N+1>();
    }
public:
    static constexpr std::size_t base_class_num = []() constexpr noexcept {
        return max_initializable_arg_count<any_base, 0>();
    }();

    static constexpr std::size_t variable_num = []() constexpr noexcept {
    return max_initializable_arg_count<anything, base_class_num>();
    }() - base_class_num;

    using type = decltype(make_reference_tuple(std::declval<T&>(), std::integral_constant<std::size_t, variable_num>{}));

    constexpr auto operator()(T& t) const noexcept {
        return make_reference_tuple(t, std::integral_constant<std::size_t, variable_num>{});
    }
    constexpr auto operator()(const T& t) const noexcept {
        return make_reference_tuple(t, std::integral_constant<std::size_t, variable_num>{});
    }
    constexpr auto operator()(T&& t) const {
        // forward_like
        auto reference_tuple = make_reference_tuple(t, std::integral_constant<std::size_t, variable_num>{});
        return [&]<std::size_t... I>(std::index_sequence<I...>){
            return std::tuple<std::remove_cvref_t<std::tuple_element_t<I, decltype(reference_tuple)>>...>{
                std::move(std::get<I>(reference_tuple))...
            };
        }(std::make_index_sequence<variable_num>{});
    }
};
} // namespace detail
template<typename T>
requires std::derived_from<table<std::remove_cvref_t<T>::name>, std::remove_cvref_t<T>> &&
         std::is_aggregate_v<std::remove_cvref_t<T>>
auto forward_as_tuple(T&& arg){
    return detail::struct_binder<std::remove_cvref_t<T>>{}(std::forward<T>(arg));
}
} // namespace ormcxx