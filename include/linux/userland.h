// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (C) 2020 Vlad Adumitroaie <celtare21@gmail.com>.
 * 2020 Pal Zoltan Illes @tbalden at github
 */

extern bool is_selinux_initialized(void);
extern bool is_decrypted;
extern bool is_before_decryption;

extern int get_enforce_value(void);
extern void set_selinux(int value);
