/**
 * @file simplekv.h
 * @author Forairaaaaa
 * @brief 
 * @version 0.1
 * @date 2023-05-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <vector>


namespace SIMPLEKV {


    struct ValueInfo_t {
        std::string key = "";
        size_t size = 0;
        void* addr = nullptr;

        uint8_t to_uint8_t();
        uint16_t to_uint16_t();
        uint32_t to_uint32_t();
        uint64_t to_uint64_t();

        int8_t to_int8_t();
        int16_t to_int16_t();
        int32_t to_int32_t();
        int64_t to_int64_t();
        
    };
    


    class SimpleKV {
        private:
            std::vector<ValueInfo_t> _value_list;
            ValueInfo_t _ret_buffer;

            /* Memory API */
            inline void _free(void* ptr) { free(ptr); }
            inline void* _malloc(size_t size) { return malloc(size); }
            inline void* _memcpy(void* __restrict__ dest, const void* __restrict__ src, size_t n) { return memcpy(dest, src, n); }


        public:
            SimpleKV() {}
            ~SimpleKV() { DeleteAll(); }


            inline size_t Size() { return _value_list.size(); }
            std::string GetKey(uint32_t item);


            /* Basic data operation */
            int Add(const char* key, size_t size);
            int Put(const char* key, void* value, size_t size);
            ValueInfo_t* Get(const char* key);
            int Delete(const char* key);
            void DeleteAll();




    };



}

