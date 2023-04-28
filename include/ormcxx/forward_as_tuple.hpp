#pragma once
#include "concepts.hpp"

namespace ormcxx{

template<typename T>
requires std::derived_from<table<std::remove_cvref_t<T>::name>, std::remove_cvref_t<T>> &&
         std::is_aggregate_v<std::remove_cvref_t<T>>
auto forward_as_tuple(T&&);

} // namespace ormcxx

#include "impl/forward_as_tuple.ipp"