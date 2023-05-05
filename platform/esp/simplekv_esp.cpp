/**
 * @file simplekv_esp.cpp
 * @author Forairaaaaa
 * @brief 
 * @version 0.1
 * @date 2023-05-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "simplekv_esp.h"
#include <esp_log.h>

#define TAG "simplekv"

namespace SIMPLEKV {


    void* SimpleKV_ESP::_malloc(size_t size)
    {
        // ESP_LOGD(TAG, "malloc");
        if (_use_psram) {
            return heap_caps_malloc(size, MALLOC_CAP_SPIRAM);
        }
        return malloc(size);
    }


}
