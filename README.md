# SimpleKV
Simple Key-Value database (in memory so far)

#### Usage

```cpp
#include <simplekv.h>

SIMPLEKV::SimpleKV db;
```

#### Basic type

```cpp
db.Add("Age", (uint8_t)0);
db.Put("Age", (uint8_t)123);
printf("Age: %d\n", db.Get("Age")->to_uint8());
// > Age: 123

db.Add("float", (float)6.666);
db.Add("double", (double)2333.3333333333);
printf("%f %.10f\n", db.Get("float")->to_float(), db.Get("double")->to_double());
// > 6.666000 2333.3333333333
```

#### Array

```cpp
uint16_t data[10] = {0};
for (int i = 0; i < 10; i++) {
    data[i] = i * 3;
}
db.Add("Data", data);
for (int i = 0; i < 10; i++) {
    printf("%d ", db.Get("Data")->to_uint16_ptr()[i]);
}
printf("\n");
// > 0 3 6 9 12 15 18 21 24 27
```

#### Custom type

```cpp
struct MyType_t {
    int a;
    float b;
    std::string status;
};
MyType_t my_type_1 = {11, 1.11, "????"};
MyType_t my_type_2 = {-22, -2.22, "nihao"};
MyType_t my_type_temp = {0};

db.Add("MyType_1", (void*)&my_type_1, sizeof(MyType_t));
db.Add("MyType_2", (void*)&my_type_2, sizeof(MyType_t));

my_type_temp = *(MyType_t*)db.Get("MyType_1")->addr;
printf("%d %.2f %s\n", my_type_temp.a, my_type_temp.b, my_type_temp.status.c_str());
// > 11 1.11 ????

my_type_temp = *(MyType_t*)db.Get("MyType_2")->addr;
printf("%d %.2f %s\n", my_type_temp.a, my_type_temp.b, my_type_temp.status.c_str());
// > -22 -2.22 nihao
```

