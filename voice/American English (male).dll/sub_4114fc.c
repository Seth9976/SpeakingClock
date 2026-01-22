// 函数: sub_4114fc
// 地址: 0x4114fc
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_2c = ebx
int32_t esi
int32_t var_30 = esi
int32_t edi
int32_t var_34 = edi
int32_t* esp_1 = &var_34
int32_t var_24 = 0
void* var_28 = nullptr
int32_t var_1c = 0
void* var_20 = nullptr

if (arg2.b != 0)
    void var_44
    esp_1 = &var_44
    arg1 = sub_4030f8(arg3, arg2)

char var_5 = arg2.b
*(esp_1 - 4) = &var_4
*(esp_1 - 8) = j_sub_40338c
TEB* fsbase
*(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
void* esp_4 = esp_1 - 0xc
fsbase->NtTib.ExceptionList = esp_4
int32_t var_18

if (arg5 != 0xffff)
    sub_4113f4(arg1, 0, sub_406e18(arg3, zx.d(arg5)))
    
    if (arg1[1] s< 0)
        sub_406fbc(arg3, &var_24)
        var_18 = var_24
        char var_14_2 = 0xb
        sub_4096e0(GetLastError(), &var_28)
        void* var_10_2 = var_28
        char var_c_2 = 0xb
        *(esp_4 - 4) = &var_18
        *(esp_4 - 8) = 1
        int32_t edx_7
        edx_7.b = 1
        int32_t eax_17
        eax_17, ebp_1 = sub_409fe0(0x40ee44, edx_7, data_4133ac)
        sub_4033c4(eax_17)
else
    sub_4113f4(arg1, 0, sub_406e94())
    
    if (arg1[1] s< 0)
        sub_406fbc(arg3, &var_1c)
        var_18 = var_1c
        char var_14_1 = 0xb
        sub_4096e0(GetLastError(), &var_20)
        void* var_10_1 = var_20
        char var_c_1 = 0xb
        *(esp_4 - 4) = &var_18
        *(esp_4 - 8) = 1
        int32_t edx_3
        edx_3.b = 1
        int32_t eax_8
        eax_8, ebp_1 = sub_409fe0(0x40ede8, edx_3, data_413580)
        sub_4033c4(eax_8)
*(esp_4 + 8)
fsbase->NtTib.ExceptionList = *esp_4
*(esp_4 + 8) = sub_41162c
return sub_403a10(&ebp_1[-9], 4)
