// 函数: sub_4748bc
// 地址: 0x4748bc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi_2 = *(*(arg3 - 4) + 8) - **(arg3 - 4)

if (esi_2 s< 0 || arg2 - 3 u< 2)
    esi_2 = arg1[0x12]

int32_t var_14 = *(*(arg3 - 4) + 0xc) - *(*(arg3 - 4) + 4)

if (var_14 s< 0 || arg2 - 1 u< 2)
    var_14 = arg1[0x13]

int32_t var_10
int32_t var_c

if (arg2 != 1 || *(arg1 + 0x273) != 2)
    var_c = **(arg3 - 4)
    var_10 = *(*(arg3 - 4) + 4)
else
    var_c = sub_46e120(arg1)
    var_10 = sub_46e140(arg1)
    esi_2 = (*data_4ac140)(0x3d)

if (arg2 == 1)
    void* eax_26 = *(arg3 - 4)
    *(eax_26 + 4) += var_14
else if (arg2 == 2)
    void* eax_28 = *(arg3 - 4)
    *(eax_28 + 0xc) -= var_14
    var_10 = *(*(arg3 - 4) + 0xc)
else if (arg2 == 3)
    int32_t* eax_33 = *(arg3 - 4)
    *eax_33 += esi_2
else if (arg2 == 4)
    void* eax_35 = *(arg3 - 4)
    *(eax_35 + 8) -= esi_2
    var_c = *(*(arg3 - 4) + 8)

(*(*arg1 + 0x88))(var_14, esi_2)

if (*(arg1 + 0x273) == 2)
    esi_2 -= var_c
    var_14 -= var_10

void** result = arg1[0x12]

if (esi_2 != result || arg1[0x13] != var_14)
    switch (zx.d(arg2))
        case 1
            result = var_14 - arg1[0x13]
            void* edx_8 = *(arg3 - 4)
            *(edx_8 + 4) -= result
        case 2
            result = var_14 - arg1[0x13]
            void* edx_10 = *(arg3 - 4)
            *(edx_10 + 0xc) += result
        case 3
            void* esi_3 = esi_2 - result
            result = *(arg3 - 4)
            *result -= esi_3
        case 4
            void* esi_4 = esi_2 - result
            result = *(arg3 - 4)
            result[2] += esi_4
        case 5
            void* eax_47 = *(arg3 - 4)
            *(eax_47 + 8) += esi_2 - result
            result = var_14 - arg1[0x13]
            void* edx_12 = *(arg3 - 4)
            *(edx_12 + 0xc) += result

return result
