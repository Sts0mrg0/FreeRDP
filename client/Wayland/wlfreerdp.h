/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * Wayland Client
 *
 * Copyright 2014 Manuel Bachmann <tarnyko@tarnyko.net>
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
 */

#ifndef FREERDP_CLIENT_WAYLAND_FREERDP_H
#define FREERDP_CLIENT_WAYLAND_FREERDP_H

#include <freerdp/client/encomsp.h>
#include <freerdp/client/rdpei.h>
#include <freerdp/gdi/gfx.h>
#include <freerdp/freerdp.h>
#include <freerdp/log.h>
#include <winpr/wtypes.h>
#include <uwac/uwac.h>

#define TAG CLIENT_TAG("wayland")

typedef struct wlf_context wlfContext;
typedef struct wlf_clipboard wfClipboard;
typedef struct _wlfDispContext wlfDispContext;

struct wlf_context
{
	rdpContext context;

	UwacDisplay* display;
	HANDLE displayHandle;
	UwacWindow* window;
	UwacSeat* seat;

	BOOL fullscreen;

	/* Channels */
	RdpeiClientContext* rdpei;
	RdpgfxClientContext* gfx;
	EncomspClientContext* encomsp;
	wfClipboard* clipboard;
	wlfDispContext* disp;
	wLog* log;
};

#endif /* FREERDP_CLIENT_WAYLAND_FREERDP_H */

