/*
 * gnome-keyring
 *
 * Copyright (C) 2009 Stefan Walter
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, see
 * <http://www.gnu.org/licenses/>.
 */

#ifndef __GKD_SECRET_LOCK_H__
#define __GKD_SECRET_LOCK_H__

#include "gkd-secret-types.h"

#include <gck/gck.h>

#include <dbus/dbus.h>

gboolean            gkd_secret_lock                (GckObject *collection,
                                                    DBusError *derr);

gboolean            gkd_secret_lock_all            (GckSession *session,
                                                    DBusError *derr);

#endif /* __GKD_SECRET_LOCK_H__ */
