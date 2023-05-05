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


    uint8_t ValueInfo_t::to_uint8()
    {
        if (OK2Convert(sizeof(uint8_t))) {
            return 0;
        }
        return *(uint8_t*)this->addr;
    }


    uint16_t ValueInfo_t::to_uint16()
    {
        if (OK2Convert(sizeof(uint16_t))) {
            return 0;
        }
        return *(uint16_t*)this->addr;
    }


    uint32_t ValueInfo_t::to_uint32()
    {
        if (OK2Convert(sizeof(uint32_t))) {
            return 0;
        }
        return *(uint32_t*)this->addr;
    }


    uint64_t ValueInfo_t::to_uint64()
    {
        if (OK2Convert(sizeof(uint64_t))) {
            return 0;
        }
        return *(uint64_t*)this->addr;
    }


    int8_t ValueInfo_t::to_int8()
    {
        if (OK2Convert(sizeof(int8_t))) {
            return 0;
        }
        return *(int8_t*)this->addr;
    }


    int16_t ValueInfo_t::to_int16()
    {
        if (OK2Convert(sizeof(int16_t))) {
            return 0;
        }
        return *(int16_t*)this->addr;
    }


    int32_t ValueInfo_t::to_int32()
    {
        if (OK2Convert(sizeof(int32_t))) {
            return 0;
        }
        return *(int32_t*)this->addr;
    }


    int64_t ValueInfo_t::to_int64()
    {
        if (OK2Convert(sizeof(int64_t))) {
            return 0;
        }
        return *(int64_t*)this->addr;
    }


    float ValueInfo_t::to_float()
    {
        if (OK2Convert(sizeof(float))) {
            return 0;
        }
        return *(float*)this->addr;
    }


    double ValueInfo_t::to_double()
    {
        if (OK2Convert(sizeof(double))) {
            return 0;
        }
        return *(double*)this->addr;
    }


    std::string ValueInfo_t::to_string()
    {
        if (OK2Convert(sizeof(std::string))) {
            return "";
        }
        return *(std::string*)this->addr;
    }


    uint8_t* ValueInfo_t::to_uint8_ptr()
    {
        if (OK2Convert(sizeof(uint8_t*))) {
            return nullptr;
        }
        return *(uint8_t**)this->addr;
    }


    uint16_t* ValueInfo_t::to_uint16_ptr()
    {
        if (OK2Convert(sizeof(uint16_t*))) {
            return nullptr;
        }
        return *(uint16_t**)this->addr;
    }


    uint32_t* ValueInfo_t::to_uint32_ptr()
    {
        if (OK2Convert(sizeof(uint32_t*))) {
            return nullptr;
        }
        return *(uint32_t**)this->addr;
    }


    uint64_t* ValueInfo_t::to_uint64_ptr()
    {
        if (OK2Convert(sizeof(uint64_t*))) {
            return nullptr;
        }
        return *(uint64_t**)this->addr;
    }


    int8_t* ValueInfo_t::to_int8_ptr()
    {
        if (OK2Convert(sizeof(int8_t*))) {
            return nullptr;
        }
        return *(int8_t**)this->addr;
    }


    int16_t* ValueInfo_t::to_int16_ptr()
    {
        if (OK2Convert(sizeof(int16_t*))) {
            return nullptr;
        }
        return *(int16_t**)this->addr;
    }


    int32_t* ValueInfo_t::to_int32_ptr()
    {
        if (OK2Convert(sizeof(int32_t*))) {
            return nullptr;
        }
        return *(int32_t**)this->addr;
    }


    int64_t* ValueInfo_t::to_int64_ptr()
    {
        if (OK2Convert(sizeof(int64_t*))) {
            return nullptr;
        }
        return *(int64_t**)this->addr;
    }


    float* ValueInfo_t::to_float_ptr()
    {
        if (OK2Convert(sizeof(float*))) {
            return nullptr;
        }
        return *(float**)this->addr;
    }


    double* ValueInfo_t::to_double_ptr()
    {
        if (OK2Convert(sizeof(double*))) {
            return nullptr;
        }
        return *(double**)this->addr;
    }


    std::string* ValueInfo_t::to_string_ptr()
    {
        if (OK2Convert(sizeof(std::string*))) {
            return nullptr;
        }
        return *(std::string**)this->addr;
    }


}

