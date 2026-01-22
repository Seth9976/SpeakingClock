// 函数: sub_499068
// 地址: 0x499068
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_1c = *arg1
int32_t var_18
int32_t* edi = &var_18
void* esi_1 = &arg1[1]
*edi = *esi_1
void* edi_1 = &edi[1]
void* esi_2 = esi_1 + 4
*edi_1 = *esi_2
*(edi_1 + 4) = *(esi_2 + 4)
int32_t var_c = *arg2
int32_t var_8 = arg2[1]
uint32_t esi_8 = zx.d(arg3)
int32_t var_2c
int32_t var_14
int32_t var_10
sub_418a64(var_14 - esi_8, esi_8 + var_18, esi_8 + var_1c, &var_2c, var_10 - esi_8)
int32_t edx_2 = var_8
int32_t var_24
int32_t var_20

if (edx_2 s> var_20)
    if (var_c s<= var_24)
        if (var_c s>= var_2c)
            return 0xf
        
        return 0x10
    
    return 0x11

int32_t var_28

if (edx_2 s>= var_28)
    if (var_c s> var_24)
        return 0xb
    
    if (var_c s>= var_2c)
        return 0
    
    return 0xa

if (var_c s> var_24)
    return 0xe

if (var_c s>= var_2c)
    return 0xc

return 0xd
