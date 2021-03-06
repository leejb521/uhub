/*
 * uhub - A tiny ADC p2p connection hub
 * Copyright (C) 2007-2013, Jan Vidar Krey
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef HAVE_UHUB_PROBE_H
#define HAVE_UHUB_PROBE_H

#include "uhub.h"

struct hub_probe
{
	struct hub_info*        hub;                /** The hub instance this probe belong to */
	struct net_connection*  connection;         /** Connection data */
	struct ip_addr_encap    addr;               /** IP address */
};

extern struct hub_probe* probe_create(struct hub_info* hub, int sd, struct ip_addr_encap* addr);
extern void probe_destroy(struct hub_probe* probe);

#endif /* HAVE_UHUB_PROBE_H */
