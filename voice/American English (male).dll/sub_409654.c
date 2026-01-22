// 函数: sub_409654
// 地址: 0x409654
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebx
ebx.b = 1
int32_t var_24 = 1
int32_t var_14 = 0
int32_t var_10 = 0
double var_1c
char eax_1
int32_t ecx_1
int32_t result
void* esi_1
eax_1, ecx_1, result, esi_1 = sub_4090e8(arg1, &var_24, &var_1c)

if (eax_1 != 0)
    double* eax_3
    
    if (sub_403c88(esi_1) s< var_24)
    label_4096ac:
        long double x87_r7_1 = fconvert.t(var_1c)
        long double temp0_1 = fconvert.t(0f)
        x87_r7_1 - temp0_1
        eax_3.w = (x87_r7_1 < temp0_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe
        
        if (test_bit(eax_3:1.b, 0))
            *arg2 = fconvert.d(fconvert.t(var_1c) - fconvert.t(var_14.q))
        else
            *arg2 = fconvert.d(fconvert.t(var_1c) + fconvert.t(var_14.q))
        
        return result
    
    eax_3, ecx_1 = sub_40942c(esi_1, &var_24, &var_14)
    
    if (eax_3.b != 0)
        goto label_4096ac

return sub_409620(esi_1, arg2, ecx_1)
