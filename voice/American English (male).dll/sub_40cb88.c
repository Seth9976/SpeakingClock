// 函数: sub_40cb88
// 地址: 0x40cb88
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t* esp_2 = &var_4
int32_t* ebp_1 = &var_4
int32_t i_1 = 8
int32_t i

do
    *(esp_2 - 4) = 0
    *(esp_2 - 8) = 0
    esp_2 -= 8
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t entry_ebx
*(esp_2 - 4) = entry_ebx
*(esp_2 - 8) = &var_4
*(esp_2 - 0xc) = j_sub_40338c
TEB* fsbase
*(esp_2 - 0x10) = fsbase->NtTib.ExceptionList
void* esp_6 = esp_2 - 0x10
fsbase->NtTib.ExceptionList = esp_6

if (arg1 s> 0x8002000a)
    if (arg1 == 0x8002000b)
        void* var_10
        sub_4053d8(data_413514, &var_10)
        int32_t edx_6
        edx_6.b = 1
        sub_4033c4(sub_409ee8(sub_40c49c+0x23c, edx_6, var_10))
        esp_6 += 0x14
    else if (arg1 == 0x8002000d)
        void* var_14
        sub_4053d8(data_413578, &var_14)
        int32_t edx_8
        edx_8.b = 1
        sub_4033c4(sub_409ee8(sub_40c49c+0x2a0, edx_8, var_14))
        esp_6 += 0x14
    else if (arg1 == 0x8007000e)
        void* var_1c
        sub_4053d8(data_41340c, &var_1c)
        int32_t edx_12
        edx_12.b = 1
        sub_4033c4(sub_409ee8(sub_40c49c+0x3d4, edx_12, var_1c))
        esp_6 += 0x14
    else if (arg1 == 0x80070057)
        void* var_20
        sub_4053d8(data_413420, &var_20)
        int32_t edx_14
        edx_14.b = 1
        sub_4033c4(sub_409ee8(sub_40c49c+0x174, edx_14, var_20))
        esp_6 += 0x14
    else
    label_40cd5c:
        int32_t var_3c = *data_413558
        char var_38_1 = 0xb
        uint32_t var_34_1 = arg1
        char var_30_1 = 0
        int32_t var_40
        sub_4096e0(arg1, &var_40)
        int32_t var_2c_1 = var_40
        char var_28_1 = 0xb
        *(esp_6 - 4) = &var_3c
        *(esp_6 - 8) = 2
        int32_t var_44
        sub_4053d8(data_413468, &var_44)
        int32_t edx_19
        edx_19.b = 1
        int32_t eax_31
        eax_31, ebp_1 = sub_409f24("\rEVariantError", edx_19)
        sub_4033c4(eax_31)
        esp_6 += 0x14
else if (arg1 == 0x8002000a)
    void* var_c
    sub_4053d8(data_4133e8, &var_c)
    int32_t edx_4
    edx_4.b = 1
    sub_4033c4(sub_409ee8(sub_40c49c+0x110, edx_4, var_c))
    esp_6 += 0x14
else if (arg1 s> 0x80020005)
    if (arg1 == 0x80020008)
        void* var_8
        sub_4053d8(data_41354c, &var_8)
        int32_t edx_2
        edx_2.b = 1
        sub_4033c4(sub_409ee8(sub_40c49c+0x1d8, edx_2, var_8))
        esp_6 += 0x14
    else
        if (arg1 != 0x80020009)
            goto label_40cd5c
        
        ebp_1 = sub_40ca44()
else if (arg1 == 0x80020005)
    ebp_1 = sub_40c954()
else if (arg1 == 0x80004001)
    void* var_18
    sub_4053d8(data_4134bc, &var_18)
    int32_t edx_10
    edx_10.b = 1
    sub_4033c4(sub_409ee8(sub_40c49c+0x370, edx_10, var_18))
    esp_6 += 0x14
else
    if (arg1 != 0x8000ffff)
        goto label_40cd5c
    
    void* var_24
    sub_4053d8(data_4133e4, &var_24)
    int32_t edx_16
    edx_16.b = 1
    sub_4033c4(sub_409ee8(sub_40c49c+0x43c, edx_16, var_24))
    esp_6 += 0x14

*(esp_6 + 8)
fsbase->NtTib.ExceptionList = *esp_6
*(esp_6 + 8) = sub_40cdd4
sub_403a10(&ebp_1[-0x10], 2)
return sub_403a10(&ebp_1[-8], 8)
