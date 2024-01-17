/*
 * Copyright © 2008-2011 Kristian Høgsberg
 * Copyright © 2011 Intel Corporation
 * Copyright © 2017, 2018 Collabora, Ltd.
 * Copyright © 2017, 2018 General Electric Company
 * Copyright (c) 2018 DisplayLink (UK) Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial
 * portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT.  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/*
 * Like libdrm fourcc.h, also this header is used by libweston core.
 * This header must not depend on anything libweston core is not already
 * depending on.
 */

#pragma once

/**
 * List of properties attached to DRM planes
 */
enum wdrm_plane_property {
	WDRM_PLANE_TYPE = 0,
	WDRM_PLANE_SRC_X,
	WDRM_PLANE_SRC_Y,
	WDRM_PLANE_SRC_W,
	WDRM_PLANE_SRC_H,
	WDRM_PLANE_CRTC_X,
	WDRM_PLANE_CRTC_Y,
	WDRM_PLANE_CRTC_W,
	WDRM_PLANE_CRTC_H,
	WDRM_PLANE_FB_ID,
	WDRM_PLANE_CRTC_ID,
	WDRM_PLANE_IN_FORMATS,
	WDRM_PLANE_IN_FENCE_FD,
	WDRM_PLANE_FB_DAMAGE_CLIPS,
	WDRM_PLANE_ZPOS,
	WDRM_PLANE_ROTATION,
	WDRM_PLANE_ALPHA,
	WDRM_PLANE__COUNT
};

/**
 * Possible values for the WDRM_PLANE_TYPE property.
 */
enum wdrm_plane_type {
	WDRM_PLANE_TYPE_PRIMARY = 0,
	WDRM_PLANE_TYPE_CURSOR,
	WDRM_PLANE_TYPE_OVERLAY,
	WDRM_PLANE_TYPE__COUNT
};

/**
 * Possible values for the WDRM_PLANE_ROTATION property.
 */
enum wdrm_plane_rotation {
	WDRM_PLANE_ROTATION_0 = 0,
	WDRM_PLANE_ROTATION_90,
	WDRM_PLANE_ROTATION_180,
	WDRM_PLANE_ROTATION_270,
	WDRM_PLANE_ROTATION_REFLECT_X,
	WDRM_PLANE_ROTATION_REFLECT_Y,
	WDRM_PLANE_ROTATION__COUNT,
};

/**
 * List of properties attached to a DRM connector
 */
enum wdrm_connector_property {
	WDRM_CONNECTOR_EDID = 0,
	WDRM_CONNECTOR_DPMS,
	WDRM_CONNECTOR_CRTC_ID,
	WDRM_CONNECTOR_WRITEBACK_PIXEL_FORMATS,
	WDRM_CONNECTOR_WRITEBACK_FB_ID,
	WDRM_CONNECTOR_WRITEBACK_OUT_FENCE_PTR,
	WDRM_CONNECTOR_NON_DESKTOP,
	WDRM_CONNECTOR_CONTENT_PROTECTION,
	WDRM_CONNECTOR_HDCP_CONTENT_TYPE,
	WDRM_CONNECTOR_PANEL_ORIENTATION,
	WDRM_CONNECTOR_HDR_OUTPUT_METADATA,
	WDRM_CONNECTOR_MAX_BPC,
	WDRM_CONNECTOR_CONTENT_TYPE,
	WDRM_CONNECTOR__COUNT
};

enum wdrm_content_protection_state {
	WDRM_CONTENT_PROTECTION_UNDESIRED = 0,
	WDRM_CONTENT_PROTECTION_DESIRED,
	WDRM_CONTENT_PROTECTION_ENABLED,
	WDRM_CONTENT_PROTECTION__COUNT
};

enum wdrm_hdcp_content_type {
	WDRM_HDCP_CONTENT_TYPE0 = 0,
	WDRM_HDCP_CONTENT_TYPE1,
	WDRM_HDCP_CONTENT_TYPE__COUNT
};

enum wdrm_dpms_state {
	WDRM_DPMS_STATE_OFF = 0,
	WDRM_DPMS_STATE_ON,
	WDRM_DPMS_STATE_STANDBY, /* unused */
	WDRM_DPMS_STATE_SUSPEND, /* unused */
	WDRM_DPMS_STATE__COUNT
};

enum wdrm_panel_orientation {
	WDRM_PANEL_ORIENTATION_NORMAL = 0,
	WDRM_PANEL_ORIENTATION_UPSIDE_DOWN,
	WDRM_PANEL_ORIENTATION_LEFT_SIDE_UP,
	WDRM_PANEL_ORIENTATION_RIGHT_SIDE_UP,
	WDRM_PANEL_ORIENTATION__COUNT
};

enum wdrm_content_type {
	WDRM_CONTENT_TYPE_NO_DATA = 0,
	WDRM_CONTENT_TYPE_GRAPHICS,
	WDRM_CONTENT_TYPE_PHOTO,
	WDRM_CONTENT_TYPE_CINEMA,
	WDRM_CONTENT_TYPE_GAME,
	WDRM_CONTENT_TYPE__COUNT
};

/**
 * List of properties attached to DRM CRTCs
 */
enum wdrm_crtc_property {
	WDRM_CRTC_MODE_ID = 0,
	WDRM_CRTC_ACTIVE,
	WDRM_CRTC_CTM,
	WDRM_CRTC_DEGAMMA_LUT,
	WDRM_CRTC_DEGAMMA_LUT_SIZE,
	WDRM_CRTC_GAMMA_LUT,
	WDRM_CRTC_GAMMA_LUT_SIZE,
	WDRM_CRTC_VRR_ENABLED,
	WDRM_CRTC__COUNT
};
