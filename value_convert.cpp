/**
 * @file value_convert.cpp
 * @author Forairaaaaa
 * @brief 
 * @version 0.1
 * @date 2023-05-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "simplekv.h"

#define OK2Convert(typeSize) (this->addr == nullptr) || (this->size < typeSize)


namespace SIMPLEKV {


    uint8_t ValueInfo_t::to_uint8_t()
    {
        if (OK2Convert(sizeof(uint8_t))) {
            return 0;
        }
        return *(uint8_t*)this->addr;
    }


    uint16_t ValueInfo_t::to_uint16_t()
    {
        if (OK2Convert(sizeof(uint16_t))) {
            return 0;
        }
        return *(uint16_t*)this->addr;
    }


    uint32_t ValueInfo_t::to_uint32_t()
    {
        if (OK2Convert(sizeof(uint32_t))) {
            return 0;
        }
        return *(uint32_t*)this->addr;
    }


    uint64_t ValueInfo_t::to_uint64_t()
    {
        if (OK2Convert(sizeof(uint64_t))) {
            return 0;
        }
        return *(uint64_t*)this->addr;
    }


    int8_t ValueInfo_t::to_int8_t()
    {
        if (OK2Convert(sizeof(int8_t))) {
            return 0;
        }
        return *(int8_t*)this->addr;
    }


    int16_t ValueInfo_t::to_int16_t()
    {
        if (OK2Convert(sizeof(int16_t))) {
            return 0;
        }
        return *(int16_t*)this->addr;
    }


    int32_t ValueInfo_t::to_int32_t()
    {
        if (OK2Convert(sizeof(int32_t))) {
            return 0;
        }
        return *(int32_t*)this->addr;
    }


    int64_t ValueInfo_t::to_int64_t()
    {
        if (OK2Convert(sizeof(int64_t))) {
            return 0;
        }
        return *(int64_t*)this->addr;
    }


}

