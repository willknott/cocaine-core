/*
    Copyright (c) 2011-2012 Andrey Sibiryov <me@kobology.ru>
    Copyright (c) 2011-2012 Other contributors as noted in the AUTHORS file.

    This file is part of Cocaine.

    Cocaine is free software; you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    Cocaine is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>. 
*/

#ifndef COCAINE_JOB_POLICY_HPP
#define COCAINE_JOB_POLICY_HPP

#include "cocaine/common.hpp"

namespace cocaine { namespace engine {

// Job policy
// ----------

struct policy_t {
    policy_t():
        urgent(false),
        timeout(3.0f),
        deadline(3.0f)
    { }

    policy_t(bool urgent_, double timeout_, double deadline_):
        urgent(urgent_),
        timeout(timeout_),
        deadline(deadline_)
    { }

    bool urgent;
    double timeout;
    double deadline;
};

}} // namespace cocaine::engine

#endif
