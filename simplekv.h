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


        uint8_t to_uint8();
        uint16_t to_uint16();
        uint32_t to_uint32();
        uint64_t to_uint64();
        int8_t to_int8();
        int16_t to_int16();
        int32_t to_int32();
        int64_t to_int64();
        float to_float();
        double to_double();
        std::string to_string();

        uint8_t* to_uint8_ptr();
        uint16_t* to_uint16_ptr();
        uint32_t* to_uint32_ptr();
        uint64_t* to_uint64_ptr();
        int8_t* to_int8_ptr();
        int16_t* to_int16_ptr();
        int32_t* to_int32_ptr();
        int64_t* to_int64_ptr();
        float* to_float_ptr();
        double* to_double_ptr();
        std::string* to_string_ptr();
        
    };
    

    class SimpleKV {
        private:
            std::vector<ValueInfo_t> _value_list;
            ValueInfo_t _ret_buffer;

        protected:
            /* Memory API */
            virtual void _free(void* ptr) { free(ptr); }
            virtual void* _malloc(size_t size) { return malloc(size); }
            virtual void* _memcpy(void* __restrict__ dest, const void* __restrict__ src, size_t n) { return memcpy(dest, src, n); }


        public:
            SimpleKV() {}
            ~SimpleKV() { DeleteAll(); }


            inline size_t Size() { return _value_list.size(); }
            std::string GetKey(uint32_t item);
            bool Exist(const char* key);
            size_t MemoryUsage();


            /* Basic data operation */
            int Add(const char* key, void* value, size_t size);
            int Put(const char* key, void* value, size_t size);
            ValueInfo_t* Get(const char* key);
            int Delete(const char* key);
            void DeleteAll();


            /* Wrap of type convertion */
            inline int Add(const char* key, uint8_t value) { return Add(key, &value, sizeof(uint8_t)); }
            inline int Add(const char* key, uint16_t value) { return Add(key, &value, sizeof(uint16_t)); }
            inline int Add(const char* key, uint32_t value) { return Add(key, &value, sizeof(uint32_t)); }
            inline int Add(const char* key, uint64_t value) { return Add(key, &value, sizeof(uint64_t)); }
            inline int Add(const char* key, int8_t value) { return Add(key, &value, sizeof(int8_t)); }
            inline int Add(const char* key, int16_t value) { return Add(key, &value, sizeof(int16_t)); }
            inline int Add(const char* key, int32_t value) { return Add(key, &value, sizeof(int32_t)); }
            inline int Add(const char* key, int64_t value) { return Add(key, &value, sizeof(int64_t)); }
            inline int Add(const char* key, float value) { return Add(key, &value, sizeof(float)); }
            inline int Add(const char* key, double value) { return Add(key, &value, sizeof(double)); }
            inline int Add(const char* key, std::string value) { return Add(key, &value, sizeof(std::string)); }

            inline int Add(const char* key, uint8_t* value) { return Add(key, &value, sizeof(uint8_t*)); }
            inline int Add(const char* key, uint16_t* value) { return Add(key, &value, sizeof(uint16_t*)); }
            inline int Add(const char* key, uint32_t* value) { return Add(key, &value, sizeof(uint32_t*)); }
            inline int Add(const char* key, uint64_t* value) { return Add(key, &value, sizeof(uint64_t*)); }
            inline int Add(const char* key, int8_t* value) { return Add(key, &value, sizeof(int8_t*)); }
            inline int Add(const char* key, int16_t* value) { return Add(key, &value, sizeof(int16_t*)); }
            inline int Add(const char* key, int32_t* value) { return Add(key, &value, sizeof(int32_t*)); }
            inline int Add(const char* key, int64_t* value) { return Add(key, &value, sizeof(int64_t*)); }
            inline int Add(const char* key, float* value) { return Add(key, &value, sizeof(float*)); }
            inline int Add(const char* key, double* value) { return Add(key, &value, sizeof(double*)); }
            inline int Add(const char* key, std::string* value) { return Add(key, &value, sizeof(std::string*)); }


            inline int Put(const char* key, uint8_t value) { return Put(key, &value, sizeof(uint8_t)); }
            inline int Put(const char* key, uint16_t value) { return Put(key, &value, sizeof(uint16_t)); }
            inline int Put(const char* key, uint32_t value) { return Put(key, &value, sizeof(uint32_t)); }
            inline int Put(const char* key, uint64_t value) { return Put(key, &value, sizeof(uint64_t)); }
            inline int Put(const char* key, int8_t value) { return Put(key, &value, sizeof(int8_t)); }
            inline int Put(const char* key, int16_t value) { return Put(key, &value, sizeof(int16_t)); }
            inline int Put(const char* key, int32_t value) { return Put(key, &value, sizeof(int32_t)); }
            inline int Put(const char* key, int64_t value) { return Put(key, &value, sizeof(int64_t)); }
            inline int Put(const char* key, float value) { return Put(key, &value, sizeof(float)); }
            inline int Put(const char* key, double value) { return Put(key, &value, sizeof(double)); }
            inline int Put(const char* key, std::string value) { return Put(key, &value, sizeof(std::string)); }

            inline int Put(const char* key, uint8_t* value) { return Put(key, &value, sizeof(uint8_t*)); }
            inline int Put(const char* key, uint16_t* value) { return Put(key, &value, sizeof(uint16_t*)); }
            inline int Put(const char* key, uint32_t* value) { return Put(key, &value, sizeof(uint32_t*)); }
            inline int Put(const char* key, uint64_t* value) { return Put(key, &value, sizeof(uint64_t*)); }
            inline int Put(const char* key, int8_t* value) { return Put(key, &value, sizeof(int8_t*)); }
            inline int Put(const char* key, int16_t* value) { return Put(key, &value, sizeof(int16_t*)); }
            inline int Put(const char* key, int32_t* value) { return Put(key, &value, sizeof(int32_t*)); }
            inline int Put(const char* key, int64_t* value) { return Put(key, &value, sizeof(int64_t*)); }
            inline int Put(const char* key, float* value) { return Put(key, &value, sizeof(float*)); }
            inline int Put(const char* key, double* value) { return Put(key, &value, sizeof(double*)); }
            inline int Put(const char* key, std::string* value) { return Put(key, &value, sizeof(std::string*)); }
            
    };


}

