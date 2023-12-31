/*******************************************************************************
* Copyright 2023 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#ifndef CPU_CPU_GROUP_NORMALIZATION_PD_HPP
#define CPU_CPU_GROUP_NORMALIZATION_PD_HPP

#include "common/group_normalization_pd.hpp"
#include "cpu/cpu_engine.hpp"

namespace dnnl {
namespace impl {
namespace cpu {

struct cpu_group_normalization_fwd_pd_t : public group_normalization_fwd_pd_t {
    using group_normalization_fwd_pd_t::group_normalization_fwd_pd_t;
};

struct cpu_group_normalization_bwd_pd_t : public group_normalization_bwd_pd_t {
    using group_normalization_bwd_pd_t::group_normalization_bwd_pd_t;
};

} // namespace cpu
} // namespace impl
} // namespace dnnl

#endif
