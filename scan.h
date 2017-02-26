/*
 * This file is part of OpenCorsairLink.
 * Copyright (C) 2017  Sean Nelson <audiohacked@gmail.com>

 * OpenCorsairLink is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * any later version.

 * OpenCorsairLink is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with OpenCorsairLink.  If not, see <http://www.gnu.org/licenses/>.
 */

extern struct corsair_device_info corsairlink_devices[2];

struct corsair_device_scan {
	struct corsair_device_info *device;

	/** libusb device structures */
	struct libusb_device_handle *handle;
} scanlist[10]; 

void corsairlink_close(struct corsair_device_info *dev);
int corsairlink_find_device(struct corsair_device_info *dev);
int corsairlink_device_scanner(struct corsair_device_info *dev);