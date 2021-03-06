/*
 * This file Copyright (C) 2007-2014 Mnemosyne LLC
 *
 * It may be used under the GNU GPL versions 2 or 3
 * or any future license endorsed by Mnemosyne LLC.
 *
 */

#pragma once

#include <gtk/gtk.h>

GtkWidget* gtr_prefs_dialog_new(GtkWindow* parent, GObject* core);

enum
{
    MAIN_WINDOW_REFRESH_INTERVAL_SECONDS = 2,
    SECONDARY_WINDOW_REFRESH_INTERVAL_SECONDS = 2
};
