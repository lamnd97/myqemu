#ifndef TIAM3359_H
#define TIAM3359_H

#include "qemu/osdep.h"
#include "qapi/error.h"
#include "qemu/datadir.h"
#include "hw/sysbus.h"
#include "hw/arm/boot.h"
#include "hw/arm/primecell.h"
#include "hw/net/lan9118.h"
#include "hw/i2c/i2c.h"
#include "net/net.h"
#include "sysemu/sysemu.h"
#include "hw/boards.h"
#include "hw/loader.h"
#include "hw/block/flash.h"
#include "sysemu/device_tree.h"
#include "qemu/error-report.h"
#include <libfdt.h>
#include "hw/char/pl011.h"
#include "hw/cpu/a9mpcore.h"
#include "hw/cpu/a15mpcore.h"
#include "hw/i2c/arm_sbcon_i2c.h"
#include "hw/sd/sd.h"
#include "qapi/qmp/qlist.h"
#include "qom/object.h"
#include "audio/audio.h"
#include "target/arm/cpu-qom.h"

struct TIAM3359State {
    MachineState parent;
    MemoryRegion vram;
    MemoryRegion sram;
    MemoryRegion flashalias;
    MemoryRegion a15sram;
    bool secure;
    bool virt;
};
#endif