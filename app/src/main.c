/*
 * Copyright (c) 2023 Peter Maxwell Warasila
 *
 * SPDX-License-Identifier: MIT
 */

#include <zephyr/kernel.h>
#include <zephyr/drivers/uart.h>

#include <zephyr/usb/usb_device.h>
#include <zephyr/usb/usbd.h>

#include <zephyr/net/net_if.h>
#include <zephyr/net/net_core.h>

int main(int argc, char **argv)
{
	printk("launched!\r\n");

	return 0; 
}
