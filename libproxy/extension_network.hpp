/*******************************************************************************
 * libproxy - A library for proxy configuration
 * Copyright (C) 2009 Nathaniel McCallum <nathaniel@natemccallum.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA
 ******************************************************************************/

#ifndef EXTENSION_NETWORK_HPP_
#define EXTENSION_NETWORK_HPP_

#include <libmodman/module.hpp>
#include "config.hpp"

namespace libproxy {
using namespace libmodman;

// Network module
class DLL_PUBLIC network_extension : public extension<network_extension> {
public:
	virtual bool changed()=0;
};

}

#endif /* EXTENSION_NETWORK_HPP_ */
