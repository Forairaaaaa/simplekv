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
    };
    


    class SimpleKV {
        private:
            std::vector<ValueInfo_t> _value_list;


            /* Memory API */
            inline void _free(void* ptr) { free(ptr); }
            inline void* _malloc(size_t size) { return malloc(size); }
            inline void* _memcpy(void* __restrict__ dest, const void* __restrict__ src, size_t n) { return memcpy(dest, src, n); }


            ValueInfo_t _ret_buffer;
                

        public:
            SimpleKV() {}
            ~SimpleKV() { DeleteAll(); }


            inline size_t Size() { return _value_list.size(); }


            int Add(const char* key, size_t size);
            int Put(const char* key, void* value, size_t size);
            ValueInfo_t* Get(const char* key);


            int Delete(const char* key);
            void DeleteAll();


    };



}

