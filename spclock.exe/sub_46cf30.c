// 函数: sub_46cf30
// 地址: 0x46cf30
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 == 0)
    return 

(*(*arg2 + 0x44))()
uint32_t eax_2 = zx.d(*(arg1[0x94] + 0x1a))
int32_t var_30 = var_30 - eax_2
int32_t var_28 = var_28 + eax_2
uint32_t eax_4 = zx.d(*(arg1[0x95] + 0x1a))
int32_t var_2c
int32_t var_2c_1 = var_2c - eax_4
int32_t var_24
int32_t var_24_1 = var_24 + eax_4
void var_18
sub_457260(arg2, &var_30, &var_18)
int32_t var_20
sub_457310(arg1, &var_18, &var_20)
var_30 = var_20
sub_457260(arg2, &var_28, &var_18)
sub_457310(arg1, &var_18, &var_20)
var_28 = var_20
int32_t var_1c
int32_t var_24_2 = var_1c
int32_t esi_1 = var_30

if (esi_1 s>= 0)
    int32_t eax_15 = sub_45714c(arg1)
    int32_t ebp_1 = var_28
    
    if (eax_15 s< ebp_1)
        if (sub_45714c(arg1) s< ebp_1 - esi_1)
            var_28 = sub_45714c(arg1) + var_30
        
        void* esi_2 = arg1[0x94]
        int32_t eax_22 = sub_45714c(arg1)
        sub_46c7a0(esi_2, *(esi_2 + 0xc) + var_28 - eax_22)
else
    void* eax_13 = arg1[0x94]
    sub_46c7a0(eax_13, *(eax_13 + 0xc) + esi_1)

if (var_1c s< 0)
    void* eax_24 = arg1[0x95]
    sub_46c7a0(eax_24, *(eax_24 + 0xc) + var_1c)
    return 

if (sub_457190(arg1) s>= var_24_2)
    return 

if (sub_457190(arg1) s< var_24_2 - var_1c)
    var_24_2 = sub_457190(arg1) + var_1c

void* esi_4 = arg1[0x95]
int32_t eax_32 = sub_457190(arg1)
sub_46c7a0(esi_4, *(esi_4 + 0xc) + var_24_2 - eax_32)
