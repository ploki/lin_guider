/*
 * video_proxy.h
 *
 *  Created on: 13.02.2018
 *      Author: gm
 *
 *
 * This file is part of Lin_guider.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef INCLUDE_VIDEO_PROXY_H_
#define INCLUDE_VIDEO_PROXY_H_

#include <stdint.h>

#include "video.h"


namespace video_drv
{

class video_proxy : public cvideo_base
{
public:
	virtual ~video_proxy() {}

private:
	virtual int fit( data_ptr dst, const data_ptr src, uint32_t src_wd, uint32_t src_ht ) = 0;
};

}

#endif /* INCLUDE_VIDEO_PROXY_H_ */
