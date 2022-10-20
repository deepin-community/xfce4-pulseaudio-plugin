/*
 *  Copyright (C) 2015 Andrzej <andrzejr@xfce.org>
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

#ifndef __PULSEAUDIO_DIALOG_H__
#define __PULSEAUDIO_DIALOG_H__

#include <glib.h>
#include <gtk/gtk.h>
#include "pulseaudio-config.h"

G_BEGIN_DECLS

typedef struct _PulseaudioDialogClass PulseaudioDialogClass;
typedef struct _PulseaudioDialog      PulseaudioDialog;

#define TYPE_PULSEAUDIO_DIALOG            (pulseaudio_dialog_get_type ())
#define PULSEAUDIO_DIALOG(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PULSEAUDIO_DIALOG, PulseaudioDialog))
#define PULSEAUDIO_DIALOG_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TYPE_PULSEAUDIO_DIALOG, PulseaudioDialogClass))
#define IS_PULSEAUDIO_DIALOG(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PULSEAUDIO_DIALOG))
#define IS_PULSEAUDIO_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TYPE_PULSEAUDIO_DIALOG))
#define PULSEAUDIO_DIALOG_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TYPE_PULSEAUDIO_DIALOG, PulseaudioDialogClass))

GType               pulseaudio_dialog_get_type (void) G_GNUC_CONST;

void                pulseaudio_dialog_show     (PulseaudioDialog  *dialog,
                                                GdkScreen         *screen);

PulseaudioDialog   *pulseaudio_dialog_new      (PulseaudioConfig  *config);

G_END_DECLS

#endif /* !__PULSEAUDIO_DIALOG_H__ */
