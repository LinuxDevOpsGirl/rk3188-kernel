#ifndef __TCHIP_CAMERA_SETUP__
#define __TCHIP_CAMERA_SETUP__

#ifdef CONFIG_TCHIP_MACH_DOUBLE_CAMEAR 
#define CONFIG_TCHIP_MACH_SINGLE_FRONT_CAMERA
#define CONFIG_TCHIP_MACH_SINGLE_BACK_CAMERA
#endif

static struct rkcamera_platform_data new_camera[] = {
#if defined(CONFIG_TCHIP_MACH_SINGLE_BACK_CAMERA)
    new_camera_device_ex(RK29_CAM_SENSOR_OV5640,
                        back,
                        180,
                        INVALID_VALUE,
                        INVALID_VALUE,
                        INVALID_VALUE,
                        INVALID_VALUE,
                        RK30_PIN3_PB4,
                        (CONS(RK29_CAM_SENSOR_OV5640,_PWRDN_ACTIVE)&0x10)|0x01,
                        0,
                        CONS(RK29_CAM_SENSOR_OV5640,_FULL_RESOLUTION),
                        0x00,
                        3,
                        100000,
                        CONS(RK29_CAM_SENSOR_OV5640,_I2C_ADDR),
                        0,
                        24),
    new_camera_device_ex(RK29_CAM_SENSOR_GC2035,
                        back,
                        180,
                        INVALID_VALUE,
                        INVALID_VALUE,
                        INVALID_VALUE,
                        INVALID_VALUE,
                        RK30_PIN3_PB4,
                        (CONS(RK29_CAM_SENSOR_GC2035,_PWRDN_ACTIVE)&0x10)|0x01,
                        0,
                        CONS(RK29_CAM_SENSOR_GC2035,_FULL_RESOLUTION),
                        0x00,
                        3,
                        100000,
                        CONS(RK29_CAM_SENSOR_GC2035,_I2C_ADDR),
                        0,
                        24),
#endif

#if defined(CONFIG_TCHIP_MACH_SINGLE_FRONT_CAMERA)
    new_camera_device_ex(RK29_CAM_SENSOR_GC2035,
                        front,
                        180,
                        INVALID_VALUE,
                        INVALID_VALUE,
                        INVALID_VALUE,
                        INVALID_VALUE,
                        RK30_PIN3_PB5,
                        (CONS(RK29_CAM_SENSOR_GC2035,_PWRDN_ACTIVE)&0x10)|0x01,
                        0,
                        CONS(RK29_CAM_SENSOR_GC2035,_FULL_RESOLUTION),
                        0x00,
                        3,
                        100000,
                        CONS(RK29_CAM_SENSOR_GC2035,_I2C_ADDR),
                        0,
                        24),
    new_camera_device_ex(RK29_CAM_SENSOR_GC0308,
                        front,
                        180,
                        INVALID_VALUE,
                        INVALID_VALUE,
                        INVALID_VALUE,
                        INVALID_VALUE,
                        RK30_PIN3_PB5,
                        (CONS(RK29_CAM_SENSOR_GC0308,_PWRDN_ACTIVE)&0x10)|0x01,
                        0,
                        CONS(RK29_CAM_SENSOR_GC0308,_FULL_RESOLUTION),
                        0x00,
                        3,
                        100000,
                        CONS(RK29_CAM_SENSOR_GC0308,_I2C_ADDR),
                        0,
                        24),              
#endif
    new_camera_device_end
};
#endif


