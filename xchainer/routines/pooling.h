#pragma once

#include <cstdint>

#include "xchainer/array.h"
#include "xchainer/constant.h"
#include "xchainer/enum.h"
#include "xchainer/stack_vector.h"

namespace xchainer {

Array MaxPool(
        const Array& x,
        const StackVector<int64_t, kMaxNdim>& kernel_size,
        const StackVector<int64_t, kMaxNdim>& stride,
        const StackVector<int64_t, kMaxNdim>& pad,
        bool cover_all = true);

Array AveragePool(
        const Array& x,
        const StackVector<int64_t, kMaxNdim>& kernel_size,
        const StackVector<int64_t, kMaxNdim>& stride,
        const StackVector<int64_t, kMaxNdim>& pad,
        bool cover_all = false,
        AveragePoolMode average_pool_mode = AveragePoolMode::kIgnore);

}  // namespace xchainer
