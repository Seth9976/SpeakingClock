// 函数: sub_40c600
// 地址: 0x40c600
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
ebx.b = 1
int32_t var_24 = 1
int32_t var_14 = 0
int32_t var_10 = 0
double var_1c
int32_t* eax_1
int32_t ecx_1
void* result
void* esi_1
eax_1, ecx_1, result, esi_1 = sub_40bfb0(arg1, &var_24, &var_1c)

if (eax_1.b != 0)
    eax_1 = esi_1
    
    if (eax_1 != 0)
        eax_1 = *(eax_1 - 4)
    
    if (eax_1 s>= var_24)
        eax_1, ecx_1 = sub_40c2fc(esi_1, &var_24, &var_14)
    else
        eax_1.b = 1
    
    eax_1.b ^= 1
else
    eax_1.b = 1

if (eax_1.b != 0)
    return sub_40c594(esi_1, arg2, ecx_1)

long double x87_r7_1 = fconvert.t(var_1c)
long double temp0_1 = fconvert.t(0f)
x87_r7_1 - temp0_1
eax_1.w = (x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
    | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe

if (test_bit(eax_1:1.b, 0))
    *arg2 = fconvert.d(fconvert.t(var_1c) - fconvert.t(var_14.q))
else
    *arg2 = fconvert.d(fconvert.t(var_1c) + fconvert.t(var_14.q))

return result
