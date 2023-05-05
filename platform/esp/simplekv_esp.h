/**
 * @file simplekv_esp.h
 * @author Forairaaaaa
 * @brief 
 * @version 0.1
 * @date 2023-05-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once
#include "../../simplekv.h"
#include <freertos/FreeRTOS.h>
#include <freertos/semphr.h>


namespace SIMPLEKV {


    class SimpleKV_ESP : public SimpleKV {

        private:
            bool _use_psram;

            /* malloc overide */
            void* _malloc(size_t size);


        public:
            SimpleKV_ESP(bool usePSRAM = false) { _use_psram = usePSRAM; }
            ~SimpleKV_ESP() {}

            bool UsingPSRAM() { return _use_psram; }




            


    };

}
