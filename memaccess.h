#ifndef __MEMACCESS_H__
#define __MEMACCESS_H__

#include <stdint.h>

#define fastcall __attribute__((regparm(3)))
#define asmlinkage __attribute__((regparm(0)))

fastcall void dispchar(uint16_t celldata, uint16_t offset);
fastcall uint16_t getchar(uint16_t offset);

fastcall uint32_t getset_fs(uint32_t segment);
fastcall void set_fs(uint32_t segment);
fastcall uint32_t set_videomode_fs(void);


static inline uint16_t chr(uint8_t ochar, uint8_t attr)
{
    return (uint16_t) (attr << 8) | (uint8_t) ochar;
}

#endif //__MEMACCESS_H__
