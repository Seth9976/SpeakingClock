// 函数: sub_44dc90
// 地址: 0x44dc90
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_2c = ebx
int32_t esi
int32_t var_30 = esi
int32_t var_28 = 0
int32_t* var_34 = &var_4
int32_t (* var_38)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
**(arg1 + 8) = 0
**(arg1 - 4) = 0
int32_t eax_6 =
    *((zx.d(*(*(arg1 - 0x1c) + 0x39)) << 3) + &data_4ab834 + (zx.d(*(*(arg1 - 0x1c) + 0x3d)) << 2))
int32_t eax_8 = sub_44b944(*(arg1 - 0x1c))
int32_t var_14
(*data_4ac1fc)(*(arg1 - 0x18), eax_8, 0xb, eax_6, 0, 1, &var_14, ExceptionList, var_38, var_34)
int32_t var_10

if (*(arg1 - 0x20) != 0 && *(*(arg1 - 0x20) + 0x30) s> var_10)
    var_10 = *(*(arg1 - 0x20) + 0x30)

if (*(arg1 - 0x20) != 0 && *(*(arg1 - 0x20) + 0x34) s> var_14)
    var_14 = *(*(arg1 - 0x20) + 0x34)

int32_t var_c

if (*(arg1 - 0x21) == 0)
    int32_t* eax_42 = *(arg1 + 8)
    *eax_42 += var_10
    int32_t* eax_44 = *(arg1 - 4)
    *eax_44 += var_14
    int32_t var_24
    __return_addr = &var_24
    var_4 = 0
    int32_t var_8_1 = 0xe12
    var_c = *((zx.d(*(*(arg1 - 0x1c) + 0x39)) << 3) +
        &data_4ab834 + (zx.d(*(*(arg1 - 0x1c) + 0x3d)) << 2))
    int32_t var_10_2 = 0xb
    var_14 = sub_44b944(*(arg1 - 0x1c))
    int32_t eax_51 = *(arg1 - 0x18)
    (*data_4ac2a0)(eax_51, var_14, var_10_2, var_c, var_8_1, var_4)
    int32_t* edx_11 = *(arg1 + 8)
    int32_t var_1c
    *edx_11 += var_1c + eax_51
    int32_t* edx_13 = *(arg1 - 4)
    int32_t var_20
    *edx_13 += var_24 + var_20
    __return_addr = &var_c
    var_4 = 1
    int32_t var_8_2 = 0
    var_c = 0
    int32_t var_10_3 = 0xd
    var_14 = sub_44b944(*(arg1 - 0x1c))
    (*data_4ac1fc)(*(arg1 - 0x18), var_14, var_10_3, var_c, var_8_2, var_4)
    int32_t* eax_65 = *(arg1 - 4)
    *eax_65 += var_c
    __return_addr = &var_24
    var_4 = 0
    int32_t var_8_3 = 0xe11
    var_c = 0
    int32_t var_10_4 = 0xd
    var_14 = sub_44b944(*(arg1 - 0x1c))
    (*data_4ac2a0)(*(arg1 - 0x18), var_14, var_10_4, var_c, var_8_3, var_4)
    int32_t* edx_16 = *(arg1 - 4)
    *edx_16 += var_24 + var_20
    __return_addr = &var_24
    var_4 = 0
    int32_t var_8_4 = 0xe11
    var_c = 1
    int32_t var_10_5 = 0xe
    var_14 = sub_44b944(*(arg1 - 0x1c))
    (*data_4ac2a0)(*(arg1 - 0x18), var_14, var_10_5, var_c, var_8_4, var_4)
    int32_t* edx_18 = *(arg1 - 4)
    *edx_18 += var_24 + var_20
    __return_addr = &var_c
    var_4 = 1
    int32_t var_8_5 = 0
    var_c = 1
    int32_t var_10_6 = 0x10
    var_14 = sub_44b944(*(arg1 - 0x1c))
    (*data_4ac1fc)(*(arg1 - 0x18), var_14, var_10_6, var_c, var_8_5, var_4)
    int32_t* eax_89 = *(arg1 - 4)
    int32_t edx_19 = var_c
    int32_t temp0_1 = *eax_89
    *eax_89 += edx_19
    sub_404fb0(*(*(arg1 - 0x1c) + 0x30), sub_44e063+5)
    
    if (temp0_1 == neg.d(edx_19))
        __return_addr = &var_c
        var_4 = 1
        int32_t var_8_6 = 0
        var_c = 0
        int32_t var_10_7 = 0xf
        var_14 = sub_44b944(*(arg1 - 0x1c))
        (*data_4ac1fc)(*(arg1 - 0x18), var_14, var_10_7, var_c, var_8_6, var_4)
        __return_addr = &var_24
        var_4 = 0
        int32_t var_8_7 = 0xe11
        var_c = 0
        int32_t var_10_8 = 0xf
        var_14 = sub_44b944(*(arg1 - 0x1c))
        int32_t eax_101 = *(arg1 - 0x18)
        (*data_4ac2a0)(eax_101, var_14, var_10_8, var_c, var_8_7, var_4)
        **(arg1 + 8) = var_8_7 + eax_101
        int32_t* eax_107 = *(arg1 - 4)
        *eax_107 += var_c
else
    int32_t* eax_32
    
    if (*(arg1 - 0x20) == 0)
        if (*(*(arg1 - 0x1c) + 0x4c) != 0)
            eax_32 = *(arg1 - 4)
            *eax_32 += var_14
    else if (*(*(arg1 - 0x1c) + 0x40) != 0xffffffff || *(*(arg1 - 0x1c) + 0x4c) != 0)
        eax_32 = *(arg1 - 4)
        *eax_32 += var_14
    __return_addr = &var_c
    var_4 = 1
    int32_t var_8 = 0
    var_c = 1
    int32_t var_10_1 = 8
    var_14 = sub_44b944(*(arg1 - 0x1c))
    (*data_4ac1fc)(*(arg1 - 0x18), var_14, var_10_1, var_c, var_8, var_4)
    int32_t* eax_40 = *(arg1 + 8)
    *eax_40 += var_8
sub_403578(arg1 - 0x14, 0x10, 0)

if (*(arg1 - 0x28) == 0)
    if (sub_403df4(*(arg1 - 0x28), 0x44a554) == 0)
        *(arg1 - 0x29) = 0
    else
        *(arg1 - 0x29) = *(*(arg1 - 0x28) + 0x60)
else
    *(arg1 - 0x29) = 0

int16_t esi_1 = *(*(arg1 - 0x1c) + 0x60)

if (esi_1 == 0)
    sub_404c20(arg1 - 0x30, *(*(arg1 - 0x1c) + 0x30))
else
    ebp_1 = sub_44a9d0(esi_1, &var_28)
    sub_404ea0(ebp_1[2] - 0x30, *(*(arg1 - 0x1c) + 0x30), ebp_1[-9])

*(ebp_1[2] - 0x34) =
    zx.d(*((zx.d(*(ebp_1[2] - 0x29)) << 1) + &data_4ab82c)) | 0x40 | 0x20 | 0x100 | 0x400
__return_addr = ebp_1[2] - 0x14
var_4 = 0
int32_t eax_133 = *(ebp_1[2] - 0x34)
void* ebp_2 = sub_44bc30(*(arg1 - 0x1c), *(ebp_1[2] - 0x38), *(ebp_1[2] - 0x30), eax_133, var_4)
int32_t* edx_32 = *(*(ebp_2 + 8) - 4)
*edx_32 += *(*(ebp_2 + 8) - 0xc) - *(*(ebp_2 + 8) - 0x14)
fsbase->NtTib.ExceptionList = eax_133
__return_addr = sub_44e058
sub_404b88(ebp_2 - 0x24)
return ebp_2 - 0x24
