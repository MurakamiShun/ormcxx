#pragma once

namespace ormcxx{

struct constraint{};

template<typename... Constraints>
using make_constraints = std::tuple<Constraints...>;

namespace constraints{
    struct primary_key;
    struct not_null;
    struct unique;
    struct foreign_key;
    struct default_value;
    struct auto_increment;
    struct created;
    struct updated;
}

}// namespace ormcxx