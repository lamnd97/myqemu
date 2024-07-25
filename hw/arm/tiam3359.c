#include "qemu/osdep.h"
#include "qapi/error.h"
#include "qemu/module.h"
#include "hw/arm/tiam3359.h"
#include "hw/intc/arm_gic_common.h"
#include "hw/misc/unimp.h"
#include "hw/boards.h"
#include "sysemu/kvm.h"
#include "sysemu/sysemu.h"
#include "kvm_arm.h"
#include "target/arm/cpu-qom.h"
#include "target/arm/gtimer.h"

#define TYPE_TIAM3359_MACHINE   MACHINE_TYPE_NAME("beagleboneblack")
OBJECT_DECLARE_SIMPLE_TYPE(TIAM3359State, TIAM3359_MACHINE)


static void tiam3359_init(MachineState *machine)
{
    
}

static void tiam3359_instance_init(Object *obj)
{
    
}

static void tiam3359_class_init(ObjectClass *oc, void *data)
{

    static const char * const valid_cpu_types[] = {
        ARM_CPU_TYPE_NAME("cortex-a8"),
        NULL
    };

    MachineClass *mc = MACHINE_CLASS(oc);

    mc->desc = "Beagle Bone Black TI AM3359";
    mc->valid_cpu_types = valid_cpu_types;
    mc->init = tiam3359_init;
    mc->max_cpus = 1;
    mc->no_sdcard = 1;
    mc->ignore_memory_transaction_failures = true;
    mc->valid_cpu_types = valid_cpu_types;
    mc->default_ram_id = "zynq.ext_ram";

}

static const TypeInfo tiam3359_type_info = {
    .name = TYPE_TIAM3359_MACHINE,
    .parent = TYPE_MACHINE,
    .instance_size = sizeof(TIAM3359State),
    .class_init = tiam3359_class_init,
    .instance_init = tiam3359_instance_init,
};

static void tiam3359_register_types(void)
{
    type_register_static(&tiam3359_type_info);
}
type_init(tiam3359_register_types)