/*
 * Schism Tracker - a cross-platform Impulse Tracker clone
 * copyright (c) 2003-2005 chisel <schism@chisel.cjb.net>
 * URL: http://rigelseven.com/schism/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "headers.h"
#include "fmt.h"

/* FIXME - this shouldn't use modplug's headers or readers, but it happens
   that PSM files are gross, and getting the title is as hard as loading it.
*/
#include "mplink.h"

#include <assert.h>
#include <math.h>


int fmt_psm_read_info(dmoz_file_t *file, const byte *data, size_t length)
{
	static CSoundFile qq;
	if (length < 5) return false;
	if (!qq.ReadPSM(data,length)) return false;
	file->title = str_dup(qq.m_szNames[0]);
	if (!file->title) return false;
	file->description = "Epic Megagames MASI";
	file->type = TYPE_MODULE_MOD;
	return true;
}

