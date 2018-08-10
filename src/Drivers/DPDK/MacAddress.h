/* Copyright (c) 2011-2018, Stanford University
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef HOMA_DRIVERS_DPDK_MACADDRESS_H
#define HOMA_DRIVERS_DPDK_MACADDRESS_H

#include "Driver.h"

namespace Homa {
namespace Drivers {
namespace DPDK {

/**
 * A container for an Ethernet hardware address.
 */
struct MacAddress : public Driver::Address {
    explicit MacAddress(const uint8_t raw[6]);
    explicit MacAddress(const char* macStr);
    MacAddress(const MacAddress& other);
    std::string toString() const;
    bool isNull() const;

    /// The raw bytes of the MAC address.
    uint8_t address[6];
};

}  // namespace DPDK
}  // namespace Drivers
}  // namespace Homa

#endif  // HOMA_DRIVERS_DPDK_MACADDRESS_H