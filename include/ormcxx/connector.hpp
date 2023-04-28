#pragma once
#include <expected>

namespace ormcxx{
struct connector_common{
    // insert
    // update
    // destroy
    // pluck
    // where
    // find
    // all
};

struct query{
};

template<typename Result, typename Bind = std::tuple<>>
struct query_executer{
    std::shared_ptr<connector_common> ptr;
};
} // namespace ormcxx
