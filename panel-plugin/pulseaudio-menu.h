/*  Copyright (c) 2015-2017 Andrzej <andrzejr@xfce.org>
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2
 *  of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef __PULSEAUDIO_MENU_H__
#define __PULSEAUDIO_MENU_H__

#include <glib.h>
#include <gtk/gtk.h>

#include "pulseaudio-volume.h"
#include "pulseaudio-config.h"
#include "pulseaudio-mpris.h"

G_BEGIN_DECLS

GType pulseaudio_menu_get_type (void);

#define TYPE_PULSEAUDIO_MENU             (pulseaudio_menu_get_type())
#define PULSEAUDIO_MENU(obj)             (G_TYPE_CHECK_INSTANCE_CAST((obj), TYPE_PULSEAUDIO_MENU, PulseaudioMenu))
#define PULSEAUDIO_MENU_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST((klass),  TYPE_PULSEAUDIO_MENU, PulseaudioMenuClass))
#define IS_PULSEAUDIO_MENU(obj)          (G_TYPE_CHECK_INSTANCE_TYPE((obj), TYPE_PULSEAUDIO_MENU))
#define IS_PULSEAUDIO_MENU_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE((klass),  TYPE_PULSEAUDIO_MENU))
#define PULSEAUDIO_MENU_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS((obj),  TYPE_PULSEAUDIO_MENU, PulseaudioMenuClass))

typedef struct          _PulseaudioMenu              PulseaudioMenu;
typedef struct          _PulseaudioMenuClass         PulseaudioMenuClass;

PulseaudioMenu         *pulseaudio_menu_new         (PulseaudioVolume *volume,
                                                     PulseaudioConfig *config,
                                                     PulseaudioMpris  *mpris,
                                                     GtkWidget        *widget);

G_END_DECLS

#endif /* !__PULSEAUDIO_MENU_H__ */
