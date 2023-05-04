/**
 * @file simplekv.cpp
 * @author Forairaaaaa
 * @brief 
 * @version 0.1
 * @date 2023-05-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "simplekv.h"


namespace SIMPLEKV {




    
    int SimpleKV::Add(const char* key, size_t size)
    {
        /* If already exist */
        for (auto i : _value_list) {
            if (i.key == key) {
                return -1;
            }
        }

        ValueInfo_t new_item;
        new_item.key = key;
        new_item.size = size;
        new_item.addr = _malloc(size);
        _value_list.push_back(new_item);
        return 0;
    }



    int SimpleKV::Put(const char* key, void* value, size_t size)
    {
        /* Find key */
        for (auto i : _value_list) {
            if (i.key == key) {
                /* Resize */
                if (size > i.size) {
                    size = i.size;
                }
                _memcpy(i.addr, value, size);
                return 0;
            }
        }

        return -1;
    }




    ValueInfo_t* SimpleKV::Get(const char* key)
    {
        for (auto i : _value_list) {
            if (i.key == key) {
                _ret_buffer.key = i.key;
                _ret_buffer.size = i.size;
                _ret_buffer.addr = i.addr;
                return &_ret_buffer;
            }
        }
        _ret_buffer.key = "KeyNotFound";
        _ret_buffer.size = 0;
        _ret_buffer.addr = nullptr;
        return &_ret_buffer;
    }





    int SimpleKV::Delete(const char* key)
    {
        for (auto iter = _value_list.begin(); iter != _value_list.end(); iter++) {
            if (iter->key == key) {
                /* Free memory */
                _free(iter->addr);
                /* Erase item */
                _value_list.erase(iter);
                return 0;
            }
        }
        /* Not found */
        return -1;
    }





    void SimpleKV::DeleteAll()
    {
        /* Free memory */
        for (auto i : _value_list) {
            _free(i.addr);
        }
        std::vector<ValueInfo_t>().swap(_value_list);
    }









}

